uses Display;//使用Display单元库
var audio1,audio2:longword;
begin
audio1:=LoadAudio('display.mp3');//读取音频1
audio2:=LoadAudio('display.mp3');//读取音频2
PlayAudio(audio1);//播放音频1
Msgbox('正在播放音频');
PlayAudio(audio2,true);//重复播放音频2
Msgbox('正在重复播放音频');
end.
