uses Display;//使用Display单元库
begin
CreateWin(Red);//建立红色窗口
Clear(Blue);//清屏蓝色
Msgbox('清屏没有生效');//这里清屏不会生效
FreshWin();//刷新窗口
Msgbox('清屏已生效');//这里清屏生效了
end.
