program display_createlib;
var fin,fout,foutc,foutdef:text;
var sfun:ansistring='';
var sp1:ansistring='';
var sp2:ansistring='';
var sc1:ansistring='';
var sc2:ansistring='';
var sc0:ansistring='';
var ifun:longword=0;

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
replace(s,'longint','long');
replace(s,'longword','unsigned long');
replace(s,'int64','long long');
replace(s,'boolean','bool');
replace(s,'shortint','char');
replace(s,'byte','unsigned char');
replace(s,'smallint','short');
replace(s,'word','unsigned short');
replace(s,'integer','int');
replace(s,'cardinal','unsigned int');
replace(s,'single','float');
replace(s,'real','double');
replace(s,'pointer','void*');
replace(s,'tprocedure','void*');
replace(s,'pchar','const char*');
replace(s,'ansistring','const char*');
replace(s,'unicodestring','const short int*');
phrasetype:=s;
end;

function fun(s:ansistring;n:longword):ansistring;
var p1_fun,p2_fun,c1_fun,c2_fun:ansistring;
var p1,p2,p3,p4,p5,p6,p7,p8,p9,p10:longword;
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
fparb:=phrasetype(fparb);
c1_fun:='extern "C" '+phrasetype(ftype)+' '+fname+i2s(ifun)+'('+fparb+');';
if ftype='ansistring' then ftype:='mystring';
if s[1]='f' then c2_fun:='return ';
c2_fun:=phrasetype(ftype)+' '+lowercase(fname)+'('+fparb+')'+'{'+c2_fun
       +fname+i2s(ifun)+'('+fpara+')'+';}';
if n=1 then fun:=p1_fun;
if n=2 then fun:=p2_fun;
if n=3 then fun:=c1_fun;
if n=4 then fun:=c2_fun;
if n=0 then fun:=fname+i2s(ifun);
end;


begin
assign(fout,'display_library.pas');
rewrite(fout);
assign(foutc,'display_library_fun.h');
rewrite(foutc);
assign(foutdef,'disp.def');
rewrite(foutdef);
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
  sc2:=sc2+#13#10+fun(sfun,4);
  sc0:=sc0+#13#10+fun(sfun,0);
  end;
writeln(fout,sp1);
writeln();
writeln(fout,sp2);
writeln(fout,'end.');
writeln(foutc,sc1);
writeln(foutc,sc2);
write(foutdef,'EXPORTS');
writeln(foutdef,sc0);
close(fin);
close(foutdef);
close(foutc);
close(fout);
end.
