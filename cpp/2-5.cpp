#include "disp.h"//使用Display单元库
int main(){
if(iswin())msgbox("yes");else msgbox("no");//输出窗口状态信息
createwin();//建立窗口
if(iswin())msgbox("yes");else msgbox("no");//输出窗口状态信息
closewin();//关闭窗口
if(iswin())msgbox("yes");else msgbox("no");//输出窗口状态信息
createwin();//再次建立窗口
if(iswin())msgbox("yes");else msgbox("no");//输出窗口状态信息
closewin();//再次关闭窗口
if(iswin())msgbox("yes");else msgbox("no");//输出窗口状态信息
return 0;}
