uses Display;//ʹ��Display��Ԫ��
var n:longword=$1000;//���Ƶ�����
begin
CreateWin();//��������
Line(10,10,100,100,Red);//����ֱ��
Bar(110,10,100,100,Blue);//���ƾ���
Circle(60,160,50,Green);//����Բ��
Ellipse(185,160,25,50,Pink);//������Բ
while n>0 do
begin
SetPixel(random(GetWidth()),random(GetHeight()),random($FFFFFF));//�������
n:=n-1;
end;
FreshWin();//ˢ�´���
Msgbox('�������');//������������Ϣ
end.
