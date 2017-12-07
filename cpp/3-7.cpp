#include "disp.h"//使用Display单元库
unsigned long n=0x100000;//绘制点数量
pbitbuf bb;//位图缓存
int main(){
createwin(800,600,red);//建立窗口
bb=createbb(getwin());//创建位图缓存
while(n>0)
{
setbbpixel(bb,random(getwidth()),random(getheight()),random(0xffffff));//随机画点到缓存
n=n-1;
}
setbb(bb);//绘制缓存到位图
freshwin();//刷新窗口
msgbox("快速画点完成");//输出绘制完成信息
return 0;}
