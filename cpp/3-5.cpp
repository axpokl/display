#include "disp.h"//ʹ��Display��Ԫ��
pbitmap img;
int main(){
createwin(800,600);//��������
img=loadbmp("display.png");//��ȡͼƬ
drawbmp(img,(getwidth()-img->width*2)/2,(getheight()-img->height*2)/2,img->width*2,img->height*2);//��������ͼƬ
freshwin();//ˢ�´���
msgbox("�����������");//������������Ϣ
drawbmp(img,img->width/4,img->height/4,img->width/2,img->height/2,(getwidth()-img->width*2)/2,(getheight()-img->height*2)/2,img->width*2,img->height*2);//���Ƽ�������ͼƬ
freshwin();//ˢ�´���
msgbox("���Ƽ������");//������������Ϣ
return 0;}
