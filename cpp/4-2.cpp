#include "disp.h"//ʹ��Display��Ԫ��
unsigned long pyi;
int main(){
createwin();//��������
setfontsize(5,10);//��5,��10
drawtextxy("5,10",0,0,white,red);
setfontheight(20);//��20,����
drawtextxy("-,20",0,20,white,red);
setfontsize(0,0);//Ĭ�ϴ�С
drawtextxy("ƥ��,Ĭ��",0,40,white,red);
setfontsize(0,20);//��20,��ƥ��
drawtextxy("ƥ��,20",0,60,white,red);
for(pyi=0;pyi<=4;pyi++)line(0,pyi*20,long(getwidth),0,orange);
freshwin();//ˢ�´���
msgbox("�������");//������������Ϣ
return 0;}
