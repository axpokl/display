uses Display;//ʹ��Display��Ԫ��
begin
CreateWin();//��������
repeat//��һ����Ϣѭ��
if IsNextMsg() then SetTitle(i2s(GetNextMsg()))//���������Ϣ�������Ϣ�ŵ�������
else Delay();//����ȴ�1����
until not(IsWin()) or (IsKey(27));//ֱ���رմ��ڻ�ESC
while IsWin() do//������ڿ�����ѭ��
begin//�ڶ�����Ϣѭ��
WaitNextMsg();//�ȴ�����Ϣ
SetTitle(i2s(GetNextMsg()));//�����Ϣ�ŵ�������
if IsKey(27) then CloseWin();//����ǰ�ESC��رմ���
end;//ֱ���رմ���
end.
