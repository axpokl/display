#include "disp.h"//使用Display单元库
unsigned long pyi;
int main(){
createwin();//建立窗口
setfontsize(5,10);//宽5,高10
drawtextxy("5,10",0,0,white,red);
setfontheight(20);//高20,宽不变
drawtextxy("-,20",0,20,white,red);
setfontsize(0,0);//默认大小
drawtextxy("匹配,默认",0,40,white,red);
setfontsize(0,20);//高20,宽匹配
drawtextxy("匹配,20",0,60,white,red);
for(pyi=0;pyi<=4;pyi++)line(0,pyi*20,long(getwidth),0,orange);
freshwin();//刷新窗口
msgbox("绘制完成");//输出绘制完成信息
return 0;}
