#include "disp.h"//ʹ��Display��Ԫ��
unsigned long n=0x1000;//���Ƶ�����
int main(){
createwin();//��������
line(10,10,100,100,red);//����ֱ��
bar(110,10,100,100,blue);//���ƾ���
circle(60,160,50,green);//����Բ��
ellipse(185,160,25,50,pink);//������Բ
while(n>0)
{
setpixel(random(getwidth()),random(getheight()),random(0xffffff));//�������
n=n-1;
}
freshwin();//ˢ�´���
msgbox("�������");//������������Ϣ
return 0;}
