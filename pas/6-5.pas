uses Display;//使用Display单元库
var audio:longword;
begin
audio:=LoadAudio('display.mp3');//读取音频
PlayAudio(audio);SetAudioPos(audio,GetAudioLen(audio)div 2);//从中间开始播放音频
Msgbox('正在播放音频，从中间开始');
end.
