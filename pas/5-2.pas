uses Display;//使用Display单元库
begin
CreateWin();//建立窗口
repeat
SetTitle(i2s(GetMousePosX())+' '+i2s(GetMousePosY()));//输出鼠标位置到标题栏
WaitNextMsg();
if IsKey() then MsgBox(i2s(GetKey()));//如果是按键则输出按键号
if IsMouse() then Msgbox(i2s(GetMouse()));//如果按鼠标则输出鼠标号
if IsMouseWheel() then Msgbox(i2s(GetMouseWheel()));//如果鼠标滚轮则输出滚轮号
if IsDropFile() then Msgbox(GetDropFile());//如果是拖拽文件则输出文件名
until not(IsWin()) or (IsKey(27));//直到关闭窗口或按ESC键
end.
