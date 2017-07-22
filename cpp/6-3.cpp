#include "disp.h"//使用Display单元库
unsigned long audio;
int main(){
audio=loadaudio("display.mp3");//读取音频
playaudio(audio);//播放音频
setaudiovol(audio,200);//设定音量
msgbox("正在播放音频，音量200");
return 0;}
