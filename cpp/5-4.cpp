#include "disp.h"//ʹ��Display��Ԫ��
int main(){
createwin();//��������
do{
isnextmsg();//�ȴ�����Ϣ
clear();//����
drawtextxy("",0,0);//�����ı����λ��
drawtextln(i2s(getfpsl()));//���˲ʱˢ����
drawtextln(i2s(getfps()));//���ƽ��ˢ����
freshwin();//ˢ�´���
delay();//�ӳ�1����
}while(!( !(iswin())||iskey()));//ֱ�����ڹرջ򰴼�
return 0;}
