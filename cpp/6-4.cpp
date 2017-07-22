#include "disp.h"//使用Display单元库
unsigned long audio;
int main(){
audio=loadaudio("display.mp3");//读取音频
playaudio(audio);//播放音频
msgbox("正在播放音频，按确定暂停");
pauseaudio(audio);
msgbox("音频已暂停，按确定继续");
resumeaudio(audio);
msgbox("音频已继续重复播放");
stopaudio(audio);
msgbox("音频已停止播放");
playaudio(audio);
msgbox("音频已重新开始播放");
releaseaudio(audio);
msgbox("音频已释放");
return 0;}
