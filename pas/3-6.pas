uses Display;//ʹ��Display��Ԫ��
begin
CreateWin(800,600,Red);//��������
DrawBMP(LoadBMP('display.png'),$7FFFFFFF);//����͸��ɫ��͸��ͼƬ
FreshWin();//ˢ�´���
Msgbox('����͸�����');//������������Ϣ
end.
