#include "disp.h"//ʹ��Display��Ԫ��
int main(){
createwin();//��������
setfontname("comic sans ms");//��������
drawtextxy("comic sans ms",0,0);
setfontweight(700);//����
drawtextxy("weight",0,20);setfontweight(0);
setfontltalic(1);//б��
drawtextxy("ltalic",0,40);setfontltalic(0);
setfontunderline(1);//�»���
drawtextxy("unterline",0,60);setfontunderline(0);
setfontstrikeout(1);//ɾ����
drawtextxy("strikeout",0,80);setfontstrikeout(0);
freshwin();//ˢ�´���
msgbox("�������");//������������Ϣ
return 0;}
