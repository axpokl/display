#include "disp.h"//ʹ��Display��Ԫ��
int main(){
createwin(800,600,red);//��������
drawbmp(loadbmp("display.png"),0x7fffffff);//����͸��ɫ��͸��ͼƬ
freshwin();//ˢ�´���
msgbox("����͸�����");//������������Ϣ
return 0;}
