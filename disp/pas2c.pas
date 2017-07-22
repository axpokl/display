program pas2c;
var fin,fout:text;
var fins,fouts:string;
var sin,sout:string;

var scmnt,sline:string;
var svar,stype,svalue:string;
var sfor,stodo,sfors,sfore,sfor0,sfor1,sfor2:string;
var p,p0:longword;
var funcname,functype,funcrest,funcstr:string;
var sif:string;
var sarray:string;

var beginb:shortint;
var commab:boolean;
var forwardb:boolean;

function split(s,sp:string;var sout1,sout2:string):boolean;
var p:longword;
begin
p:=pos(sp,s);
split:=p>0;
if split then
  begin
  sout1:=copy(s,1,p-1);
  sout2:=copy(s,p+length(sp),length(s)-length(sp)-p+1);
  end
else
  begin
  sout1:=s;
  sout2:='';
  end;
end;

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
phrasetype:=s;
end;

function phrasepara0(s:string):string;
var sname,stype:string;
begin
split(s,':',sname,stype);
for p:=length(sname) downto 1 do
  if sname[p]=',' then insert(stype+' ',sname,p+1);
insert(stype+' ',sname,1);
phrasepara0:=sname;
end;

function phrasepara(s:string):string;
var ss,se,s0:string;
begin
s0:='';
while split(s,';',ss,se) do
  begin
  s0:='~'+s0+phrasepara0(ss);
  s:=se;
  end;
if se='' then se:=s;
s0:='~'+s0+phrasepara0(se);
replace(s0,'~',';');
delete(s0,1,1);
phrasepara:=s0;
end;

function phrase(s:string):string;
begin
if split(s,'//',sline,scmnt) then scmnt:='//'+scmnt;
sline:=lowercase(sline);
replace(sline,'uses display;','#include "disp.h"');
replace(sline,'$','0x');
for p:=1 to length(sline) do
  begin
  if sline[p]='[' then commab:=true;
  if sline[p]=']' then commab:=false;
  if commab and (sline[p]=',') then sline[p]:='~';
  end;
