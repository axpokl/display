#include "disp.h"//ʹ��Display��Ԫ��
unsigned long n=0x100000;//���Ƶ�����
pbitbuf bb;//λͼ����
int main(){
createwin(800,600,red);//��������
bb=createbb(getwin());//����λͼ����
while(n>0)
{
setbbpixel(bb,random(getwidth()),random(getheight()),random(0xffffff));//������㵽����
n=n-1;
}
setbb(bb);//���ƻ��浽λͼ
freshwin();//ˢ�´���
msgbox("���ٻ������");//������������Ϣ
return 0;}
