uses Display;//ʹ��Display��Ԫ��
var audio:longword;
begin
audio:=LoadAudio('display.mp3');//��ȡ��Ƶ
PlayAudio(audio);//������Ƶ
SetAudioVol(audio,200);//�趨����
Msgbox('���ڲ�����Ƶ������200');
end.
