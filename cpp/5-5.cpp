#include "disp.h"//ʹ��Display��Ԫ��
double frame=120.0;//֡��
double frametime=0.0;//��ǰ֡ʱ��
int main(){
createwin();//��������
do{
if(isnextmsg())//���������Ϣ
{
if((frame>10)&&iskey(37))frame=frame-1;//����������С֡��
if((frame<480)&&iskey(39))frame=frame+1;//�������������֡��
}
if(gettimer()>frametime+1/frame)//�����ǰʱ���ѳ���һ֡ʱ��
{
while(gettimer()>frametime+1/frame)frametime=frametime+1/frame;//����֡����������֡��
clear();//����
drawtextlnxy(i2s(getfpsl()),0,0);//���˲ʱˢ����
drawtextln(i2s(getfps()));//���ƽ��ˢ����
drawtextln(i2s(long(round(frame))));//���˲ʱˢ����
freshwin();//ˢ�´���
}
delay();//�ӳ�1����
}while(!( !(iswin())||iskey(27)));//ֱ�����ڹرջ�ESC
return 0;}
