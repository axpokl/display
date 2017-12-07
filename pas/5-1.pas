uses Display;//使用Display单元库
begin
CreateWin();//建立窗口
repeat//第一种消息循环
if IsNextMsg() then SetTitle(i2s(GetNextMsg()))//如果有新消息则输出消息号到标题栏
else Delay();//否则等待1毫秒
until not(IsWin()) or (IsKey(27));//直到关闭窗口或按ESC
while IsWin() do//如果窗口开着则循环
begin//第二种消息循环
WaitNextMsg();//等待新消息
SetTitle(i2s(GetNextMsg()));//输出消息号到标题栏
if IsKey(27) then CloseWin();//如果是按ESC则关闭窗口
end;//直到关闭窗口
end.
