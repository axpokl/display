#include "disp.h"//使用Display单元库
unsigned long audio1,audio2;
int main(){
audio1=loadaudio("display.mp3");//读取音频1
audio2=loadaudio("display.mp3");//读取音频2
playaudio(audio1);//播放音频1
msgbox("正在播放音频");
playaudio(audio2,true);//重复播放音频2
msgbox("正在重复播放音频");
return 0;}
