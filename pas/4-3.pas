uses Display;//使用Display单元库
begin
CreateWin();//建立窗口
SetFontName('Comic Sans MS');//字体名称
DrawTextXY('Comic Sans MS',0,0);
SetFontWeight(700);//粗体
DrawTextXY('Weight',0,20);SetFontWeight(0);
SetFontLtalic(1);//斜体
DrawTextXY('Ltalic',0,40);SetFontLtalic(0);
SetFontUnderLine(1);//下划线
DrawTextXY('UnterLine',0,60);SetFontUnderLine(0);
SetFontStrikeOut(1);//删除线
DrawTextXY('StrikeOut',0,80);SetFontStrikeOut(0);
FreshWin();//刷新窗口
Msgbox('绘制完成');//输出绘制完成信息
end.
