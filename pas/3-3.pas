uses Display;//ʹ��Display��Ԫ��
var img:pbitmap;
begin
CreateWin();//��������
img:=LoadBMP('display.png');
Msgbox(i2s(img^.Width)+' '+i2s(img^.Height));//���ͼƬ��Ϣ
end.
