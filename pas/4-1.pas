uses Display;//使用Display单元库
begin
CreateWin();//建立窗口
DrawTextln('ax_pokl output text.');//输出文本并换行
DrawTextw('ax_pokl''s text is tight');//输出定宽文本（宽度默认为0）
DrawTextXY('ax_pokl output text anywhere',50,50);//指定位置输出文本
DrawTextXY('',0,80);//强制改变输出位置
DrawText('and it''s colorful ',Orange);//输出带颜色文本
DrawText('with backgroud color',Red,Blue);//输出带背景颜色文本
FreshWin();//刷新窗口
Msgbox('绘制完成');//输出绘制完成信息
end.
