program display_createlib_python;
var fin,fout,foutc:text;
var sfun:ansistring;
var sp1,sp2:ansistring;
var sc1,sc2,sc3:ansistring;
var ifun:longword;

function i2s(i:longint):ansistring;
begin str(i,i2s);end;

function replace(var s:string;sfnd,srep:string;ps:longword):boolean;
var p:longword;
var ss:string;
begin
ss:=copy(s,ps,length(s)-ps+1);
p:=pos(sfnd,ss);
replace:=p>0;
if replace then
  begin
  p:=p+ps-1;
  delete(s,p,length(sfnd));
  insert(srep,s,p);
  replace(s,sfnd,srep,p+length(srep));
  end;
end;

function replace(var s:string;sfnd,srep:string):boolean;
begin
replace:=replace(s,sfnd,srep,1);
end;

function phrasetype(s:string):string;
begin
replace(s,'char','~');
replace(s,'~','c_char');
replace(s,'longint','c_long');
replace(s,'longword','c_ulong');
replace(s,'int64','c_longlong');
replace(s,'boolean','c_bool');
replace(s,'shortint','c_char');
replace(s,'byte','c_byte');
replace(s,'smallint','c_short');
replace(s,'word','c_ushort');
replace(s,'integer','c_int');
replace(s,'cardinal','c_uint');
replace(s,'single','c_float');
replace(s,'real','c_double');
replace(s,'pointer','c_void_p');
replace(s,'tprocedure','c_void_p');
replace(s,'pchar','c_char_p');
replace(s,'pc_char','c_char_p');
replace(s,'ansistring','c_char_p');
phrasetype:=s;
end;

function fun(s:ansistring;n:longword):ansistring;
var p1_fun,p2_fun,c1_fun,c2_fun,c3_fun:ansistring;
var p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12:longword;
var fname:ansistring;
var fpara:ansistring;
var fparb:ansistring;
var ftype:ansistring;
var fall:ansistring;
begin
p1:=pos(' ',s);
p2:=pos('(',s);
p3:=pos(')',s);
fname:=copy(s,p1+1,p2-p1-1);
fpara:=copy(s,p2+1,p3-p2-1);
fparb:=copy(s,p2+1,p3-p2-1);
fall:=copy(s,1,length(s));
insert(i2s(ifun),fall,p2);
repeat
p10:=pos('ansistring',fall);
if p10=0 then break;
delete(fall,p10,length('ansistring'));
insert('pchar',fall,p10);
until false;
fpara:=fpara+';';
fparb:=fparb+';';
p6:=0;
repeat
p4:=pos(':',fpara);
p5:=pos(';',fpara);
if p4=0 then break;
p8:=pos(':',fparb);
p7:=pos(';',copy(fparb,p8,length(fparb)-p8+1))+p8-1;
ftype:=copy(fparb,p8+1,p7-p8-1);
delete(fpara,p4,p5-p4+1);
delete(fparb,p8,p7-p8);
insert(',',fpara,p4);
for p9:=p8 downto p6+1 do
  if fparb[p9]=',' then
    begin
    insert(ftype+' ',fparb,p9+1);
    p7:=p7+length(ftype)+1;
    end;
insert(ftype+' ',fparb,p6+1);
p6:=p7;
fparb[p7]:=',';
until false;
if s[1]='p' then
  ftype:='void'
else
  ftype:=copy(s,p3+2,length(s)-p3-2);
p4:=pos('var ',fpara);
if p4>0 then delete(fpara,p4,4);
delete(fpara,length(fpara),1);
p4:=pos('var ',fparb);
if p4>0 then delete(fparb,p4,4);
delete(fparb,length(fparb),1);

p1_fun:='display.'+fname+'('+fpara+')';
if ftype='ansistring' then p1_fun:='pchar('+p1_fun+')';
if s[1]='f' then p1_fun:=fname+i2s(ifun)+':='+p1_fun;
p1_fun:='begin '+p1_fun+';end;';
p1_fun:=fall+'cdecl;'+#13#10+p1_fun;
p2_fun:='exports '+fname+i2s(ifun)+';';
fparb:=fparb+',';
repeat
p11:=pos(' ',fparb);
if p11=0 then break;
delete(fparb,p11,1);
while fparb[p11]<>',' do delete(fparb,p11,1);
until false;
//delete(fparb,length(fparb),1);
c1_fun:=lowercase(fname)+'=_dll.'+fname+i2s(ifun);
c2_fun:=lowercase(fname)+'.argtypes='+'('+phrasetype(fparb)+')';
c3_fun:=lowercase(fname)+'.restype='+phrasetype(ftype);
if fparb=',' then c2_fun:='';
if ftype='void' then c3_fun:='';
if n=1 then fun:=p1_fun;
if n=2 then fun:=p2_fun;
if n=3 then fun:=c1_fun;
if n=4 then fun:=c2_fun;
if n=5 then fun:=c3_fun;
end;


begin
assign(fout,'display_library.pas');
rewrite(fout);
assign(foutc,'display_library_fun.py');
rewrite(foutc);
assign(fin,'display_fun.txt');
reset(fin);
writeln(fout,'library disp;');
writeln(fout,'uses display;');
while not(eof(fin)) do
  begin
  ifun:=ifun+1;
  readln(fin,sfun);
  sp1:=sp1+#13#10+fun(sfun,1);
  sp2:=fun(sfun,2)+#13#10+sp2;
  sc1:=sc1+#13#10+fun(sfun,3);
  if fun(sfun,4)<>'' then sc2:=sc2+#13#10+fun(sfun,4);
  if fun(sfun,5)<>'' then sc3:=sc3+#13#10+fun(sfun,5);
  end;
writeln(fout,sp1);
writeln();
writeln(fout,sp2);
writeln(fout,'end.');
writeln(foutc,sc1);
writeln(foutc,sc2);
writeln(foutc,sc3);
close(fin);
close(foutc);
close(fout);
end.
