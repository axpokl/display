#include "disp.h"//ʹ��Display��Ԫ��
int main(){
createwin();//��������
do{
settitle(i2s(getmouseposx())+" "+i2s(getmouseposy()));//������λ�õ�������
waitnextmsg();
if(iskey())msgbox(i2s(getkey()));//����ǰ��������������
if(ismouse())msgbox(i2s(getmouse()));//�����������������
if(ismousewheel())msgbox(i2s(getmousewheel()));//�����������������ֺ�
if(isdropfile())msgbox(getdropfile());//�������ק�ļ�������ļ���
}while(!(!(iswin())||(iskey(27))));//ֱ���رմ��ڻ�ESC��
return 0;}
