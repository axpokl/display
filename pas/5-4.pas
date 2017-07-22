uses Display;//使用Display单元库
begin
CreateWin();//建立窗口
repeat
IsNextMsg();//等待新消息
Clear();//清屏
DrawTextXY('',0,0);//设置文本输出位置
DrawTextln(i2s(GetFPSL()));//输出瞬时刷新率
DrawTextln(i2s(GetFPS()));//输出平均刷新率
FreshWin();//刷新窗口
Delay();//延迟1毫秒
until not(IsWin()) or IsKey();//直到窗口关闭或按键
end.
