uses Display;//使用Display单元库
begin
CreateWin();//建立窗口
repeat
SetTitle(i2s(GetTime()));//输出时间到标题栏
IsNextMsg();Delay();////等待新消息并延迟1毫秒
until not(IsWin()) or IsKey();//直到窗口关闭或按键
end.
