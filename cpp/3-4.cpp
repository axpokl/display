#include "disp.h"//使用Display单元库
pbitmap img1,img2;
int main(){
createwin(800,600);//建立窗口
img1=loadbmp("display.png");//读取图片
img2=loadbmp("display.png");//读取图片
drawbmp(img1,(getwidth()-img1->width)/2,(getheight()-img1->height)/2);//绘制图片1
freshwin();//刷新窗口
msgbox("图片1");//输出绘制完成信息
bar(img2,img2->width/4,img2->height/4,img2->width/2,img2->height/2,transparent,blue);//绘制矩形到图片2中间
drawbmp(img2,(getwidth()-img2->width)/2,(getheight()-img2->height)/2);//绘制图片2
freshwin();//刷新窗口
msgbox("图片2");//输出绘制完成信息
return 0;}
