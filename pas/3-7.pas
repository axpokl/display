uses Display;//ʹ��Display��Ԫ��
var n:longword=$100000;//���Ƶ�����
var bb:pbitbuf;//λͼ����
begin
CreateWin(800,600,Red);//��������
bb:=CreateBB(GetWin());//����λͼ����
while n>0 do
begin
SetBBPixel(bb,random(GetWidth()),random(GetHeight()),random($FFFFFF));//������㵽����
n:=n-1;
end;
SetBB(bb);//���ƻ��浽λͼ
FreshWin();//ˢ�´���
Msgbox('���ٻ������');//������������Ϣ
end.
