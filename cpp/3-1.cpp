#include "disp.h"//使用Display单元库
int main(){
createwin(red);//建立红色窗口
clear(blue);//清屏蓝色
msgbox("清屏没有生效");//这里清屏不会生效
freshwin();//刷新窗口
msgbox("清屏已生效");//这里清屏生效了
return 0;}
