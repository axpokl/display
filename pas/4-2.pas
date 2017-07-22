uses Display;//使用Display单元库
var pyi:longword;
begin
CreateWin();//建立窗口
SetFontSize(5,10);//宽5,高10
DrawTextXY('5,10',0,0,White,Red);
SetFontHeight(20);//高20,宽不变
DrawTextXY('-,20',0,20,White,Red);
SetFontSize(0,0);//默认大小
DrawTextXY('匹配,默认',0,40,White,Red);
SetFontSize(0,20);//高20,宽匹配
DrawTextXY('匹配,20',0,60,White,Red);
for pyi:=0 to 4 do line(0,pyi*20,longint(GetWidth),0,Orange);
FreshWin();//刷新窗口
Msgbox('绘制完成');//输出绘制完成信息
end.
