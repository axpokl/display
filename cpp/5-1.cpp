#include "disp.h"//ʹ��Display��Ԫ��
int main(){
createwin();//��������
do{//��һ����Ϣѭ��
if(isnextmsg())//���������Ϣ
settitle(i2s(getnextmsg()));//�����Ϣ�ŵ�������
delay();
}while(!(!(iswin())||(getnextmsg()==258)));//ֱ�����ڹرջ�����Ϣ��Ϊ258��������
do{//�ڶ�����Ϣѭ��
waitnextmsg();//�ȴ�����Ϣ
settitle(i2s(getnextmsg()));//�����Ϣ�ŵ�������
}while(!(!(iswin())||(getnextmsg()==258)));//ֱ�����ڹرջ�����Ϣ��Ϊ258��������
return 0;}
