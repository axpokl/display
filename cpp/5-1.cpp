#include "disp.h"//ʹ��Display��Ԫ��
int main(){
createwin();//��������
do{//��һ����Ϣѭ��
if(isnextmsg())settitle(i2s(getnextmsg()));//���������Ϣ�������Ϣ�ŵ�������
else delay();//����ȴ�1����
}while(!( !(iswin())||(iskey(27))));//ֱ���رմ��ڻ�ESC
while(iswin())//������ڿ�����ѭ��
{//�ڶ�����Ϣѭ��
waitnextmsg();//�ȴ�����Ϣ
settitle(i2s(getnextmsg()));//�����Ϣ�ŵ�������
if(iskey(27))closewin();//����ǰ�ESC��رմ���
}//ֱ���رմ���
return 0;}
