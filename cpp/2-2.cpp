#include "disp.h"//使用Display单元库
int main(){
createwin();//建立窗口
settitle("我是标题");//设定窗口标题
msgbox(gettitle());//获取并输出窗口标题
return 0;}
