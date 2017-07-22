#include "disp.h"//使用Display单元库
int main(){
createwin(800,600,red);//建立窗口
drawbmp(loadbmp("display.png"),0x7fffffff);//绘制透明色半透明图片
freshwin();//刷新窗口
msgbox("绘制透明完成");//输出绘制完成信息
return 0;}
