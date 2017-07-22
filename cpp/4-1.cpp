#include "disp.h"//使用Display单元库
int main(){
createwin();//建立窗口
drawtextln("ax_pokl output text.");//输出文本并换行
drawtextw("ax_pokl""s text is tight");//输出定宽文本（宽度默认为0）
drawtextxy("ax_pokl output text anywhere",50,50);//指定位置输出文本
drawtextxy("",0,80);//强制改变输出位置
drawtext("and it""s colorful ",orange);//输出带颜色文本
drawtext("with backgroud color",red,blue);//输出带背景颜色文本
freshwin();//刷新窗口
msgbox("绘制完成");//输出绘制完成信息
return 0;}
