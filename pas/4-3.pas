uses Display;//ʹ��Display��Ԫ��
begin
CreateWin();//��������
SetFontName('Comic Sans MS');//��������
DrawTextXY('Comic Sans MS',0,0);
SetFontWeight(700);//����
DrawTextXY('Weight',0,20);SetFontWeight(0);
SetFontLtalic(1);//б��
DrawTextXY('Ltalic',0,40);SetFontLtalic(0);
SetFontUnderLine(1);//�»���
DrawTextXY('UnterLine',0,60);SetFontUnderLine(0);
SetFontStrikeOut(1);//ɾ����
DrawTextXY('StrikeOut',0,80);SetFontStrikeOut(0);
FreshWin();//ˢ�´���
Msgbox('�������');//������������Ϣ
end.
