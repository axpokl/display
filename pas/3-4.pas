uses Display;//ʹ��Display��Ԫ��
var img1,img2:pbitmap;
begin
CreateWin(800,600);//��������
img1:=LoadBMP('display.png');//��ȡͼƬ
img2:=LoadBMP('display.png');//��ȡͼƬ
DrawBMP(img1,(GetWidth()-img1^.Width)div 2,(GetHeight()-img1^.Height)div 2);//����ͼƬ1
FreshWin();//ˢ�´���
Msgbox('ͼƬ1');//������������Ϣ
Bar(img2,img2^.Width div 4,img2^.Height div 4,img2^.Width div 2,img2^.Height div 2,Blue);//���ƾ��ε�ͼƬ2�м�
DrawBMP(img2,(GetWidth()-img2^.Width)div 2,(GetHeight()-img2^.Height)div 2);//����ͼƬ2
FreshWin();//ˢ�´���
Msgbox('ͼƬ2');//������������Ϣ
end.
