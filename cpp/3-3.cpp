#include "disp.h"//ʹ��Display��Ԫ��
pbitmap img;
int main(){
createwin();//��������
img=loadbmp("display.png");
msgbox(i2s(img->width)+" "+i2s(img->height));//���ͼƬ��Ϣ
return 0;}
