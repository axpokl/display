uses Display;//ʹ��Display��Ԫ��
begin
CreateWin();//��������
repeat
SetTitle(i2s(GetTime()));//���ʱ�䵽������
IsNextMsg();Delay();////�ȴ�����Ϣ���ӳ�1����
until not(IsWin()) or IsKey();//ֱ�����ڹرջ򰴼�
end.
