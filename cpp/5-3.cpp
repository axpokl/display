#include "disp.h"//ʹ��Display��Ԫ��
int main(){
createwin();//��������
do{
settitle(i2s(gettime()));//���ʱ�䵽������
isnextmsg();delay();////�ȴ�����Ϣ���ӳ�1����
}while(!(!(iswin())||iskey()));//ֱ�����ڹرջ򰴼�
return 0;}
