uses Display;//使用Display单元库
const w=10;//场地宽
const h=20;//场地高
var sz:longword=30;//方块大小
var frame:real=120.0;//帧率
var frametime:real=0.0;//当前帧时间
var downtime:real=0.0;//下落时间
var i,j:shortint;//场地行列计数
var x,y,r,k:shortint;//当前方块状态
var bd:array[0..w-1,0..h-1]of shortint;//场地方块
const bdc:array[0..7]of longword=
($1F1F1F,$7F7F7F,$7F7FFF,$7FFF7F,$FF7F7F,$7FFFFF,$FFFF7F,$FF7FFF);//方块颜色
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
);//方块类型

procedure DrawBlock(i,j,k:shortint);//画方块
begin Bar(i*sz,(h-j-1)*sz,sz,sz,bdc[k]);end;

procedure NewBlock();forward;//新方块

procedure Restart();//重新开始
begin
for i:=0 to w-1 do for j:=0 to h-1 do bd[i,j]:=0;//清空场地
NewBlock();//新方块
end;

function EraseLine():boolean;//消行
begin
for j:=0 to h-1 do//从最底行开始
begin
EraseLine:=true;//是满行
for i:=0 to w-1 do if bd[i,j]=0 then EraseLine:=false;//如果有洞则不是
if EraseLine then break;//如果是满行则跳出
end;
if EraseLine then//如果是满行（消行）
while j<(h-1) do//从此行开始（往上）
begin
for i:=0 to w-1 do//遍历该行
bd[i,j]:=bd[i,j+1];//上方方块掉落
j:=j+1;//继续上一行
end;
end;

procedure FixBlock();//固定方块（落底）
begin
for i:=0 to 3 do for j:=0 to 3 do//遍历方块行列
if bdk[k,r,j,i]>0 then bd[i+x,j+y]:=k;NewBlock();//如果是格子非空则画到场地
while EraseLine() do ;//消行
end;

function Overlay():boolean;//判断重叠
begin
Overlay:=false;//设非重叠
for i:=0 to 3 do for j:=0 to 3 do//遍历方块行列
if (bdk[k,r,j,i]>0) then//如果格子非空
if (i+x<0)or(i+x>=w)or(j+y<0)or(j+y>=h) then Overlay:=true//如果超出场地则重叠
else if (bd[i+x,j+y]>0) then Overlay:=true;//如果没超出场地但场地非空也重叠
end;

procedure NewBlock();//新方块
begin
x:=3;//新方块行
y:=16;//新方块列
r:=0;//新方块旋转
k:=random(7)+1;//新方块类型
if Overlay() then Restart();//如果重叠则重来
end;

function Rotate(d:shortint):boolean;//旋转
begin
r:=r+1;if r>3 then r:=0;Rotate:=not(Overlay());//尝试旋转
if not(Rotate) then r:=r-1;if r<0 then r:=3;//如果不能旋转则转回来
end;

function Move(dx,dy:shortint):boolean;//移动
begin
x:=x+dx;y:=y+dy;Move:=not(Overlay());//尝试移动
if not(Move) then begin x:=x-dx;y:=y-dy;end;//如果不能移动则移回来
if not(Move) and (dy<0) then FixBlock();//如果不能移动且下落则固定
if dy<0 then downtime:=GetTimeR();//如果下落则重置下落时间
end;

begin//主程序
Randomize();//初始化随机种子
CreateWin(w*sz,h*sz);//建立窗口
SetTitle('俄罗斯方块');//设定标题
Restart();//重新开始
repeat//开始消息循环
if IsNextMsg() then//如果有新消息
begin
if IsKey(37) then Move(-1,0);//如果按左则左移
if IsKey(39) then Move(+1,0);//如果按右则右移
if IsKey(40) then Move(0,-1);//如果按下则下落
if IsKey(38) then Rotate(1);//如果按上则旋转
if IsKey(32) then while Move(0,-1) do ;//如果按空格则下底
end;
if GetTimeR()>downtime+1 then Move(0,-1);//如果超过1秒则下落
if GetTimeR()>frametime+1/frame then//如果当前时间已超过一帧时间
begin
while GetTimeR()>frametime+1/frame do frametime:=frametime+1/frame;//增加帧数（包括跳帧）
Clear();
for i:=0 to w-1 do for j:=0 to h-1 do DrawBlock(i,j,bd[i,j]);//画场地
for i:=0 to 3 do for j:=0 to 3 do if bdk[k,r,j,i]>0 then DrawBlock(i+x,j+y,k);//画当前方块
FreshWin();//刷新窗口
end;
Delay();//延迟1毫秒
until not(IsWin()) or (IsKey(27));//直到关闭窗口或按ESC键
end.
