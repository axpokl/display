uses Display;//ʹ��Display��Ԫ��
begin
CreateWin();//��������
repeat//��һ����Ϣѭ��
if IsNextMsg() then//���������Ϣ
SetTitle(i2s(GetNextMsg()));//�����Ϣ�ŵ�������
Delay();
until not(IsWin()) or (GetNextMsg()=258);//ֱ�����ڹرջ�����Ϣ��Ϊ258��������
repeat//�ڶ�����Ϣѭ��
WaitNextMsg();//�ȴ�����Ϣ
SetTitle(i2s(GetNextMsg()));//�����Ϣ�ŵ�������
until not(IsWin()) or (GetNextMsg()=258);//ֱ�����ڹرջ�����Ϣ��Ϊ258��������
end.
