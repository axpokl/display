uses Display;//ʹ��Display��Ԫ��
begin
CreateWin();//��������
DrawTextln('ax_pokl output text.');//����ı�������
DrawTextw('ax_pokl''s text is tight');//��������ı������Ĭ��Ϊ0��
DrawTextXY('ax_pokl output text anywhere',50,50);//ָ��λ������ı�
DrawTextXY('',0,80);//ǿ�Ƹı����λ��
DrawText('and it''s colorful ',Orange);//�������ɫ�ı�
DrawText('with backgroud color',Red,Blue);//�����������ɫ�ı�
FreshWin();//ˢ�´���
Msgbox('�������');//������������Ϣ
end.
