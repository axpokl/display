#include "disp.h"//ʹ��Display��Ԫ��
int main(){
if(iswin())msgbox("yes");else msgbox("no");//�������״̬��Ϣ
createwin();//��������
if(iswin())msgbox("yes");else msgbox("no");//�������״̬��Ϣ
return 0;}
