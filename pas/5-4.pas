uses Display;//ʹ��Display��Ԫ��
begin
CreateWin();//��������
repeat
IsNextMsg();//�ȴ�����Ϣ
Clear();//����
DrawTextXY('',0,0);//�����ı����λ��
DrawTextln(i2s(GetFPSL()));//���˲ʱˢ����
DrawTextln(i2s(GetFPS()));//���ƽ��ˢ����
FreshWin();//ˢ�´���
Delay();//�ӳ�1����
until not(IsWin()) or IsKey();//ֱ�����ڹرջ򰴼�
end.
