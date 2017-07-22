#include "disp.h"//使用Display单元库
unsigned long n=0x1000;//绘制点数量
int main(){
createwin();//建立窗口
line(10,10,100,100,red);//绘制直线
bar(110,10,100,100,blue);//绘制矩形
circle(60,160,50,green);//绘制圆形
ellipse(185,160,25,50,pink);//绘制椭圆
while(n>0)
{
setpixel(random(getwidth()),random(getheight()),random(0xffffff));//随机画点
n=n-1;
}
freshwin();//刷新窗口
msgbox("绘制完成");//输出绘制完成信息
return 0;}
