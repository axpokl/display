uses Display;//使用Display单元库
var audio:longword;
begin
audio:=LoadAudio('display.mp3');//读取音频
PlayAudio(audio);//播放音频
Msgbox('正在播放音频，按确定暂停');
PauseAudio(audio);
Msgbox('音频已暂停，按确定继续');
ResumeAudio(audio);
Msgbox('音频已继续重复播放');
StopAudio(audio);
Msgbox('音频已停止播放');
PlayAudio(audio);
Msgbox('音频已重新开始播放');
ReleaseAudio(audio);
Msgbox('音频已释放');
end.
