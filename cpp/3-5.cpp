#include "disp.h"//使用Display单元库
pbitmap img;
int main(){
createwin(800,600);//建立窗口
img=loadbmp("display.png");//读取图片
drawbmp(img,(getwidth()-img->width*2)/2,(getheight()-img->height*2)/2,img->width*2,img->height*2);//绘制拉伸图片
freshwin();//刷新窗口
msgbox("绘制拉伸完成");//输出绘制完成信息
drawbmp(img,img->width/4,img->height/4,img->width/2,img->height/2,(getwidth()-img->width*2)/2,(getheight()-img->height*2)/2,img->width*2,img->height*2);//绘制剪切拉伸图片
freshwin();//刷新窗口
msgbox("绘制剪切完成");//输出绘制完成信息
return 0;}
