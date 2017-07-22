#include "disp.h"//使用Display单元库
int main(){
createwin();//建立窗口
do{
settitle(i2s(getmouseposx())+" "+i2s(getmouseposy()));//输出鼠标位置到标题栏
waitnextmsg();
if(iskey())msgbox(i2s(getkey()));//如果是按键则输出按键号
if(ismouse())msgbox(i2s(getmouse()));//如果按鼠标则输出鼠标号
if(ismousewheel())msgbox(i2s(getmousewheel()));//如果鼠标滚轮则输出滚轮号
if(isdropfile())msgbox(getdropfile());//如果是拖拽文件则输出文件名
}while(!(!(iswin())||(iskey(27))));//直到关闭窗口或按ESC键
return 0;}
