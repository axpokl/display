#include "disp.h"//使用Display单元库
pbitmap img;
int main(){
createwin();//建立窗口
img=loadbmp("display.png");
msgbox(i2s(img->width)+" "+i2s(img->height));//输出图片信息
return 0;}
