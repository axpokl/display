#include "disp.h"//ʹ��Display��Ԫ��
unsigned long audio;
int main(){
audio=loadaudio("display.mp3");//��ȡ��Ƶ
playaudio(audio);//������Ƶ
setaudiovol(audio,200);//�趨����
msgbox("���ڲ�����Ƶ������200");
return 0;}
