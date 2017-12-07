#include "disp.h"//使用Display单元库
double frame=120.0;//帧率
double frametime=0.0;//当前帧时间
int main(){
createwin();//建立窗口
do{
if(isnextmsg())//如果有新消息
{
if((frame>10)&&iskey(37))frame=frame-1;//如果按左则减小帧率
if((frame<480)&&iskey(39))frame=frame+1;//如果按右则增加帧率
}
if(gettimer()>frametime+1/frame)//如果当前时间已超过一帧时间
{
while(gettimer()>frametime+1/frame)frametime=frametime+1/frame;//增加帧数（包括跳帧）
clear();//清屏
drawtextlnxy(i2s(getfpsl()),0,0);//输出瞬时刷新率
drawtextln(i2s(getfps()));//输出平均刷新率
drawtextln(i2s(long(round(frame))));//输出瞬时刷新率
freshwin();//刷新窗口
}
delay();//延迟1毫秒
}while(!( !(iswin())||iskey(27)));//直到窗口关闭或按ESC
return 0;}
