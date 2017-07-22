uses Display;//使用Display单元库
var img:pbitmap;
begin
CreateWin();//建立窗口
img:=LoadBMP('display.png');
Msgbox(i2s(img^.Width)+' '+i2s(img^.Height));//输出图片信息
end.
