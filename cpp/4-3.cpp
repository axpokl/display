#include "disp.h"//使用Display单元库
int main(){
createwin();//建立窗口
setfontname("comic sans ms");//字体名称
drawtextxy("comic sans ms",0,0);
setfontweight(700);//粗体
drawtextxy("weight",0,20);setfontweight(0);
setfontltalic(1);//斜体
drawtextxy("ltalic",0,40);setfontltalic(0);
setfontunderline(1);//下划线
drawtextxy("unterline",0,60);setfontunderline(0);
setfontstrikeout(1);//删除线
drawtextxy("strikeout",0,80);setfontstrikeout(0);
freshwin();//刷新窗口
msgbox("绘制完成");//输出绘制完成信息
return 0;}
