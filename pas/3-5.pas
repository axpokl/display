uses Display;//ʹ��Display��Ԫ��
var img:pbitmap;
begin
CreateWin(800,600);//��������
img:=LoadBMP('display.png');//��ȡͼƬ
DrawBMP(img,(GetWidth()-img^.Width*2)div 2,(GetHeight()-img^.Height*2)div 2,img^.Width*2,img^.Height*2);//��������ͼƬ
FreshWin();//ˢ�´���
Msgbox('�����������');//������������Ϣ
DrawBMP(img,img^.Width div 4,img^.Height div 4,img^.Width div 2,img^.Height div 2,(GetWidth()-img^.Width*2)div 2,(GetHeight()-img^.Height*2)div 2,img^.Width*2,img^.Height*2);//���Ƽ�������ͼƬ
FreshWin();//ˢ�´���
Msgbox('���Ƽ������');//������������Ϣ
end.
