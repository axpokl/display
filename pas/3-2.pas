uses Display;//使用Display单元库
var n:longword=$1000;//绘制点数量
begin
CreateWin();//建立窗口
Line(10,10,100,100,Red);//绘制直线
Bar(110,10,100,100,Blue);//绘制矩形
Circle(60,160,50,Green);//绘制圆形
Ellipse(185,160,25,50,Pink);//绘制椭圆
while n>0 do
begin
SetPixel(random(GetWidth()),random(GetHeight()),random($FFFFFF));//随机画点
n:=n-1;
end;
FreshWin();//刷新窗口
Msgbox('绘制完成');//输出绘制完成信息
end.
