#include "disp.h"//ʹ��Display��Ԫ��
unsigned long audio;
int main(){
audio=loadaudio("display.mp3");//��ȡ��Ƶ
playaudio(audio);setaudiopos(audio,getaudiolen(audio)/2);//���м俪ʼ������Ƶ
msgbox("���ڲ�����Ƶ�����м俪ʼ");
return 0;}
