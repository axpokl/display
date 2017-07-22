uses Display;//使用Display单元库
begin
if IsWin() then Msgbox('Yes') else Msgbox('No');//输出窗口状态信息
CreateWin();//建立窗口
if IsWin() then Msgbox('Yes') else Msgbox('No');//输出窗口状态信息
end.
