#include "disp.h"//使用Display单元库
unsigned long audio;
int main(){
audio=loadaudio("display.mp3");//读取音频
playaudio(audio);setaudiopos(audio,getaudiolen(audio)/2);//从中间开始播放音频
msgbox("正在播放音频，从中间开始");
return 0;}
