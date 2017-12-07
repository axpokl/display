uses Display;//ʹ��Display��Ԫ��
const w=10;//���ؿ�
const h=20;//���ظ�
var sz:longword=30;//�����С
var frame:real=120.0;//֡��
var frametime:real=0.0;//��ǰ֡ʱ��
var downtime:real=0.0;//����ʱ��
var i,j:shortint;//�������м���
var x,y,r,k:shortint;//��ǰ����״̬
var bd:array[0..w-1,0..h-1]of shortint;//���ط���
const bdc:array[0..7]of longword=
($1F1F1F,$7F7F7F,$7F7FFF,$7FFF7F,$FF7F7F,$7FFFFF,$FFFF7F,$FF7FFF);//������ɫ
const bdk:array[0..7,0..3,0..3,0..3]of longword=
(
(
((0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0)),
((0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0)),
((0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0)),
((0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0))
),
(
((0,0,0,0),(0,1,1,0),(0,1,1,0),(0,0,0,0)),
((0,0,0,0),(0,1,1,0),(0,1,1,0),(0,0,0,0)),
((0,0,0,0),(0,1,1,0),(0,1,1,0),(0,0,0,0)),
((0,0,0,0),(0,1,1,0),(0,1,1,0),(0,0,0,0))
),
(
((0,0,0,0),(2,2,2,2),(0,0,0,0),(0,0,0,0)),
((0,0,2,0),(0,0,2,0),(0,0,2,0),(0,0,2,0)),
((0,0,0,0),(2,2,2,2),(0,0,0,0),(0,0,0,0)),
((0,0,2,0),(0,0,2,0),(0,0,2,0),(0,0,2,0))
),
(
((0,0,0,0),(0,0,3,3),(0,3,3,0),(0,0,0,0)),
((0,0,3,0),(0,0,3,3),(0,0,0,3),(0,0,0,0)),
((0,0,0,0),(0,0,3,3),(0,3,3,0),(0,0,0,0)),
((0,0,3,0),(0,0,3,3),(0,0,0,3),(0,0,0,0))
),
(
((0,0,0,0),(0,4,4,0),(0,0,4,4),(0,0,0,0)),
((0,0,0,4),(0,0,4,4),(0,0,4,0),(0,0,0,0)),
((0,0,0,0),(0,4,4,0),(0,0,4,4),(0,0,0,0)),
((0,0,0,4),(0,0,4,4),(0,0,4,0),(0,0,0,0))
),
(
((0,0,0,0),(0,5,5,5),(0,5,0,0),(0,0,0,0)),
((0,0,5,0),(0,0,5,0),(0,0,5,5),(0,0,0,0)),
((0,0,0,5),(0,5,5,5),(0,0,0,0),(0,0,0,0)),
((0,5,5,0),(0,0,5,0),(0,0,5,0),(0,0,0,0))
),
(
((0,0,0,0),(0,6,6,6),(0,0,0,6),(0,0,0,0)),
((0,0,6,6),(0,0,6,0),(0,0,6,0),(0,0,0,0)),
((0,6,0,0),(0,6,6,6),(0,0,0,0),(0,0,0,0)),
((0,0,6,0),(0,0,6,0),(0,6,6,0),(0,0,0,0))
),
(
((0,0,0,0),(0,7,7,7),(0,0,7,0),(0,0,0,0)),
((0,0,7,0),(0,0,7,7),(0,0,7,0),(0,0,0,0)),
((0,0,7,0),(0,7,7,7),(0,0,0,0),(0,0,0,0)),
((0,0,7,0),(0,7,7,0),(0,0,7,0),(0,0,0,0))
)
);//��������

procedure DrawBlock(i,j,k:shortint);//������
begin Bar(i*sz,(h-j-1)*sz,sz,sz,bdc[k]);end;

procedure NewBlock();forward;//�·���

procedure Restart();//���¿�ʼ
begin
for i:=0 to w-1 do for j:=0 to h-1 do bd[i,j]:=0;//��ճ���
NewBlock();//�·���
end;

function EraseLine():boolean;//����
begin
for j:=0 to h-1 do//������п�ʼ
begin
EraseLine:=true;//������
for i:=0 to w-1 do if bd[i,j]=0 then EraseLine:=false;//����ж�����
if EraseLine then break;//���������������
end;
if EraseLine then//��������У����У�
while j<(h-1) do//�Ӵ��п�ʼ�����ϣ�
begin
for i:=0 to w-1 do//��������
bd[i,j]:=bd[i,j+1];//�Ϸ��������
j:=j+1;//������һ��
end;
end;

procedure FixBlock();//�̶����飨��ף�
begin
for i:=0 to 3 do for j:=0 to 3 do//������������
if bdk[k,r,j,i]>0 then bd[i+x,j+y]:=k;NewBlock();//����Ǹ��ӷǿ��򻭵�����
while EraseLine() do ;//����
end;

function Overlay():boolean;//�ж��ص�
begin
Overlay:=false;//����ص�
for i:=0 to 3 do for j:=0 to 3 do//������������
if (bdk[k,r,j,i]>0) then//������ӷǿ�
if (i+x<0)or(i+x>=w)or(j+y<0)or(j+y>=h) then Overlay:=true//��������������ص�
else if (bd[i+x,j+y]>0) then Overlay:=true;//���û�������ص����طǿ�Ҳ�ص�
end;

procedure NewBlock();//�·���
begin
x:=3;//�·�����
y:=16;//�·�����
r:=0;//�·�����ת
k:=random(7)+1;//�·�������
if Overlay() then Restart();//����ص�������
end;

function Rotate(d:shortint):boolean;//��ת
begin
r:=r+1;if r>3 then r:=0;Rotate:=not(Overlay());//������ת
if not(Rotate) then r:=r-1;if r<0 then r:=3;//���������ת��ת����
end;

function Move(dx,dy:shortint):boolean;//�ƶ�
begin
x:=x+dx;y:=y+dy;Move:=not(Overlay());//�����ƶ�
if not(Move) then begin x:=x-dx;y:=y-dy;end;//��������ƶ����ƻ���
if not(Move) and (dy<0) then FixBlock();//��������ƶ���������̶�
if dy<0 then downtime:=GetTimeR();//�����������������ʱ��
end;

begin//������
Randomize();//��ʼ���������
CreateWin(w*sz,h*sz);//��������
SetTitle('����˹����');//�趨����
Restart();//���¿�ʼ
repeat//��ʼ��Ϣѭ��
if IsNextMsg() then//���������Ϣ
begin
if IsKey(37) then Move(-1,0);//�������������
if IsKey(39) then Move(+1,0);//�������������
if IsKey(40) then Move(0,-1);//�������������
if IsKey(38) then Rotate(1);//�����������ת
if IsKey(32) then while Move(0,-1) do ;//������ո����µ�
end;
if GetTimeR()>downtime+1 then Move(0,-1);//�������1��������
if GetTimeR()>frametime+1/frame then//�����ǰʱ���ѳ���һ֡ʱ��
begin
while GetTimeR()>frametime+1/frame do frametime:=frametime+1/frame;//����֡����������֡��
Clear();
for i:=0 to w-1 do for j:=0 to h-1 do DrawBlock(i,j,bd[i,j]);//������
for i:=0 to 3 do for j:=0 to 3 do if bdk[k,r,j,i]>0 then DrawBlock(i+x,j+y,k);//����ǰ����
FreshWin();//ˢ�´���
end;
Delay();//�ӳ�1����
until not(IsWin()) or (IsKey(27));//ֱ���رմ��ڻ�ESC��
end.
