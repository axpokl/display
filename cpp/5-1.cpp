#include "disp.h"//使用Display单元库
int main(){
createwin();//建立窗口
do{//第一种消息循环
if(isnextmsg())//如果有新消息
settitle(i2s(getnextmsg()));//输出消息号到标题栏
delay();
}while(!(!(iswin())||(getnextmsg()==258)));//直到窗口关闭或者消息号为258（按键）
do{//第二种消息循环
waitnextmsg();//等待新消息
settitle(i2s(getnextmsg()));//输出消息号到标题栏
}while(!(!(iswin())||(getnextmsg()==258)));//直到窗口关闭或者消息号为258（按键）
return 0;}
