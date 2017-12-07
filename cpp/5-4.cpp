#include "disp.h"//使用Display单元库
int main(){
createwin();//建立窗口
do{
isnextmsg();//等待新消息
clear();//清屏
drawtextxy("",0,0);//设置文本输出位置
drawtextln(i2s(getfpsl()));//输出瞬时刷新率
drawtextln(i2s(getfps()));//输出平均刷新率
freshwin();//刷新窗口
delay();//延迟1毫秒
}while(!( !(iswin())||iskey()));//直到窗口关闭或按键
return 0;}
