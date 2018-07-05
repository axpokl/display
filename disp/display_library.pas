library disp;
uses display;

function sgn1(x:double):longint;cdecl;
begin sgn1:=display.sgn(x);end;
function abs2(a,b:double):double;cdecl;
begin abs2:=display.abs(a,b);end;
function abs3(a,b,c:double):double;cdecl;
begin abs3:=display.abs(a,b,c);end;
function arcsin4(x:double):double;cdecl;
begin arcsin4:=display.arcsin(x);end;
function arccos5(x:double):double;cdecl;
begin arccos5:=display.arccos(x);end;
function arctan26(x,y:double):double;cdecl;
begin arctan26:=display.arctan2(x,y);end;
function i2s7(i:longint):pchar;cdecl;
begin i2s7:=pchar(display.i2s(i));end;
function s2i8(s:pchar):longword;cdecl;
begin s2i8:=display.s2i(s);end;
function as2i9(s:pchar):byte;cdecl;
begin as2i9:=display.as2i(s);end;
function i2hc10(i:byte):char;cdecl;
begin i2hc10:=display.i2hc(i);end;
function hc2i11(c:char):byte;cdecl;
begin hc2i11:=display.hc2i(c);end;
function i2hs12(i:byte):pchar;cdecl;
begin i2hs12:=pchar(display.i2hs(i));end;
function hs2i13(s:pchar):byte;cdecl;
begin hs2i13:=display.hs2i(s);end;
function as2hs14(s:pchar):pchar;cdecl;
begin as2hs14:=pchar(display.as2hs(s));end;
function hs2as15(s:pchar):pchar;cdecl;
begin hs2as15:=pchar(display.hs2as(s));end;
function i2as16(i:longword):pchar;cdecl;
begin i2as16:=pchar(display.i2as(i));end;
function i2hs17(i:longword):pchar;cdecl;
begin i2hs17:=pchar(display.i2hs(i));end;
function NewThread18(th:pointer):longword;cdecl;
begin NewThread18:=display.NewThread(th);end;
procedure PauseThread19(thi:longword);cdecl;
begin display.PauseThread(thi);end;
procedure ResumeThread20(thi:longword);cdecl;
begin display.ResumeThread(thi);end;
procedure StopThread21(thi:longword);cdecl;
begin display.StopThread(thi);end;
function MsgBoxW22(s,title:unicodestring;i:longword):longword;cdecl;
begin MsgBoxW22:=display.MsgBoxW(s,title,i);end;
function MsgBox23(s,title:pchar;i:longword):longword;cdecl;
begin MsgBox23:=display.MsgBox(s,title,i);end;
procedure MsgBoxW24(s,title:unicodestring);cdecl;
begin display.MsgBoxW(s,title);end;
procedure MsgBox25(s,title:pchar);cdecl;
begin display.MsgBox(s,title);end;
procedure MsgBoxW26(s:unicodestring);cdecl;
begin display.MsgBoxW(s);end;
procedure MsgBox27(s:pchar);cdecl;
begin display.MsgBox(s);end;
procedure Delay28(t:longword);cdecl;
begin display.Delay(t);end;
procedure Delay29();cdecl;
begin display.Delay();end;
procedure Sound30(hz:longword;t:longword);cdecl;
begin display.Sound(hz,t);end;
procedure Sound31(hz:longword;t:double);cdecl;
begin display.Sound(hz,t);end;
procedure Sound32(hz:longword);cdecl;
begin display.Sound(hz);end;
procedure FreshFPS33();cdecl;
begin display.FreshFPS();end;
procedure AddFPS34();cdecl;
begin display.AddFPS();end;
function GetFPSL35():longword;cdecl;
begin GetFPSL35:=display.GetFPSL();end;
function GetFPSR36():double;cdecl;
begin GetFPSR36:=display.GetFPSR();end;
function GetFPS37():longword;cdecl;
begin GetFPS37:=display.GetFPS();end;
function GetError38():longword;cdecl;
begin GetError38:=display.GetError();end;
procedure CreateWin39(w,h:longword;cfg,cbg:longword;style:longword);cdecl;
begin display.CreateWin(w,h,cfg,cbg,style);end;
procedure CreateWin40(w,h:longword;cfg,cbg:longword);cdecl;
begin display.CreateWin(w,h,cfg,cbg);end;
procedure CreateWin41(w,h:longword;c:longword);cdecl;
begin display.CreateWin(w,h,c);end;
procedure CreateWin42(w,h:longword);cdecl;
begin display.CreateWin(w,h);end;
procedure CreateWin43(cbg:longword);cdecl;
begin display.CreateWin(cbg);end;
procedure CreateWin44();cdecl;
begin display.CreateWin();end;
procedure FreshWin45();cdecl;
begin display.FreshWin();end;
procedure CloseWin46();cdecl;
begin display.CloseWin();end;
function IsWin47():boolean;cdecl;
begin IsWin47:=display.IsWin();end;
procedure SetDrawProcedure48(th:tprocedure);cdecl;
begin display.SetDrawProcedure(th);end;
function GetTimeR49():double;cdecl;
begin GetTimeR49:=display.GetTimeR();end;
function GetTime50():longword;cdecl;
begin GetTime50:=display.GetTime();end;
procedure SetTitle51(s:pchar);cdecl;
begin display.SetTitle(s);end;
procedure SetTitleW52(s:unicodestring);cdecl;
begin display.SetTitleW(s);end;
function GetTitle53():pchar;cdecl;
begin GetTitle53:=pchar(display.GetTitle());end;
function GetTitleW54():unicodestring;cdecl;
begin GetTitleW54:=display.GetTitleW();end;
procedure SetSize55(w,h:longword);cdecl;
begin display.SetSize(w,h);end;
function GetWidth56():longword;cdecl;
begin GetWidth56:=display.GetWidth();end;
function GetHeight57():longword;cdecl;
begin GetHeight57:=display.GetHeight();end;
function GetSize58():longword;cdecl;
begin GetSize58:=display.GetSize();end;
function GetScrWidth59():longint;cdecl;
begin GetScrWidth59:=display.GetScrWidth();end;
function GetScrHeight60():longint;cdecl;
begin GetScrHeight60:=display.GetScrHeight();end;
function GetScrSize61():longword;cdecl;
begin GetScrSize61:=display.GetScrSize();end;
function GetScrCapsX62():double;cdecl;
begin GetScrCapsX62:=display.GetScrCapsX();end;
function GetScrCapsY63():double;cdecl;
begin GetScrCapsY63:=display.GetScrCapsY();end;
function GetBorderTitle64():longint;cdecl;
begin GetBorderTitle64:=display.GetBorderTitle();end;
function GetBorderWidth65():longint;cdecl;
begin GetBorderWidth65:=display.GetBorderWidth();end;
function GetBorderHeight66():longint;cdecl;
begin GetBorderHeight66:=display.GetBorderHeight();end;
function GetBorderSize67():longword;cdecl;
begin GetBorderSize67:=display.GetBorderSize();end;
procedure SetPos68(x,y:longword);cdecl;
begin display.SetPos(x,y);end;
function GetPosX69():longint;cdecl;
begin GetPosX69:=display.GetPosX();end;
function GetPosY70():longint;cdecl;
begin GetPosY70:=display.GetPosY();end;
function GetPos71():longword;cdecl;
begin GetPos71:=display.GetPos();end;
function GetWin72():pbitmap;cdecl;
begin GetWin72:=display.GetWin();end;
function GetScr73():pbitmap;cdecl;
begin GetScr73:=display.GetScr();end;
function GetHwnd74(b:pbitmap):longword;cdecl;
begin GetHwnd74:=display.GetHwnd(b);end;
function GetHwnd75():longword;cdecl;
begin GetHwnd75:=display.GetHwnd();end;
function GetDraw76(b:pbitmap):longword;cdecl;
begin GetDraw76:=display.GetDraw(b);end;
function GetDraw77():longword;cdecl;
begin GetDraw77:=display.GetDraw();end;
function GetBGColor78():longword;cdecl;
begin GetBGColor78:=display.GetBGColor();end;
procedure SetBGColor79(c:longword);cdecl;
begin display.SetBGColor(c);end;
function GetFGColor80():longword;cdecl;
begin GetFGColor80:=display.GetFGColor();end;
procedure SetFGColor81(c:longword);cdecl;
begin display.SetFGColor(c);end;
procedure SetPenWidth82(pew:longword);cdecl;
begin display.SetPenWidth(pew);end;
procedure SetPenColor83(b:pbitmap;c:longword);cdecl;
begin display.SetPenColor(b,c);end;
procedure SetPenColor84(c:longword);cdecl;
begin display.SetPenColor(c);end;
procedure SetBrushColor85(b:pbitmap;c:longword);cdecl;
begin display.SetBrushColor(b,c);end;
procedure SetBrushColor86(c:longword);cdecl;
begin display.SetBrushColor(c);end;
function GetAlpha87(c:longword):byte;cdecl;
begin GetAlpha87:=display.GetAlpha(c);end;
function GetBlue88(c:longword):byte;cdecl;
begin GetBlue88:=display.GetBlue(c);end;
function GetGreen89(c:longword):byte;cdecl;
begin GetGreen89:=display.GetGreen(c);end;
function GetRed90(c:longword):byte;cdecl;
begin GetRed90:=display.GetRed(c);end;
function GetRGBA91(r,g,b,a:byte):longword;cdecl;
begin GetRGBA91:=display.GetRGBA(r,g,b,a);end;
function GetRGB92(r,g,b:byte):longword;cdecl;
begin GetRGB92:=display.GetRGB(r,g,b);end;
function RGB2HSL93(rgb:longword):longword;cdecl;
begin RGB2HSL93:=display.RGB2HSL(rgb);end;
function RGB2HSV94(rgb:longword):longword;cdecl;
begin RGB2HSV94:=display.RGB2HSV(rgb);end;
function RGB2HSI95(rgb:longword):longword;cdecl;
begin RGB2HSI95:=display.RGB2HSI(rgb);end;
function RGB2HSN96(rgb:longword):longword;cdecl;
begin RGB2HSN96:=display.RGB2HSN(rgb);end;
function HSL2RGB97(hsn:longword):longword;cdecl;
begin HSL2RGB97:=display.HSL2RGB(hsn);end;
function HSV2RGB98(hsn:longword):longword;cdecl;
begin HSV2RGB98:=display.HSV2RGB(hsn);end;
function HSI2RGB99(hsn:longword):longword;cdecl;
begin HSI2RGB99:=display.HSI2RGB(hsn);end;
function HSN2RGB100(hsn:longword):longword;cdecl;
begin HSN2RGB100:=display.HSN2RGB(hsn);end;
procedure MixColor101(rgb1,rgb2:longword;var rgb3:longword;m:double);cdecl;
begin display.MixColor(rgb1,rgb2,rgb3,m);end;
procedure MixColor102(rgb1,rgb2:longword;var rgb3:longword);cdecl;
begin display.MixColor(rgb1,rgb2,rgb3);end;
procedure SetFont103(b:pbitmap);cdecl;
begin display.SetFont(b);end;
procedure SetFont104();cdecl;
begin display.SetFont();end;
procedure SetFontWidth105(w:longword);cdecl;
begin display.SetFontWidth(w);end;
procedure SetFontHeight106(h:longword);cdecl;
begin display.SetFontHeight(h);end;
procedure SetFontSize107(w,h:longword);cdecl;
begin display.SetFontSize(w,h);end;
procedure SetFontWeight108(wg:longword);cdecl;
begin display.SetFontWeight(wg);end;
procedure SetFontLtalic109(lt:longword);cdecl;
begin display.SetFontLtalic(lt);end;
procedure SetFontUnderLine110(ud:longword);cdecl;
begin display.SetFontUnderLine(ud);end;
procedure SetFontStrikeOut111(sk:longword);cdecl;
begin display.SetFontStrikeOut(sk);end;
procedure SetFontCharSet112(cs:longword);cdecl;
begin display.SetFontCharSet(cs);end;
procedure SetFontName113(s:pchar);cdecl;
begin display.SetFontName(s);end;
procedure GetStringSize114(s:pchar);cdecl;
begin display.GetStringSize(s);end;
function GetStringWidth115(s:pchar):longword;cdecl;
begin GetStringWidth115:=display.GetStringWidth(s);end;
function GetStringHeight116(s:pchar):longword;cdecl;
begin GetStringHeight116:=display.GetStringHeight(s);end;
procedure DrawTextXY117(b:pbitmap;s:pchar;x,y:longint;w,h:longword;cfg,cbg:longword);cdecl;
begin display.DrawTextXY(b,s,x,y,w,h,cfg,cbg);end;
procedure DrawTextXY118(b:pbitmap;s:pchar;x,y:longint;cfg,cbg:longword);cdecl;
begin display.DrawTextXY(b,s,x,y,cfg,cbg);end;
procedure DrawTextXY119(b:pbitmap;s:pchar;x,y:longint;cfg:longword);cdecl;
begin display.DrawTextXY(b,s,x,y,cfg);end;
procedure DrawTextXY120(s:pchar;x,y:longint;cfg,cbg:longword);cdecl;
begin display.DrawTextXY(s,x,y,cfg,cbg);end;
procedure DrawTextXY121(s:pchar;x,y:longint;cfg:longword);cdecl;
begin display.DrawTextXY(s,x,y,cfg);end;
procedure DrawTextXY122(s:pchar;x,y:longword);cdecl;
begin display.DrawTextXY(s,x,y);end;
procedure DrawText123(s:pchar;cfg,cbg:longword);cdecl;
begin display.DrawText(s,cfg,cbg);end;
procedure DrawText124(s:pchar;cfg:longword);cdecl;
begin display.DrawText(s,cfg);end;
procedure DrawText125(s:pchar);cdecl;
begin display.DrawText(s);end;
procedure DrawTextlnXY126(s:pchar;x,y:longint;cfg,cbg:longword);cdecl;
begin display.DrawTextlnXY(s,x,y,cfg,cbg);end;
procedure DrawTextlnXY127(s:pchar;x,y:longint;cfg:longword);cdecl;
begin display.DrawTextlnXY(s,x,y,cfg);end;
procedure DrawTextlnXY128(s:pchar;x,y:longword);cdecl;
begin display.DrawTextlnXY(s,x,y);end;
procedure DrawTextln129(s:pchar;cfg,cbg:longword);cdecl;
begin display.DrawTextln(s,cfg,cbg);end;
procedure DrawTextln130(s:pchar;cfg:longword);cdecl;
begin display.DrawTextln(s,cfg);end;
procedure DrawTextln131(s:pchar);cdecl;
begin display.DrawTextln(s);end;
procedure DrawTextln132();cdecl;
begin display.DrawTextln();end;
procedure DrawTextXYw133(b:pbitmap;s:pchar;x,y:longint;cfg,cbg:longword);cdecl;
begin display.DrawTextXYw(b,s,x,y,cfg,cbg);end;
procedure DrawTextXYw134(b:pbitmap;s:pchar;x,y:longint;cfg:longword);cdecl;
begin display.DrawTextXYw(b,s,x,y,cfg);end;
procedure DrawTextXYw135(s:pchar;x,y:longint;cfg,cbg:longword);cdecl;
begin display.DrawTextXYw(s,x,y,cfg,cbg);end;
procedure DrawTextXYw136(s:pchar;x,y:longint;cfg:longword);cdecl;
begin display.DrawTextXYw(s,x,y,cfg);end;
procedure DrawTextXYw137(s:pchar;x,y:longword);cdecl;
begin display.DrawTextXYw(s,x,y);end;
procedure DrawTextw138(s:pchar;cfg,cbg:longword);cdecl;
begin display.DrawTextw(s,cfg,cbg);end;
procedure DrawTextw139(s:pchar;cfg:longword);cdecl;
begin display.DrawTextw(s,cfg);end;
procedure DrawTextw140(s:pchar);cdecl;
begin display.DrawTextw(s);end;
procedure DrawTextlnXYw141(s:pchar;x,y:longint;cfg,cbg:longword);cdecl;
begin display.DrawTextlnXYw(s,x,y,cfg,cbg);end;
procedure DrawTextlnXYw142(s:pchar;x,y:longint;cfg:longword);cdecl;
begin display.DrawTextlnXYw(s,x,y,cfg);end;
procedure DrawTextlnXYw143(s:pchar;x,y:longword);cdecl;
begin display.DrawTextlnXYw(s,x,y);end;
procedure DrawTextlnw144(s:pchar;cfg,cbg:longword);cdecl;
begin display.DrawTextlnw(s,cfg,cbg);end;
procedure DrawTextlnw145(s:pchar;cfg:longword);cdecl;
begin display.DrawTextlnw(s,cfg);end;
procedure DrawTextlnw146(s:pchar);cdecl;
begin display.DrawTextlnw(s);end;
function GetPixel147(b:pbitmap;x,y:longword):longword;cdecl;
begin GetPixel147:=display.GetPixel(b,x,y);end;
function GetPixel148(x,y:longword):longword;cdecl;
begin GetPixel148:=display.GetPixel(x,y);end;
procedure SetPixel149(b:pbitmap;x,y:longword;c:longword);cdecl;
begin display.SetPixel(b,x,y,c);end;
procedure SetPixel150(x,y:longword;c:longword);cdecl;
begin display.SetPixel(x,y,c);end;
procedure SetPixel151(x,y:longword);cdecl;
begin display.SetPixel(x,y);end;
function GetBBPixel152(bb:pbitbuf;x,y:longword):longword;cdecl;
begin GetBBPixel152:=display.GetBBPixel(bb,x,y);end;
procedure SetBBPixel153(bb:pbitbuf;x,y,c:longword);cdecl;
begin display.SetBBPixel(bb,x,y,c);end;
procedure Line154(b:pbitmap;x,y,w,h:longint;c:longword);cdecl;
begin display.Line(b,x,y,w,h,c);end;
procedure Line155(x,y,w,h:longint;c:longword);cdecl;
begin display.Line(x,y,w,h,c);end;
procedure Line156(x,y,w,h:longint);cdecl;
begin display.Line(x,y,w,h);end;
procedure Bar157(b:pbitmap;x,y,w,h:longint;cfg,cbg:longword);cdecl;
begin display.Bar(b,x,y,w,h,cfg,cbg);end;
procedure Bar158(x,y,w,h:longint;cfg,cbg:longword);cdecl;
begin display.Bar(x,y,w,h,cfg,cbg);end;
procedure Bar159(x,y,w,h:longint;c:longword);cdecl;
begin display.Bar(x,y,w,h,c);end;
procedure Bar160(x,y,w,h:longint);cdecl;
begin display.Bar(x,y,w,h);end;
procedure Clear161(b:pbitmap;c:longword);cdecl;
begin display.Clear(b,c);end;
procedure Clear162(b:pbitmap);cdecl;
begin display.Clear(b);end;
procedure Clear163(c:longword);cdecl;
begin display.Clear(c);end;
procedure Clear164();cdecl;
begin display.Clear();end;
procedure Triangle165(b:pbitmap;x1,y1,x2,y2,x3,y3:longint;cfg,cbg:longword);cdecl;
begin display.Triangle(b,x1,y1,x2,y2,x3,y3,cfg,cbg);end;
procedure Triangle166(x1,y1,x2,y2,x3,y3:longint;cfg,cbg:longword);cdecl;
begin display.Triangle(x1,y1,x2,y2,x3,y3,cfg,cbg);end;
procedure Triangle167(x1,y1,x2,y2,x3,y3:longint;c:longword);cdecl;
begin display.Triangle(x1,y1,x2,y2,x3,y3,c);end;
procedure Triangle168(x1,y1,x2,y2,x3,y3:longint);cdecl;
begin display.Triangle(x1,y1,x2,y2,x3,y3);end;
procedure Arc169(b:pbitmap;x,y,rx,ry:longint;sa,ea:double;cfg,cbg:longword);cdecl;
begin display.Arc(b,x,y,rx,ry,sa,ea,cfg,cbg);end;
procedure Arc170(x,y,rx,ry:longint;sa,ea:double;cfg,cbg:longword);cdecl;
begin display.Arc(x,y,rx,ry,sa,ea,cfg,cbg);end;
procedure Arc171(x,y,rx,ry:longint;sa,ea:double;c:longword);cdecl;
begin display.Arc(x,y,rx,ry,sa,ea,c);end;
procedure Arc172(x,y,rx,ry:longint;sa,ea:double);cdecl;
begin display.Arc(x,y,rx,ry,sa,ea);end;
procedure Pie173(b:pbitmap;x,y,rx,ry:longint;sa,ea:double;cfg,cbg:longword);cdecl;
begin display.Pie(b,x,y,rx,ry,sa,ea,cfg,cbg);end;
procedure Pie174(x,y,rx,ry:longint;sa,ea:double;cfg,cbg:longword);cdecl;
begin display.Pie(x,y,rx,ry,sa,ea,cfg,cbg);end;
procedure Pie175(x,y,rx,ry:longint;sa,ea:double;c:longword);cdecl;
begin display.Pie(x,y,rx,ry,sa,ea,c);end;
procedure Pie176(x,y,rx,ry:longint;sa,ea:double);cdecl;
begin display.Pie(x,y,rx,ry,sa,ea);end;
procedure Chord177(b:pbitmap;x,y,rx,ry:longint;sa,ea:double;cfg,cbg:longword);cdecl;
begin display.Chord(b,x,y,rx,ry,sa,ea,cfg,cbg);end;
procedure Chord178(x,y,rx,ry:longint;sa,ea:double;cfg,cbg:longword);cdecl;
begin display.Chord(x,y,rx,ry,sa,ea,cfg,cbg);end;
procedure Chord179(x,y,rx,ry:longint;sa,ea:double;c:longword);cdecl;
begin display.Chord(x,y,rx,ry,sa,ea,c);end;
procedure Chord180(x,y,rx,ry:longint;sa,ea:double);cdecl;
begin display.Chord(x,y,rx,ry,sa,ea);end;
procedure Ellipse181(b:pbitmap;x,y,rx,ry:longint;cfg,cbg:longword);cdecl;
begin display.Ellipse(b,x,y,rx,ry,cfg,cbg);end;
procedure Ellipse182(x,y,rx,ry:longint;cfg,cbg:longword);cdecl;
begin display.Ellipse(x,y,rx,ry,cfg,cbg);end;
procedure Ellipse183(x,y,rx,ry:longint;c:longword);cdecl;
begin display.Ellipse(x,y,rx,ry,c);end;
procedure Ellipse184(x,y,rx,ry:longint);cdecl;
begin display.Ellipse(x,y,rx,ry);end;
procedure Circle185(b:pbitmap;x,y,r:longint;cfg,cbg:longword);cdecl;
begin display.Circle(b,x,y,r,cfg,cbg);end;
procedure Circle186(x,y,r:longint;cfg,cbg:longword);cdecl;
begin display.Circle(x,y,r,cfg,cbg);end;
procedure Circle187(x,y,r:longint;c:longword);cdecl;
begin display.Circle(x,y,r,c);end;
procedure Circle188(x,y,r:longint);cdecl;
begin display.Circle(x,y,r);end;
function CreateBMP189(b:pbitmap;w,h:longword;c:longword):pbitmap;cdecl;
begin CreateBMP189:=display.CreateBMP(b,w,h,c);end;
function CreateBMP190(b:pbitmap):pbitmap;cdecl;
begin CreateBMP190:=display.CreateBMP(b);end;
function CreateBMP191(w,h:longword;c:longword):pbitmap;cdecl;
begin CreateBMP191:=display.CreateBMP(w,h,c);end;
function CreateBMP192(w,h:longword):pbitmap;cdecl;
begin CreateBMP192:=display.CreateBMP(w,h);end;
function CreateBMP193():pbitmap;cdecl;
begin CreateBMP193:=display.CreateBMP();end;
procedure ReleaseBMP194(b:pbitmap);cdecl;
begin display.ReleaseBMP(b);end;
procedure ReleaseBMP195();cdecl;
begin display.ReleaseBMP();end;
function LoadBMP196(s:pchar;c:longword):pbitmap;cdecl;
begin LoadBMP196:=display.LoadBMP(s,c);end;
function LoadBMP197(s:pchar):pbitmap;cdecl;
begin LoadBMP197:=display.LoadBMP(s);end;
procedure SaveBMP198(b:pbitmap;s:pchar);cdecl;
begin display.SaveBMP(b,s);end;
procedure DrawBMP199(bs,bd:pbitmap;xs,ys,ws,hs,xd,yd,wd,hd:longword;c:longword);cdecl;
begin display.DrawBMP(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd,c);end;
procedure DrawBMP200(bs,bd:pbitmap;xs,ys,ws,hs,xd,yd,wd,hd:longword);cdecl;
begin display.DrawBMP(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd);end;
procedure DrawBMP201(bs,bd:pbitmap;xs,ys,xd,yd,w,h:longword;c:longword);cdecl;
begin display.DrawBMP(bs,bd,xs,ys,xd,yd,w,h,c);end;
procedure DrawBMP202(bs,bd:pbitmap;xs,ys,xd,yd,w,h:longword);cdecl;
begin display.DrawBMP(bs,bd,xs,ys,xd,yd,w,h);end;
procedure DrawBMP203(bs,bd:pbitmap;xd,yd,wd,hd:longword;c:longword);cdecl;
begin display.DrawBMP(bs,bd,xd,yd,wd,hd,c);end;
procedure DrawBMP204(bs,bd:pbitmap;xd,yd,wd,hd:longword);cdecl;
begin display.DrawBMP(bs,bd,xd,yd,wd,hd);end;
procedure DrawBMP205(bs,bd:pbitmap;xd,yd:longword;c:longword);cdecl;
begin display.DrawBMP(bs,bd,xd,yd,c);end;
procedure DrawBMP206(bs,bd:pbitmap;xd,yd:longword);cdecl;
begin display.DrawBMP(bs,bd,xd,yd);end;
procedure DrawBMP207(bs,bd:pbitmap;c:longword);cdecl;
begin display.DrawBMP(bs,bd,c);end;
procedure DrawBMP208(bs,bd:pbitmap);cdecl;
begin display.DrawBMP(bs,bd);end;
procedure DrawBMP209(bs:pbitmap;xs,ys,ws,hs,xd,yd,wd,hd:longword;c:longword);cdecl;
begin display.DrawBMP(bs,xs,ys,ws,hs,xd,yd,wd,hd,c);end;
procedure DrawBMP210(bs:pbitmap;xs,ys,ws,hs,xd,yd,wd,hd:longword);cdecl;
begin display.DrawBMP(bs,xs,ys,ws,hs,xd,yd,wd,hd);end;
procedure DrawBMP211(bs:pbitmap;xs,ys,xd,yd,w,h:longword;c:longword);cdecl;
begin display.DrawBMP(bs,xs,ys,xd,yd,w,h,c);end;
procedure DrawBMP212(bs:pbitmap;xs,ys,xd,yd,w,h:longword);cdecl;
begin display.DrawBMP(bs,xs,ys,xd,yd,w,h);end;
procedure DrawBMP213(bs:pbitmap;xd,yd,wd,hd:longword;c:longword);cdecl;
begin display.DrawBMP(bs,xd,yd,wd,hd,c);end;
procedure DrawBMP214(bs:pbitmap;xd,yd,wd,hd:longword);cdecl;
begin display.DrawBMP(bs,xd,yd,wd,hd);end;
procedure DrawBMP215(bs:pbitmap;xd,yd:longword;c:longword);cdecl;
begin display.DrawBMP(bs,xd,yd,c);end;
procedure DrawBMP216(bs:pbitmap;xd,yd:longword);cdecl;
begin display.DrawBMP(bs,xd,yd);end;
procedure DrawBMP217(bs:pbitmap;c:longword);cdecl;
begin display.DrawBMP(bs,c);end;
procedure DrawBMP218(bs:pbitmap);cdecl;
begin display.DrawBMP(bs);end;
procedure DrawBMP219(xs,ys,ws,hs,xd,yd,wd,hd:longword;c:longword);cdecl;
begin display.DrawBMP(xs,ys,ws,hs,xd,yd,wd,hd,c);end;
procedure DrawBMP220(xs,ys,ws,hs,xd,yd,wd,hd:longword);cdecl;
begin display.DrawBMP(xs,ys,ws,hs,xd,yd,wd,hd);end;
procedure DrawBMP221(xs,ys,xd,yd,w,h:longword;c:longword);cdecl;
begin display.DrawBMP(xs,ys,xd,yd,w,h,c);end;
procedure DrawBMP222(xs,ys,xd,yd,w,h:longword);cdecl;
begin display.DrawBMP(xs,ys,xd,yd,w,h);end;
procedure DrawBMP223(xd,yd,wd,hd:longword;c:longword);cdecl;
begin display.DrawBMP(xd,yd,wd,hd,c);end;
procedure DrawBMP224(xd,yd,wd,hd:longword);cdecl;
begin display.DrawBMP(xd,yd,wd,hd);end;
procedure DrawBMP225(xd,yd:longword;c:longword);cdecl;
begin display.DrawBMP(xd,yd,c);end;
procedure DrawBMP226(xd,yd:longword);cdecl;
begin display.DrawBMP(xd,yd);end;
procedure DrawBMP227(c:longword);cdecl;
begin display.DrawBMP(c);end;
procedure DrawBMP228();cdecl;
begin display.DrawBMP();end;
procedure MixBMP229(b1,b2:pbitmap;var b3:pbitmap);cdecl;
begin display.MixBMP(b1,b2,b3);end;
procedure BlurBMPBox230(b:pbitmap;d:longword;n:longword);cdecl;
begin display.BlurBMPBox(b,d,n);end;
procedure BlurBMPBox231(b:pbitmap;d:longword);cdecl;
begin display.BlurBMPBox(b,d);end;
procedure BlurBMPGau232(b:pbitmap;d:double);cdecl;
begin display.BlurBMPGau(b,d);end;
function CreateBB233(b:pbitmap):pbitbuf;cdecl;
begin CreateBB233:=display.CreateBB(b);end;
procedure ReleaseBB234(bb:pbitbuf);cdecl;
begin display.ReleaseBB(bb);end;
procedure GetBB235(bb:pbitbuf);cdecl;
begin display.GetBB(bb);end;
procedure SetBB236(bb:pbitbuf);cdecl;
begin display.SetBB(bb);end;
procedure MixBB237(bb1,bb2:pbitbuf;var bb3:pbitbuf);cdecl;
begin display.MixBB(bb1,bb2,bb3);end;
procedure BlurBBBox238(bb:pbitbuf;d:longword;n:longword);cdecl;
begin display.BlurBBBox(bb,d,n);end;
procedure BlurBBGau239(bb:pbitbuf;d:double);cdecl;
begin display.BlurBBGau(bb,d);end;
procedure PressKey240(k:byte;t:longword);cdecl;
begin display.PressKey(k,t);end;
procedure PressKey241(k:byte);cdecl;
begin display.PressKey(k);end;
procedure DownKey242(k:byte);cdecl;
begin display.DownKey(k);end;
procedure UpKey243(k:byte);cdecl;
begin display.UpKey(k);end;
procedure PressMouse244(m:byte;t:longword);cdecl;
begin display.PressMouse(m,t);end;
procedure PressMouse245(m:byte);cdecl;
begin display.PressMouse(m);end;
procedure DownMouse246(m:byte);cdecl;
begin display.DownMouse(m);end;
procedure UpMouse247(m:byte);cdecl;
begin display.UpMouse(m);end;
procedure WheelMouse248(wl:longint);cdecl;
begin display.WheelMouse(wl);end;
procedure MoveMouse249(x,y:longint);cdecl;
begin display.MoveMouse(x,y);end;
procedure MoveMouseAbs250(x,y:longint);cdecl;
begin display.MoveMouseAbs(x,y);end;
procedure MoveMouseWin251(x,y:longint);cdecl;
begin display.MoveMouseWin(x,y);end;
procedure MoveMousePos252(x,y:longint);cdecl;
begin display.MoveMousePos(x,y);end;
procedure SendMsg253();cdecl;
begin display.SendMsg();end;
function IsNextMsg254():boolean;cdecl;
begin IsNextMsg254:=display.IsNextMsg();end;
function GetNextMsg255():longword;cdecl;
begin GetNextMsg255:=display.GetNextMsg();end;
function WaitNextMsg256():longword;cdecl;
begin WaitNextMsg256:=display.WaitNextMsg();end;
function IsMsg257(uM:longword):boolean;cdecl;
begin IsMsg257:=display.IsMsg(uM);end;
function GetMsg258(uM:longword):int64;cdecl;
begin GetMsg258:=display.GetMsg(uM);end;
function WaitMsg259(uM:longword):int64;cdecl;
begin WaitMsg259:=display.WaitMsg(uM);end;
function IsKey260(k:longword):boolean;cdecl;
begin IsKey260:=display.IsKey(k);end;
function IsKey261():boolean;cdecl;
begin IsKey261:=display.IsKey();end;
function GetKey262():longword;cdecl;
begin GetKey262:=display.GetKey();end;
function WaitKey263(k:longword):longword;cdecl;
begin WaitKey263:=display.WaitKey(k);end;
function WaitKey264():longword;cdecl;
begin WaitKey264:=display.WaitKey();end;
function IsMouse265(m:longword):boolean;cdecl;
begin IsMouse265:=display.IsMouse(m);end;
function IsMouse266():boolean;cdecl;
begin IsMouse266:=display.IsMouse();end;
function GetMouse267():longword;cdecl;
begin GetMouse267:=display.GetMouse();end;
function WaitMouse268(m:longword):longword;cdecl;
begin WaitMouse268:=display.WaitMouse(m);end;
function WaitMouse269():longword;cdecl;
begin WaitMouse269:=display.WaitMouse();end;
function IsMouseLeft270():boolean;cdecl;
begin IsMouseLeft270:=display.IsMouseLeft();end;
procedure WaitMouseLeft271();cdecl;
begin display.WaitMouseLeft();end;
function IsMouseMiddle272():boolean;cdecl;
begin IsMouseMiddle272:=display.IsMouseMiddle();end;
procedure WaitMouseMiddle273();cdecl;
begin display.WaitMouseMiddle();end;
function IsMouseRight274():boolean;cdecl;
begin IsMouseRight274:=display.IsMouseRight();end;
procedure WaitMouseRight275();cdecl;
begin display.WaitMouseRight();end;
function IsMouseWheel276():boolean;cdecl;
begin IsMouseWheel276:=display.IsMouseWheel();end;
function GetMouseWheel277():longint;cdecl;
begin GetMouseWheel277:=display.GetMouseWheel();end;
procedure WaitMouseWheel278();cdecl;
begin display.WaitMouseWheel();end;
function IsMouseMove279():boolean;cdecl;
begin IsMouseMove279:=display.IsMouseMove();end;
function GetMouseMove280():longword;cdecl;
begin GetMouseMove280:=display.GetMouseMove();end;
function WaitMouseMove281():longword;cdecl;
begin WaitMouseMove281:=display.WaitMouseMove();end;
function IsDropFile282():boolean;cdecl;
begin IsDropFile282:=display.IsDropFile();end;
function GetDropFile283():pchar;cdecl;
begin GetDropFile283:=pchar(display.GetDropFile());end;
function GetDropFileW284():unicodestring;cdecl;
begin GetDropFileW284:=display.GetDropFileW();end;
function WaitDropFile285():pchar;cdecl;
begin WaitDropFile285:=pchar(display.WaitDropFile());end;
function GetMouseAbsX286():longint;cdecl;
begin GetMouseAbsX286:=display.GetMouseAbsX();end;
function GetMouseAbsY287():longint;cdecl;
begin GetMouseAbsY287:=display.GetMouseAbsY();end;
function GetMouseWinX288():longint;cdecl;
begin GetMouseWinX288:=display.GetMouseWinX();end;
function GetMouseWinY289():longint;cdecl;
begin GetMouseWinY289:=display.GetMouseWinY();end;
function GetMousePosX290():longint;cdecl;
begin GetMousePosX290:=display.GetMousePosX();end;
function GetMousePosY291():longint;cdecl;
begin GetMousePosY291:=display.GetMousePosY();end;
function LoadAudio292(s:pchar):longword;cdecl;
begin LoadAudio292:=display.LoadAudio(s);end;
procedure PlayAudio293(id:longword;s:pchar;b:boolean);cdecl;
begin display.PlayAudio(id,s,b);end;
procedure PlayAudio294(id:longword;s:pchar);cdecl;
begin display.PlayAudio(id,s);end;
procedure PlayAudio295(id:longword;b:boolean);cdecl;
begin display.PlayAudio(id,b);end;
procedure PlayAudio296(id:longword);cdecl;
begin display.PlayAudio(id);end;
procedure StopAudio297(id:longword);cdecl;
begin display.StopAudio(id);end;
procedure PauseAudio298(id:longword);cdecl;
begin display.PauseAudio(id);end;
procedure ResumeAudio299(id:longword);cdecl;
begin display.ResumeAudio(id);end;
procedure ReleaseAudio300(id:longword);cdecl;
begin display.ReleaseAudio(id);end;
function GetAudioVol301(id:longword):longword;cdecl;
begin GetAudioVol301:=display.GetAudioVol(id);end;
procedure SetAudioVol302(id:longword;v:longword);cdecl;
begin display.SetAudioVol(id,v);end;
function GetAudioPos303(id:longword):longword;cdecl;
begin GetAudioPos303:=display.GetAudioPos(id);end;
procedure SetAudioPos304(id:longword;pos:longword;b:boolean);cdecl;
begin display.SetAudioPos(id,pos,b);end;
procedure SetAudioPos305(id:longword;pos:longword);cdecl;
begin display.SetAudioPos(id,pos);end;
function GetAudioLen306(id:longword):longword;cdecl;
begin GetAudioLen306:=display.GetAudioLen(id);end;
function IsFile307(s:pchar):boolean;cdecl;
begin IsFile307:=display.IsFile(s);end;
function NewFile308(s:pchar):boolean;cdecl;
begin NewFile308:=display.NewFile(s);end;
function NewDir309(s:pchar):boolean;cdecl;
begin NewDir309:=display.NewDir(s);end;
function CopyFile310(src,des:pchar):boolean;cdecl;
begin CopyFile310:=display.CopyFile(src,des);end;
function MoveFile311(src,des:pchar):boolean;cdecl;
begin MoveFile311:=display.MoveFile(src,des);end;
function DeleteFile312(s:pchar):boolean;cdecl;
begin DeleteFile312:=display.DeleteFile(s);end;
procedure OpenFile313(s:pchar);cdecl;
begin display.OpenFile(s);end;
procedure CloseFile314();cdecl;
begin display.CloseFile();end;
function GetFileLen315():longword;cdecl;
begin GetFileLen315:=display.GetFileLen();end;
function GetFilePos316():longword;cdecl;
begin GetFilePos316:=display.GetFilePos();end;
procedure SetFilePos317(pos:longword);cdecl;
begin display.SetFilePos(pos);end;
function GetByte318():byte;cdecl;
begin GetByte318:=display.GetByte();end;
function GetWord319():word;cdecl;
begin GetWord319:=display.GetWord();end;
function GetLongword320():longword;cdecl;
begin GetLongword320:=display.GetLongword();end;
function GetInteger321():longword;cdecl;
begin GetInteger321:=display.GetInteger();end;
function GetPchar322():pchar;cdecl;
begin GetPchar322:=display.GetPchar();end;
function GetString323(len:longword):pchar;cdecl;
begin GetString323:=pchar(display.GetString(len));end;
exports GetString323;
exports GetPchar322;
exports GetInteger321;
exports GetLongword320;
exports GetWord319;
exports GetByte318;
exports SetFilePos317;
exports GetFilePos316;
exports GetFileLen315;
exports CloseFile314;
exports OpenFile313;
exports DeleteFile312;
exports MoveFile311;
exports CopyFile310;
exports NewDir309;
exports NewFile308;
exports IsFile307;
exports GetAudioLen306;
exports SetAudioPos305;
exports SetAudioPos304;
exports GetAudioPos303;
exports SetAudioVol302;
exports GetAudioVol301;
exports ReleaseAudio300;
exports ResumeAudio299;
exports PauseAudio298;
exports StopAudio297;
exports PlayAudio296;
exports PlayAudio295;
exports PlayAudio294;
exports PlayAudio293;
exports LoadAudio292;
exports GetMousePosY291;
exports GetMousePosX290;
exports GetMouseWinY289;
exports GetMouseWinX288;
exports GetMouseAbsY287;
exports GetMouseAbsX286;
exports WaitDropFile285;
exports GetDropFileW284;
exports GetDropFile283;
exports IsDropFile282;
exports WaitMouseMove281;
exports GetMouseMove280;
exports IsMouseMove279;
exports WaitMouseWheel278;
exports GetMouseWheel277;
exports IsMouseWheel276;
exports WaitMouseRight275;
exports IsMouseRight274;
exports WaitMouseMiddle273;
exports IsMouseMiddle272;
exports WaitMouseLeft271;
exports IsMouseLeft270;
exports WaitMouse269;
exports WaitMouse268;
exports GetMouse267;
exports IsMouse266;
exports IsMouse265;
exports WaitKey264;
exports WaitKey263;
exports GetKey262;
exports IsKey261;
exports IsKey260;
exports WaitMsg259;
exports GetMsg258;
exports IsMsg257;
exports WaitNextMsg256;
exports GetNextMsg255;
exports IsNextMsg254;
exports SendMsg253;
exports MoveMousePos252;
exports MoveMouseWin251;
exports MoveMouseAbs250;
exports MoveMouse249;
exports WheelMouse248;
exports UpMouse247;
exports DownMouse246;
exports PressMouse245;
exports PressMouse244;
exports UpKey243;
exports DownKey242;
exports PressKey241;
exports PressKey240;
exports BlurBBGau239;
exports BlurBBBox238;
exports MixBB237;
exports SetBB236;
exports GetBB235;
exports ReleaseBB234;
exports CreateBB233;
exports BlurBMPGau232;
exports BlurBMPBox231;
exports BlurBMPBox230;
exports MixBMP229;
exports DrawBMP228;
exports DrawBMP227;
exports DrawBMP226;
exports DrawBMP225;
exports DrawBMP224;
exports DrawBMP223;
exports DrawBMP222;
exports DrawBMP221;
exports DrawBMP220;
exports DrawBMP219;
exports DrawBMP218;
exports DrawBMP217;
exports DrawBMP216;
exports DrawBMP215;
exports DrawBMP214;
exports DrawBMP213;
exports DrawBMP212;
exports DrawBMP211;
exports DrawBMP210;
exports DrawBMP209;
exports DrawBMP208;
exports DrawBMP207;
exports DrawBMP206;
exports DrawBMP205;
exports DrawBMP204;
exports DrawBMP203;
exports DrawBMP202;
exports DrawBMP201;
exports DrawBMP200;
exports DrawBMP199;
exports SaveBMP198;
exports LoadBMP197;
exports LoadBMP196;
exports ReleaseBMP195;
exports ReleaseBMP194;
exports CreateBMP193;
exports CreateBMP192;
exports CreateBMP191;
exports CreateBMP190;
exports CreateBMP189;
exports Circle188;
exports Circle187;
exports Circle186;
exports Circle185;
exports Ellipse184;
exports Ellipse183;
exports Ellipse182;
exports Ellipse181;
exports Chord180;
exports Chord179;
exports Chord178;
exports Chord177;
exports Pie176;
exports Pie175;
exports Pie174;
exports Pie173;
exports Arc172;
exports Arc171;
exports Arc170;
exports Arc169;
exports Triangle168;
exports Triangle167;
exports Triangle166;
exports Triangle165;
exports Clear164;
exports Clear163;
exports Clear162;
exports Clear161;
exports Bar160;
exports Bar159;
exports Bar158;
exports Bar157;
exports Line156;
exports Line155;
exports Line154;
exports SetBBPixel153;
exports GetBBPixel152;
exports SetPixel151;
exports SetPixel150;
exports SetPixel149;
exports GetPixel148;
exports GetPixel147;
exports DrawTextlnw146;
exports DrawTextlnw145;
exports DrawTextlnw144;
exports DrawTextlnXYw143;
exports DrawTextlnXYw142;
exports DrawTextlnXYw141;
exports DrawTextw140;
exports DrawTextw139;
exports DrawTextw138;
exports DrawTextXYw137;
exports DrawTextXYw136;
exports DrawTextXYw135;
exports DrawTextXYw134;
exports DrawTextXYw133;
exports DrawTextln132;
exports DrawTextln131;
exports DrawTextln130;
exports DrawTextln129;
exports DrawTextlnXY128;
exports DrawTextlnXY127;
exports DrawTextlnXY126;
exports DrawText125;
exports DrawText124;
exports DrawText123;
exports DrawTextXY122;
exports DrawTextXY121;
exports DrawTextXY120;
exports DrawTextXY119;
exports DrawTextXY118;
exports DrawTextXY117;
exports GetStringHeight116;
exports GetStringWidth115;
exports GetStringSize114;
exports SetFontName113;
exports SetFontCharSet112;
exports SetFontStrikeOut111;
exports SetFontUnderLine110;
exports SetFontLtalic109;
exports SetFontWeight108;
exports SetFontSize107;
exports SetFontHeight106;
exports SetFontWidth105;
exports SetFont104;
exports SetFont103;
exports MixColor102;
exports MixColor101;
exports HSN2RGB100;
exports HSI2RGB99;
exports HSV2RGB98;
exports HSL2RGB97;
exports RGB2HSN96;
exports RGB2HSI95;
exports RGB2HSV94;
exports RGB2HSL93;
exports GetRGB92;
exports GetRGBA91;
exports GetRed90;
exports GetGreen89;
exports GetBlue88;
exports GetAlpha87;
exports SetBrushColor86;
exports SetBrushColor85;
exports SetPenColor84;
exports SetPenColor83;
exports SetPenWidth82;
exports SetFGColor81;
exports GetFGColor80;
exports SetBGColor79;
exports GetBGColor78;
exports GetDraw77;
exports GetDraw76;
exports GetHwnd75;
exports GetHwnd74;
exports GetScr73;
exports GetWin72;
exports GetPos71;
exports GetPosY70;
exports GetPosX69;
exports SetPos68;
exports GetBorderSize67;
exports GetBorderHeight66;
exports GetBorderWidth65;
exports GetBorderTitle64;
exports GetScrCapsY63;
exports GetScrCapsX62;
exports GetScrSize61;
exports GetScrHeight60;
exports GetScrWidth59;
exports GetSize58;
exports GetHeight57;
exports GetWidth56;
exports SetSize55;
exports GetTitleW54;
exports GetTitle53;
exports SetTitleW52;
exports SetTitle51;
exports GetTime50;
exports GetTimeR49;
exports SetDrawProcedure48;
exports IsWin47;
exports CloseWin46;
exports FreshWin45;
exports CreateWin44;
exports CreateWin43;
exports CreateWin42;
exports CreateWin41;
exports CreateWin40;
exports CreateWin39;
exports GetError38;
exports GetFPS37;
exports GetFPSR36;
exports GetFPSL35;
exports AddFPS34;
exports FreshFPS33;
exports Sound32;
exports Sound31;
exports Sound30;
exports Delay29;
exports Delay28;
exports MsgBox27;
exports MsgBoxW26;
exports MsgBox25;
exports MsgBoxW24;
exports MsgBox23;
exports MsgBoxW22;
exports StopThread21;
exports ResumeThread20;
exports PauseThread19;
exports NewThread18;
exports i2hs17;
exports i2as16;
exports hs2as15;
exports as2hs14;
exports hs2i13;
exports i2hs12;
exports hc2i11;
exports i2hc10;
exports as2i9;
exports s2i8;
exports i2s7;
exports arctan26;
exports arccos5;
exports arcsin4;
exports abs3;
exports abs2;
exports sgn1;

end.
