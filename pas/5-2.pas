uses Display;//ʹ��Display��Ԫ��
begin
CreateWin();//��������
repeat
SetTitle(i2s(GetMousePosX())+' '+i2s(GetMousePosY()));//������λ�õ�������
WaitNextMsg();
if IsKey() then MsgBox(i2s(GetKey()));//����ǰ��������������
if IsMouse() then Msgbox(i2s(GetMouse()));//�����������������
if IsMouseWheel() then Msgbox(i2s(GetMouseWheel()));//�����������������ֺ�
if IsDropFile() then Msgbox(GetDropFile());//�������ק�ļ�������ļ���
until not(IsWin()) or (IsKey(27));//ֱ���رմ��ڻ�ESC��
end.
