uses Display;//使用Display单元库
var n:longword=$100000;//绘制点数量
var bb:pbitbuf;//位图缓存
begin
CreateWin(800,600,Red);//建立窗口
bb:=CreateBB(GetWin());//创建位图缓存
while n>0 do
begin
SetBBPixel(bb,random(GetWidth()),random(GetHeight()),random($FFFFFF));//随机画点到缓存
n:=n-1;
end;
SetBB(bb);//绘制缓存到位图
FreshWin();//刷新窗口
Msgbox('快速画点完成');//输出绘制完成信息
end.
