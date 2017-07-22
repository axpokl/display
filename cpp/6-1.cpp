#include "disp.h"//使用Display单元库
unsigned long audio;
int main(){
audio=loadaudio("display.mp3");//读取音频
msgbox(i2s(audio));//输出音频号
return 0;}
