uses Display;//ʹ��Display��Ԫ��
var w:longword=600;//���ڿ�
var h:longword=100;//���ڸ�
var frame:real=120.0;//֡��
var frametime:real=0.0;//��ǰ֡ʱ��
var audio:longword;//��Ƶ���
var pos:longword;//��Ƶ����λ��
var play:boolean=false;//��Ƶ����״̬
begin
CreateWin(w,h,blue);//������ɫ����
SetTitle('display.mp3');//�趨����
audio:=LoadAudio('display.mp3');//��ȡ��Ƶ
PlayAudio(audio);//������Ƶ
repeat//��ʼ��Ϣѭ��
if IsNextMsg() then//���������Ϣ
begin
if IsDropFile() then//�������ק�ļ�
begin
SetTitle(GetDropFile());//�趨����Ϊ��ק�ļ���
StopAudio(audio);//ֹͣ���ڲ��ŵ���Ƶ
audio:=LoadAudio(GetDropFile());//��ȡ��Ƶ
PlayAudio(audio);//������Ƶ
play:=true;//�趨��Ƶ״̬
end;
if IsKey(37) then//�������
SetAudioPos(audio,max(GetAudioPos(audio)-1000,0));//����1��
if IsKey(39) then//�������
SetAudioPos(audio,min(GetAudioPos(audio)+1000,GetAudioLen(audio)));//ǰ��1��
if IsKey(40) then//�������
SetAudioVol(audio,max(GetAudioVol(audio)-100,0));//��С100����
if IsKey(38) then//�������
SetAudioVol(audio,min(GetAudioVol(audio)+100,1000));//����100����
if IsMouseLeft() then//���������
SetAudioPos(audio,round(GetMousePosX()/real(w)*GetAudioLen(audio)));//��ת��Ƶ
if IsMouseRight() or IsKey(32) then//�������Ҽ��򰴿ո�
begin
if play then PauseAudio(audio)//������ڲ�������ͣ
else ResumeAudio(audio);//�����������
play:=not(play);//������Ƶ״̬
end;
end;
if GetAudioPos(audio)=GetAudioLen(audio) then//����Ѳ������
SetAudioPos(audio,0);//��ͷ����
if GetTimeR()>frametime+1/frame then//�����ǰʱ���ѳ���һ֡ʱ��
begin
while GetTimeR()>frametime+1/frame do frametime:=frametime+1/frame;//����֡����������֡��
if GetAudioLen(audio)=0 then pos:=0//�����Ƶ����Ϊ0��û����Ƶ��������Ƶ����λ��Ϊ0
else pos:=round(real(w)*GetAudioPos(audio)/GetAudioLen(audio));//�����趨��Ƶ����λ��
Clear();Bar(pbitmap(0),0,0,pos,100,Transparent,Yellow);//����״̬
DrawTextlnXY(i2s(GetAudioPos(audio))+' / '+i2s(GetAudioLen(audio)),0,0,Yellow,Blue);//���״̬
FreshWin();//ˢ�´���
end;
Delay();//�ӳ�1����
until not(IsWin()) or (IsKey(27));//ֱ���رմ��ڻ�ESC
end.
