#include "disp.h"//ʹ��Display��Ԫ��
unsigned long audio;
int main(){
audio=loadaudio("display.mp3");//��ȡ��Ƶ
msgbox(i2s(audio));//�����Ƶ��
return 0;}
