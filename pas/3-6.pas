uses Display;//使用Display单元库
begin
CreateWin(800,600,Red);//建立窗口
DrawBMP(LoadBMP('display.png'),$7FFFFFFF);//绘制透明色半透明图片
FreshWin();//刷新窗口
Msgbox('绘制透明完成');//输出绘制完成信息
end.
