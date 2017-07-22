uses Display;//使用Display单元库
var audio:longword;
begin
audio:=LoadAudio('display.mp3');//读取音频
Msgbox(i2s(audio));//输出音频号
end.
