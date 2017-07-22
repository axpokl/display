uses Display;//使用Display单元库
var frame:real=120.0;//帧率
var frametime:real=0.0;//当前帧时间
begin
CreateWin();//建立窗口
repeat
if IsNextMsg() then//如果有新消息
begin
if (frame>10) and IsKey(37) then frame:=frame-1;//如果按左则减小帧率
if (frame<480) and IsKey(39) then frame:=frame+1;//如果按右则增加帧率
end;
if GetTimeR()>frametime+1/frame then//如果当前时间已超过一帧时间
begin
while GetTimeR()>frametime+1/frame do frametime:=frametime+1/frame;//增加帧数（包括跳帧）
Clear();//清屏
DrawTextlnXY(i2s(GetFPSL()),0,0);//输出瞬时刷新率
DrawTextln(i2s(GetFPS()));//输出平均刷新率
DrawTextln(i2s(longint(round(frame))));//输出瞬时刷新率
FreshWin();//刷新窗口
end;
Delay();//延迟1毫秒
until not(IsWin()) or IsKey(27);//直到窗口关闭或按ESC
end.
