uses Display;//ʹ��Display��Ԫ��
var frame:real=120.0;//֡��
var frametime:real=0.0;//��ǰ֡ʱ��
begin
CreateWin();//��������
repeat
if IsNextMsg() then//���������Ϣ
begin
if (frame>10) and IsKey(37) then frame:=frame-1;//����������С֡��
if (frame<480) and IsKey(39) then frame:=frame+1;//�������������֡��
end;
if GetTimeR()>frametime+1/frame then//�����ǰʱ���ѳ���һ֡ʱ��
begin
while GetTimeR()>frametime+1/frame do frametime:=frametime+1/frame;//����֡����������֡��
Clear();//����
DrawTextlnXY(i2s(GetFPSL()),0,0);//���˲ʱˢ����
DrawTextln(i2s(GetFPS()));//���ƽ��ˢ����
DrawTextln(i2s(longint(round(frame))));//���˲ʱˢ����
FreshWin();//ˢ�´���
end;
Delay();//�ӳ�1����
until not(IsWin()) or IsKey(27);//ֱ�����ڹرջ�ESC
end.
