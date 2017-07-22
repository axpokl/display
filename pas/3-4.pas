uses Display;//使用Display单元库
var img1,img2:pbitmap;
begin
CreateWin(800,600);//建立窗口
img1:=LoadBMP('display.png');//读取图片
img2:=LoadBMP('display.png');//读取图片
DrawBMP(img1,(GetWidth()-img1^.Width)div 2,(GetHeight()-img1^.Height)div 2);//绘制图片1
FreshWin();//刷新窗口
Msgbox('图片1');//输出绘制完成信息
Bar(img2,img2^.Width div 4,img2^.Height div 4,img2^.Width div 2,img2^.Height div 2,Blue);//绘制矩形到图片2中间
DrawBMP(img2,(GetWidth()-img2^.Width)div 2,(GetHeight()-img2^.Height)div 2);//绘制图片2
FreshWin();//刷新窗口
Msgbox('图片2');//输出绘制完成信息
end.