replace(sline,'~','][');
if (beginb>0) then
  begin
  replace(sline,'begin ','begin');
  if replace(sline,'begin','{') then beginb:=beginb+1;
  if replace(sline,'end;','}') then beginb:=beginb-1;
  if beginb=0 then if funcname<>'' then
    begin
    funcstr:='return '+funcname+'_r;}';
    replace(sline,'}',funcstr);
    funcname:='';
    end;
  if funcname<>'' then replace(sline,funcname,funcname+'_r');
  replace(sline,'end.','return 0;}');
  replace(sline,'if ','if(');
  replace(sline,'};','}');
  replace(sline,#39,'"');
  replace(sline,' div ','/');
  replace(sline,' div(','/(');
  replace(sline,')div ',')/');
  replace(sline,')div(',')/(');
  replace(sline,' mod ','%');
  replace(sline,' mod(','%(');
  replace(sline,')mod ',')%');
  replace(sline,')mod(',')%(');
  replace(sline,' and ','&&');
  replace(sline,' and(','&&(');
  replace(sline,')and ',')&&');
  replace(sline,')and(',')&&(');
  replace(sline,' or ','||');
  replace(sline,' or(','||(');
  replace(sline,')or ',')||');
  replace(sline,')or(',')||(');
  replace(sline,' not ','!');
  replace(sline,' not(','!(');
  replace(sline,')not ',')!');
  replace(sline,')not(',')!(');
  replace(sline,'(not(','(!(');
  replace(sline,'for ','for~');
  repeat
  p:=pos('~',sline);
  if p<>0 then
    begin
    split(sline,'for~',sfor,stodo);
    split(stodo,' do',stodo,sfor2);
    if sfor2[1]=' ' then delete(sfor2,1,1);
    split(stodo,':=',svar,sfors);
    split(sfors,' to ',sfor0,sfor1);
    sline:=sfor+'for('+svar+':='+sfor0+';'+svar+'<='+sfor1+';'+svar+'++)'+sfor2;
    end;
  until p=0;
  replace(sline,' else','else');
  if replace(sline,' then ',')~')then
    begin
    p:=pos('~',sline);
    replace(sline,'~','');
    sif:=copy(sline,p,length(sline)-p+1);
    p0:=pos('else',sif);
    p:=p-1+p0;
    if p0=0 then p:=length(sline)+1;
    if sline[p]<>';' then insert(';',sline,p);
    end;
  replace(sline,' then ',')');
  replace(sline,' then',')');
  replace(sline,'while ','while(');
  replace(sline,' do ',')');
  replace(sline,' do',')');
  replace(sline,'repeat','do{');
  if replace(sline,'until','}while(!(') then insert('))',sline,length(sline)-1);
  replace(sline,'=','==');
  replace(sline,':==','=');
  replace(sline,'<==','<=');
  replace(sline,'>==','>=');
  replace(sline,'<>','!=');
  replace(sline,'^.','->');
  replace(sline,';;',';');
  end
else
  begin
  forwardb:=replace(sline,'forward;',';');
  if replace(sline,'procedure ','void ') then
    begin
    if forwardb=false then beginb:=beginb-1;
    delete(sline,length(sline),1);
    split(sline,'(',funcname,funcrest);
    split(funcrest,')',funcrest,functype);
    replace(sline,funcrest,phrasepara(funcrest));
    funcname:='';
    end
  else if replace(sline,'function ','') then
    begin
    if forwardb=false then beginb:=beginb-2;
    delete(sline,length(sline),1);
    split(sline,'(',funcname,funcrest);
    split(funcrest,')',funcrest,functype);
    replace(sline,functype,'');
    delete(functype,1,1);
    sline:=functype+' '+sline;
    replace(sline,funcrest,phrasepara(funcrest));
    end
  else if replace(sline,'begin','{') then
    begin
    if beginb=-2 then
      begin
      funcstr:='{'+functype+' '+funcname+'_r'+';';
      replace(sline,'{',funcstr);
      end;
    if beginb=0 then sline:='int main(){';
    beginb:=1;
    end
  else
    begin
    replace(sline,'  ',' ');
    replace(sline,'var','');
    if pos(':',sline)=0 then
      if pos('=',sline)>0 then
        insert(':longword',sline,pos('=',sline));
    if split(sline,':',svar,stype) then
      begin
      if split(stype,'=',stype,svalue) then
        svalue:='='+svalue
      else
        begin
        delete(stype,length(stype),1);
        svalue:=svalue+';';
        end;
      sline:=stype+svar+svalue;
      end;
    p:=pos('array',sline);
    if p>0 then
      begin
      replace(sline,'0..','');
      replace(sline,']','+1]');
      p0:=pos('of',sline);
      sarray:=copy(sline,p,p0-p);
      delete(sline,p,length(sarray));
      p0:=pos('=',sline);
      if p0=0 then p0:=pos(';',sline);
      replace(sarray,'array','');
      insert(sarray,sline,p0);
      replace(sline,'of ','');
      end;
    if replace(sline,'const','') then sline:='const '+sline;
    replace(sline,'(','{');
    replace(sline,')','}');
    end;
  if replace(sline,'end;','}') then beginb:=beginb-1;
  end;
phrase:=sline+scmnt;
end;

begin
fins:=paramstr(1);
fouts:=paramstr(2);
if fouts='' then fouts:=copy(fins,1,length(fins)-4)+'.cpp';
if fins='' then halt;
assign(fin,fins);
assign(fout,fouts);
reset(fin);
rewrite(fout);
beginb:=0;
while not(eof(fin)) do
  begin
  readln(fin,sin);
  sout:=phrase(sin);
  sout:=phrasetype(sout);
  if sin[1]<>'{' then
  writeln(fout,sout);
  end;
close(fout);
close(fin);
end.
