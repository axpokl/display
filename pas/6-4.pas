uses Display;//ʹ��Display��Ԫ��
var audio:longword;
begin
audio:=LoadAudio('display.mp3');//��ȡ��Ƶ
PlayAudio(audio);//������Ƶ
Msgbox('���ڲ�����Ƶ����ȷ����ͣ');
PauseAudio(audio);
Msgbox('��Ƶ����ͣ����ȷ������');
ResumeAudio(audio);
Msgbox('��Ƶ�Ѽ����ظ�����');
StopAudio(audio);
Msgbox('��Ƶ��ֹͣ����');
PlayAudio(audio);
Msgbox('��Ƶ�����¿�ʼ����');
ReleaseAudio(audio);
Msgbox('��Ƶ���ͷ�');
end.
