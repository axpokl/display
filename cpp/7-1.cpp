#include "disp.h"//ʹ��Display��Ԫ��
unsigned long w=600;//���ڿ�
unsigned long h=100;//���ڸ�
double frame=120.0;//֡��
double frametime=0.0;//��ǰ֡ʱ��
unsigned long audio;//��Ƶ���
unsigned long pos;//��Ƶ����λ��
bool play=false;//��Ƶ����״̬
int main(){
createwin(w,h,blue);//������ɫ����
settitle("display.mp3");//�趨����
audio=loadaudio("display.mp3");//��ȡ��Ƶ
playaudio(audio);//������Ƶ
do{//��ʼ��Ϣѭ��
if(isnextmsg())//���������Ϣ
{
if(isdropfile())//�������ק�ļ�
{
settitle(getdropfile());//�趨����Ϊ��ק�ļ���
stopaudio(audio);//ֹͣ���ڲ��ŵ���Ƶ
audio=loadaudio(getdropfile());//��ȡ��Ƶ
playaudio(audio);//������Ƶ
play=true;//�趨��Ƶ״̬
}
if(iskey(37))//�������
setaudiopos(audio,max(getaudiopos(audio)-1000,0));//����1��
if(iskey(39))//�������
setaudiopos(audio,min(getaudiopos(audio)+1000,getaudiolen(audio)));//ǰ��1��
if(iskey(40))//�������
setaudiovol(audio,max(getaudiovol(audio)-100,0));//��С100����
if(iskey(38))//�������
setaudiovol(audio,min(getaudiovol(audio)+100,1000));//����100����
if(ismouseleft())//���������
setaudiopos(audio,round(getmouseposx()/double(w)*getaudiolen(audio)));//��ת��Ƶ
if(ismouseright()||iskey(32))//�������Ҽ��򰴿ո�
{
if(play)pauseaudio(audio);//������ڲ�������ͣ
else resumeaudio(audio);//�����������
play=not(play);//������Ƶ״̬
}
}
if(getaudiopos(audio)==getaudiolen(audio))//����Ѳ������
setaudiopos(audio,0);//��ͷ����
if(gettimer()>frametime+1/frame)//�����ǰʱ���ѳ���һ֡ʱ��
{
while(gettimer()>frametime+1/frame)frametime=frametime+1/frame;//����֡����������֡��
if(getaudiolen(audio)==0)pos=0;//�����Ƶ����Ϊ0��û����Ƶ��������Ƶ����λ��Ϊ0
else pos=round(double(w)*getaudiopos(audio)/getaudiolen(audio));//�����趨��Ƶ����λ��
clear();bar(0,0,pos,100,yellow);//���Ʋ���״̬
drawtextlnxy(i2s(getaudiopos(audio))+" / "+i2s(getaudiolen(audio)),0,0,yellow,blue);//���״̬
freshwin();//ˢ�´���
}
delay();//�ӳ�1����
}while(!(!(iswin())||(iskey(27))));//ֱ���رմ��ڻ�ESC
return 0;}
