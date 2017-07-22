#include "disp.h"//使用Display单元库
int main(){
createwin();//建立窗口
do{
settitle(i2s(gettime()));//输出时间到标题栏
isnextmsg();delay();////等待新消息并延迟1毫秒
}while(!(!(iswin())||iskey()));//直到窗口关闭或按键
return 0;}
