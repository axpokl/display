#include "disp.h"//ʹ��Display��Ԫ��
pbitmap img1,img2;
int main(){
createwin(800,600);//��������
img1=loadbmp("display.png");//��ȡͼƬ
img2=loadbmp("display.png");//��ȡͼƬ
drawbmp(img1,(getwidth()-img1->width)/2,(getheight()-img1->height)/2);//����ͼƬ1
freshwin();//ˢ�´���
msgbox("ͼƬ1");//������������Ϣ
bar(img2,img2->width/4,img2->height/4,img2->width/2,img2->height/2,transparent,blue);//���ƾ��ε�ͼƬ2�м�
drawbmp(img2,(getwidth()-img2->width)/2,(getheight()-img2->height)/2);//����ͼƬ2
freshwin();//ˢ�´���
msgbox("ͼƬ2");//������������Ϣ
return 0;}
