uses Display;//使用Display单元库
var w:longword=600;//窗口宽
var h:longword=100;//窗口高
var frame:real=120.0;//帧率
var frametime:real=0.0;//当前帧时间
var audio:longword;//音频句柄
var pos:longword;//音频窗口位置
var play:boolean=false;//音频播放状态
begin
CreateWin(w,h,blue);//建立蓝色窗口
SetTitle('display.mp3');//设定标题
audio:=LoadAudio('display.mp3');//读取音频
PlayAudio(audio);//播放音频
repeat//开始消息循环
if IsNextMsg() then//如果有新消息
begin
if IsDropFile() then//如果有拖拽文件
begin
SetTitle(GetDropFile());//设定标题为拖拽文件名
StopAudio(audio);//停止正在播放的音频
audio:=LoadAudio(GetDropFile());//读取音频
PlayAudio(audio);//播放音频
play:=true;//设定音频状态
end;
if IsKey(37) then//如果按左
SetAudioPos(audio,max(GetAudioPos(audio)-1000,0));//倒退1秒
if IsKey(39) then//如果按右
SetAudioPos(audio,min(GetAudioPos(audio)+1000,GetAudioLen(audio)));//前进1秒
if IsKey(40) then//如果按下
SetAudioVol(audio,max(GetAudioVol(audio)-100,0));//减小100音量
if IsKey(38) then//如果按上
SetAudioVol(audio,min(GetAudioVol(audio)+100,1000));//增大100音量
if IsMouseLeft() then//如果鼠标左键
SetAudioPos(audio,round(GetMousePosX()/real(w)*GetAudioLen(audio)));//跳转音频
if IsMouseRight() or IsKey(32) then//如果鼠标右键或按空格
begin
if play then PauseAudio(audio)//如果正在播放则暂停
else ResumeAudio(audio);//否则继续播放
play:=not(play);//更改音频状态
end;
end;
if GetAudioPos(audio)=GetAudioLen(audio) then//如果已播放完毕
SetAudioPos(audio,0);//重头播放
if GetTimeR()>frametime+1/frame then//如果当前时间已超过一帧时间
begin
while GetTimeR()>frametime+1/frame do frametime:=frametime+1/frame;//增加帧数（包括跳帧）
if GetAudioLen(audio)=0 then pos:=0//如果音频长度为0（没有音频）则设音频窗口位置为0
else pos:=round(real(w)*GetAudioPos(audio)/GetAudioLen(audio));//否则设定音频窗口位置
Clear();Bar(pbitmap(0),0,0,pos,100,Transparent,Yellow);//绘制状态
DrawTextlnXY(i2s(GetAudioPos(audio))+' / '+i2s(GetAudioLen(audio)),0,0,Yellow,Blue);//输出状态
FreshWin();//刷新窗口
end;
Delay();//延迟1毫秒
until not(IsWin()) or (IsKey(27));//直到关闭窗口或按ESC
end.
