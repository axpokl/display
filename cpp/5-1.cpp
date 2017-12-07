#include "disp.h"//使用Display单元库
int main(){
createwin();//建立窗口
do{//第一种消息循环
if(isnextmsg())settitle(i2s(getnextmsg()));//如果有新消息则输出消息号到标题栏
else delay();//否则等待1毫秒
}while(!( !(iswin())||(iskey(27))));//直到关闭窗口或按ESC
while(iswin())//如果窗口开着则循环
{//第二种消息循环
waitnextmsg();//等待新消息
settitle(i2s(getnextmsg()));//输出消息号到标题栏
if(iskey(27))closewin();//如果是按ESC则关闭窗口
}//直到关闭窗口
return 0;}
