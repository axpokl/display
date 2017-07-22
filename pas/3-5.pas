uses Display;//使用Display单元库
var img:pbitmap;
begin
CreateWin(800,600);//建立窗口
img:=LoadBMP('display.png');//读取图片
DrawBMP(img,(GetWidth()-img^.Width*2)div 2,(GetHeight()-img^.Height*2)div 2,img^.Width*2,img^.Height*2);//绘制拉伸图片
FreshWin();//刷新窗口
Msgbox('绘制拉伸完成');//输出绘制完成信息
DrawBMP(img,img^.Width div 4,img^.Height div 4,img^.Width div 2,img^.Height div 2,(GetWidth()-img^.Width*2)div 2,(GetHeight()-img^.Height*2)div 2,img^.Width*2,img^.Height*2);//绘制剪切拉伸图片
FreshWin();//刷新窗口
Msgbox('绘制剪切完成');//输出绘制完成信息
end.
