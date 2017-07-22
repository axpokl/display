uses Display;//使用Display单元库
var audio:longword;
begin
audio:=LoadAudio('display.mp3');//读取音频
PlayAudio(audio);//播放音频
SetAudioVol(audio,200);//设定音量
Msgbox('正在播放音频，音量200');
end.
