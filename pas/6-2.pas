uses Display;//ʹ��Display��Ԫ��
var audio1,audio2:longword;
begin
audio1:=LoadAudio('display.mp3');//��ȡ��Ƶ1
audio2:=LoadAudio('display.mp3');//��ȡ��Ƶ2
PlayAudio(audio1);//������Ƶ1
Msgbox('���ڲ�����Ƶ');
PlayAudio(audio2,true);//�ظ�������Ƶ2
Msgbox('�����ظ�������Ƶ');
end.
