#include "disp.h"//ʹ��Display��Ԫ��
unsigned long audio;
int main(){
audio=loadaudio("display.mp3");//��ȡ��Ƶ
playaudio(audio);//������Ƶ
msgbox("���ڲ�����Ƶ����ȷ����ͣ");
pauseaudio(audio);
msgbox("��Ƶ����ͣ����ȷ������");
resumeaudio(audio);
msgbox("��Ƶ�Ѽ����ظ�����");
stopaudio(audio);
msgbox("��Ƶ��ֹͣ����");
playaudio(audio);
msgbox("��Ƶ�����¿�ʼ����");
releaseaudio(audio);
msgbox("��Ƶ���ͷ�");
return 0;}
