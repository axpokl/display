uses Display;//ʹ��Display��Ԫ��
var audio:longword;
begin
audio:=LoadAudio('display.mp3');//��ȡ��Ƶ
PlayAudio(audio);SetAudioPos(audio,GetAudioLen(audio)div 2);//���м俪ʼ������Ƶ
Msgbox('���ڲ�����Ƶ�����м俪ʼ');
end.
