uses Display;//使用Display单元库
begin
CreateWin();//建立窗口
repeat//第一种消息循环
if IsNextMsg() then//如果有新消息
SetTitle(i2s(GetNextMsg()));//输出消息号到标题栏
Delay();
until not(IsWin()) or (GetNextMsg()=258);//直到窗口关闭或者消息号为258（按键）
repeat//第二种消息循环
WaitNextMsg();//等待新消息
SetTitle(i2s(GetNextMsg()));//输出消息号到标题栏
until not(IsWin()) or (GetNextMsg()=258);//直到窗口关闭或者消息号为258（按键）
end.
