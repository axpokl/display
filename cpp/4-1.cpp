#include "disp.h"//ʹ��Display��Ԫ��
int main(){
createwin();//��������
drawtextln("ax_pokl output text.");//����ı�������
drawtextw("ax_pokl""s text is tight");//��������ı������Ĭ��Ϊ0��
drawtextxy("ax_pokl output text anywhere",50,50);//ָ��λ������ı�
drawtextxy("",0,80);//ǿ�Ƹı����λ��
drawtext("and it""s colorful ",orange);//�������ɫ�ı�
drawtext("with backgroud color",red,blue);//�����������ɫ�ı�
freshwin();//ˢ�´���
msgbox("�������");//������������Ϣ
return 0;}
