#include "disp.h"//ʹ��Display��Ԫ��
unsigned long audio1,audio2;
int main(){
audio1=loadaudio("display.mp3");//��ȡ��Ƶ1
audio2=loadaudio("display.mp3");//��ȡ��Ƶ2
playaudio(audio1);//������Ƶ1
msgbox("���ڲ�����Ƶ");
playaudio(audio2,true);//�ظ�������Ƶ2
msgbox("�����ظ�������Ƶ");
return 0;}
