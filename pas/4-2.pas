uses Display;//ʹ��Display��Ԫ��
var pyi:longword;
begin
CreateWin();//��������
SetFontSize(5,10);//��5,��10
DrawTextXY('5,10',0,0,White,Red);
SetFontHeight(20);//��20,����
DrawTextXY('-,20',0,20,White,Red);
SetFontSize(0,0);//Ĭ�ϴ�С
DrawTextXY('ƥ��,Ĭ��',0,40,White,Red);
SetFontSize(0,20);//��20,��ƥ��
DrawTextXY('ƥ��,20',0,60,White,Red);
for pyi:=0 to 4 do line(0,pyi*20,longint(GetWidth),0,Orange);
FreshWin();//ˢ�´���
Msgbox('�������');//������������Ϣ
end.
