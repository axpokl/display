
extern "C" long sgn1(double x);
extern "C" double abs2(double a,double b);
extern "C" double abs3(double a,double b,double c);
extern "C" double arcsin4(double x);
extern "C" double arccos5(double x);
extern "C" double arctan26(double x,double y);
extern "C" const char* i2s7(long i);
extern "C" unsigned long s2i8(const char* s);
extern "C" unsigned char as2i9(const char* s);
extern "C" char i2hc10(unsigned char i);
extern "C" unsigned char hc2i11(char c);
extern "C" const char* i2hs12(unsigned char i);
extern "C" unsigned char hs2i13(const char* s);
extern "C" const char* as2hs14(const char* s);
extern "C" const char* hs2as15(const char* s);
extern "C" const char* i2as16(unsigned long i);
extern "C" const char* i2hs17(unsigned long i);
extern "C" unsigned long NewThread18(void* th);
extern "C" void PauseThread19(unsigned long thi);
extern "C" void ResumeThread20(unsigned long thi);
extern "C" void StopThread21(unsigned long thi);
extern "C" unsigned long MsgBox22(const char* s,const char* title,unsigned long i);
extern "C" void MsgBox23(const char* s,const char* title);
extern "C" void MsgBox24(const char* s);
extern "C" void Delay25(unsigned long t);
extern "C" void Delay26();
extern "C" void Sound27(unsigned long hz,unsigned long t);
extern "C" void Sound28(unsigned long hz,double t);
extern "C" void Sound29(unsigned long hz);
extern "C" void FreshFPS30();
extern "C" void AddFPS31();
extern "C" unsigned long GetFPSL32();
extern "C" double GetFPSR33();
extern "C" unsigned long GetFPS34();
extern "C" unsigned long GetError35();
extern "C" void CreateWin36(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style);
extern "C" void CreateWin37(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg);
extern "C" void CreateWin38(unsigned long w,unsigned long h,unsigned long c);
extern "C" void CreateWin39(unsigned long w,unsigned long h);
extern "C" void CreateWin40(unsigned long cbg);
extern "C" void CreateWin41();
extern "C" void FreshWin42();
extern "C" void CloseWin43();
extern "C" bool IsWin44();
extern "C" void SetDrawProcedure45(void* th);
extern "C" double GetTimeR46();
extern "C" unsigned long GetTime47();
extern "C" void SetTitle48(const char* s);
extern "C" void SetSize49(unsigned long w,unsigned long h);
extern "C" const char* GetTitle50();
extern "C" unsigned long GetWidth51();
extern "C" unsigned long GetHeight52();
extern "C" unsigned long GetSize53();
extern "C" long GetScrWidth54();
extern "C" long GetScrHeight55();
extern "C" unsigned long GetScrSize56();
extern "C" long GetBorderTitle57();
extern "C" long GetBorderWidth58();
extern "C" long GetBorderHeight59();
extern "C" unsigned long GetBorderSize60();
extern "C" void SetPos61(unsigned long x,unsigned long y);
extern "C" long GetPosX62();
extern "C" long GetPosY63();
extern "C" unsigned long GetPos64();
extern "C" pbitmap GetWin65();
extern "C" pbitmap GetScr66();
extern "C" unsigned long GetHwnd67(pbitmap b);
extern "C" unsigned long GetHwnd68();
extern "C" unsigned long GetDraw69(pbitmap b);
extern "C" unsigned long GetDraw70();
extern "C" unsigned long GetBGColor71();
extern "C" void SetBGColor72(unsigned long c);
extern "C" unsigned long GetFGColor73();
extern "C" void SetFGColor74(unsigned long c);
extern "C" void SetPenWidth75(unsigned long pew);
extern "C" void SetPenColor76(pbitmap b,unsigned long c);
extern "C" void SetPenColor77(unsigned long c);
extern "C" void SetBrushColor78(pbitmap b,unsigned long c);
extern "C" void SetBrushColor79(unsigned long c);
extern "C" unsigned char GetAlpha80(unsigned long c);
extern "C" unsigned char GetBlue81(unsigned long c);
extern "C" unsigned char GetGreen82(unsigned long c);
extern "C" unsigned char GetRed83(unsigned long c);
extern "C" unsigned long GetRGBA84(unsigned char r,unsigned char g,unsigned char b,unsigned char a);
extern "C" unsigned long GetRGB85(unsigned char r,unsigned char g,unsigned char b);
extern "C" unsigned long RGB2HSL86(unsigned long rgb);
extern "C" unsigned long RGB2HSV87(unsigned long rgb);
extern "C" unsigned long RGB2HSI88(unsigned long rgb);
extern "C" unsigned long RGB2HSN89(unsigned long rgb);
extern "C" unsigned long HSL2RGB90(unsigned long hsn);
extern "C" unsigned long HSV2RGB91(unsigned long hsn);
extern "C" unsigned long HSI2RGB92(unsigned long hsn);
extern "C" unsigned long HSN2RGB93(unsigned long hsn);
extern "C" void MixColor94(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3,double m);
extern "C" void MixColor95(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3);
extern "C" void SetFont96(pbitmap b);
extern "C" void SetFont97();
extern "C" void SetFontWidth98(unsigned long w);
extern "C" void SetFontHeight99(unsigned long h);
extern "C" void SetFontSize100(unsigned long w,unsigned long h);
extern "C" void SetFontWeight101(unsigned long wg);
extern "C" void SetFontLtalic102(unsigned long lt);
extern "C" void SetFontUnderLine103(unsigned long ud);
extern "C" void SetFontStrikeOut104(unsigned long sk);
extern "C" void SetFontCharSet105(unsigned long cs);
extern "C" void SetFontName106(const char* s);
extern "C" void GetStringSize107(const char* s);
extern "C" unsigned long GetStringWidth108(const char* s);
extern "C" unsigned long GetStringHeight109(const char* s);
extern "C" void DrawTextXY110(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY111(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextXY112(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY113(const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextXY114(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawText115(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawText116(const char* s,unsigned long cfg);
extern "C" void DrawText117(const char* s);
extern "C" void DrawTextlnXY118(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXY119(const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextlnXY120(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextln121(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextln122(const char* s,unsigned long cfg);
extern "C" void DrawTextln123(const char* s);
extern "C" void DrawTextln124();
extern "C" void DrawTextXYw125(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw126(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextXYw127(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw128(const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextXYw129(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextw130(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextw131(const char* s,unsigned long cfg);
extern "C" void DrawTextw132(const char* s);
extern "C" void DrawTextlnXYw133(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXYw134(const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextlnXYw135(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextlnw136(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnw137(const char* s,unsigned long cfg);
extern "C" void DrawTextlnw138(const char* s);
extern "C" unsigned long GetPixel139(pbitmap b,unsigned long x,unsigned long y);
extern "C" unsigned long GetPixel140(unsigned long x,unsigned long y);
extern "C" void SetPixel141(pbitmap b,unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel142(unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel143(unsigned long x,unsigned long y);
extern "C" unsigned long GetBBPixel144(pbitbuf bb,unsigned long x,unsigned long y);
extern "C" void SetBBPixel145(pbitbuf bb,unsigned long x,unsigned long y,unsigned long c);
extern "C" void Line146(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Line147(long x,long y,long w,long h,unsigned long c);
extern "C" void Line148(long x,long y,long w,long h);
extern "C" void Bar149(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar150(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar151(long x,long y,long w,long h,unsigned long c);
extern "C" void Bar152(long x,long y,long w,long h);
extern "C" void Clear153(pbitmap b,unsigned long c);
extern "C" void Clear154(pbitmap b);
extern "C" void Clear155(unsigned long c);
extern "C" void Clear156();
extern "C" void Triangle157(pbitmap b,long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg);
extern "C" void Triangle158(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg);
extern "C" void Triangle159(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long c);
extern "C" void Triangle160(long x1,long y1,long x2,long y2,long x3,long y3);
extern "C" void Arc161(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc162(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc163(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Arc164(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Pie165(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie166(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie167(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Pie168(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Chord169(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord170(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord171(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Chord172(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Ellipse173(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse174(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse175(long x,long y,long rx,long ry,unsigned long c);
extern "C" void Ellipse176(long x,long y,long rx,long ry);
extern "C" void Circle177(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle178(long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle179(long x,long y,long r,unsigned long c);
extern "C" void Circle180(long x,long y,long r);
extern "C" pbitmap CreateBMP181(pbitmap b,unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP182(pbitmap b);
extern "C" pbitmap CreateBMP183(unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP184(unsigned long w,unsigned long h);
extern "C" pbitmap CreateBMP185();
extern "C" void ReleaseBMP186(pbitmap b);
extern "C" void ReleaseBMP187();
extern "C" pbitmap LoadBMP188(const char* s,unsigned long c);
extern "C" pbitmap LoadBMP189(const char* s);
extern "C" void SaveBMP190(pbitmap b,const char* s);
extern "C" void DrawBMP191(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP192(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP193(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP194(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP195(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP196(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP197(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP198(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP199(pbitmap bs,pbitmap bd,unsigned long c);
extern "C" void DrawBMP200(pbitmap bs,pbitmap bd);
extern "C" void DrawBMP201(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP202(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP203(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP204(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP205(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP206(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP207(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP208(pbitmap bs,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP209(pbitmap bs,unsigned long c);
extern "C" void DrawBMP210(pbitmap bs);
extern "C" void DrawBMP211(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP212(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP213(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP214(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP215(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP216(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP217(unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP218(unsigned long xd,unsigned long yd);
extern "C" void DrawBMP219(unsigned long c);
extern "C" void DrawBMP220();
extern "C" void MixBMP221(pbitmap b1,pbitmap b2,pbitmap b3);
extern "C" void BlurBMPBox222(pbitmap b,unsigned long d,unsigned long n);
extern "C" void BlurBMPBox223(pbitmap b,unsigned long d);
extern "C" void BlurBMPGau224(pbitmap b,double d);
extern "C" pbitbuf CreateBB225(pbitmap b);
extern "C" void ReleaseBB226(pbitbuf bb);
extern "C" void GetBB227(pbitbuf bb);
extern "C" void SetBB228(pbitbuf bb);
extern "C" void MixBB229(pbitbuf bb1,pbitbuf bb2,pbitbuf bb3);
extern "C" void BlurBBBox230(pbitbuf bb,unsigned long d,unsigned long n);
extern "C" void BlurBBGau231(pbitbuf bb,double d);
extern "C" void PressKey232(unsigned char k,unsigned long t);
extern "C" void PressKey233(unsigned char k);
extern "C" void DownKey234(unsigned char k);
extern "C" void UpKey235(unsigned char k);
extern "C" void PressMouse236(unsigned char m,unsigned long t);
extern "C" void PressMouse237(unsigned char m);
extern "C" void DownMouse238(unsigned char m);
extern "C" void UpMouse239(unsigned char m);
extern "C" void WheelMouse240(long wl);
extern "C" void MoveMouse241(long x,long y);
extern "C" void MoveMouseAbs242(long x,long y);
extern "C" void MoveMouseWin243(long x,long y);
extern "C" void MoveMousePos244(long x,long y);
extern "C" void SendMsg245();
extern "C" bool IsNextMsg246();
extern "C" unsigned long GetNextMsg247();
extern "C" unsigned long WaitNextMsg248();
extern "C" bool IsMsg249(unsigned long uM);
extern "C" long long GetMsg250(unsigned long uM);
extern "C" long long WaitMsg251(unsigned long uM);
extern "C" bool IsKey252(unsigned long k);
extern "C" bool IsKey253();
extern "C" unsigned long GetKey254();
extern "C" unsigned long WaitKey255(unsigned long k);
extern "C" unsigned long WaitKey256();
extern "C" bool IsMouse257(unsigned long m);
extern "C" bool IsMouse258();
extern "C" unsigned long GetMouse259();
extern "C" unsigned long WaitMouse260(unsigned long m);
extern "C" unsigned long WaitMouse261();
extern "C" bool IsMouseLeft262();
extern "C" void WaitMouseLeft263();
extern "C" bool IsMouseMiddle264();
extern "C" void WaitMouseMiddle265();
extern "C" bool IsMouseRight266();
extern "C" void WaitMouseRight267();
extern "C" bool IsMouseWheel268();
extern "C" long GetMouseWheel269();
extern "C" void WaitMouseWheel270();
extern "C" bool IsMouseMove271();
extern "C" unsigned long GetMouseMove272();
extern "C" unsigned long WaitMouseMove273();
extern "C" bool IsDropFile274();
extern "C" const char* GetDropFile275();
extern "C" const char* WaitDropFile276();
extern "C" long GetMouseAbsX277();
extern "C" long GetMouseAbsY278();
extern "C" long GetMouseWinX279();
extern "C" long GetMouseWinY280();
extern "C" long GetMousePosX281();
extern "C" long GetMousePosY282();
extern "C" unsigned long LoadAudio283(const char* s);
extern "C" void PlayAudio284(unsigned long id,const char* s,bool b);
extern "C" void PlayAudio285(unsigned long id,const char* s);
extern "C" void PlayAudio286(unsigned long id,bool b);
extern "C" void PlayAudio287(unsigned long id);
extern "C" void StopAudio288(unsigned long id);
extern "C" void PauseAudio289(unsigned long id);
extern "C" void ResumeAudio290(unsigned long id);
extern "C" void ReleaseAudio291(unsigned long id);
extern "C" unsigned long GetAudioVol292(unsigned long id);
extern "C" void SetAudioVol293(unsigned long id,unsigned long v);
extern "C" unsigned long GetAudioPos294(unsigned long id);
extern "C" void SetAudioPos295(unsigned long id,unsigned long pos,bool b);
extern "C" void SetAudioPos296(unsigned long id,unsigned long pos);
extern "C" unsigned long GetAudioLen297(unsigned long id);
extern "C" bool IsFile298(const char* s);
extern "C" bool NewFile299(const char* s);
extern "C" bool NewDir300(const char* s);
extern "C" bool CopyFile301(const char* src,const char* des);
extern "C" bool MoveFile302(const char* src,const char* des);
extern "C" bool DeleteFile303(const char* s);
extern "C" void OpenFile304(const char* s);
extern "C" void CloseFile305();
extern "C" unsigned long GetFileLen306();
extern "C" unsigned long GetFilePos307();
extern "C" void SetFilePos308(unsigned long pos);
extern "C" unsigned char GetByte309();
extern "C" unsigned short GetWord310();
extern "C" unsigned long GetLongword311();
extern "C" unsigned long GetInteger312();
extern "C" const char* GetPchar313();
extern "C" const char* GetString314(unsigned long len);

long sgn(double x){return sgn1(x);}
double abs(double a,double b){return abs2(a,b);}
double abs(double a,double b,double c){return abs3(a,b,c);}
double arcsin(double x){return arcsin4(x);}
double arccos(double x){return arccos5(x);}
double arctan2(double x,double y){return arctan26(x,y);}
mystring i2s(long i){return i2s7(i);}
unsigned long s2i(const char* s){return s2i8(s);}
unsigned char as2i(const char* s){return as2i9(s);}
char i2hc(unsigned char i){return i2hc10(i);}
unsigned char hc2i(char c){return hc2i11(c);}
mystring i2hs(unsigned char i){return i2hs12(i);}
unsigned char hs2i(const char* s){return hs2i13(s);}
mystring as2hs(const char* s){return as2hs14(s);}
mystring hs2as(const char* s){return hs2as15(s);}
mystring i2as(unsigned long i){return i2as16(i);}
mystring i2hs(unsigned long i){return i2hs17(i);}
unsigned long newthread(void* th){return NewThread18(th);}
void pausethread(unsigned long thi){PauseThread19(thi);}
void resumethread(unsigned long thi){ResumeThread20(thi);}
void stopthread(unsigned long thi){StopThread21(thi);}
unsigned long msgbox(const char* s,const char* title,unsigned long i){return MsgBox22(s,title,i);}
void msgbox(const char* s,const char* title){MsgBox23(s,title);}
void msgbox(const char* s){MsgBox24(s);}
void delay(unsigned long t){Delay25(t);}
void delay(){Delay26();}
void sound(unsigned long hz,unsigned long t){Sound27(hz,t);}
void sound(unsigned long hz,double t){Sound28(hz,t);}
void sound(unsigned long hz){Sound29(hz);}
void freshfps(){FreshFPS30();}
void addfps(){AddFPS31();}
unsigned long getfpsl(){return GetFPSL32();}
double getfpsr(){return GetFPSR33();}
unsigned long getfps(){return GetFPS34();}
unsigned long geterror(){return GetError35();}
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style){CreateWin36(w,h,cfg,cbg,style);}
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg){CreateWin37(w,h,cfg,cbg);}
void createwin(unsigned long w,unsigned long h,unsigned long c){CreateWin38(w,h,c);}
void createwin(unsigned long w,unsigned long h){CreateWin39(w,h);}
void createwin(unsigned long cbg){CreateWin40(cbg);}
void createwin(){CreateWin41();}
void freshwin(){FreshWin42();}
void closewin(){CloseWin43();}
bool iswin(){return IsWin44();}
void setdrawprocedure(void* th){SetDrawProcedure45(th);}
double gettimer(){return GetTimeR46();}
unsigned long gettime(){return GetTime47();}
void settitle(const char* s){SetTitle48(s);}
void setsize(unsigned long w,unsigned long h){SetSize49(w,h);}
mystring gettitle(){return GetTitle50();}
unsigned long getwidth(){return GetWidth51();}
unsigned long getheight(){return GetHeight52();}
unsigned long getsize(){return GetSize53();}
long getscrwidth(){return GetScrWidth54();}
long getscrheight(){return GetScrHeight55();}
unsigned long getscrsize(){return GetScrSize56();}
long getbordertitle(){return GetBorderTitle57();}
long getborderwidth(){return GetBorderWidth58();}
long getborderheight(){return GetBorderHeight59();}
unsigned long getbordersize(){return GetBorderSize60();}
void setpos(unsigned long x,unsigned long y){SetPos61(x,y);}
long getposx(){return GetPosX62();}
long getposy(){return GetPosY63();}
unsigned long getpos(){return GetPos64();}
pbitmap getwin(){return GetWin65();}
pbitmap getscr(){return GetScr66();}
unsigned long gethwnd(pbitmap b){return GetHwnd67(b);}
unsigned long gethwnd(){return GetHwnd68();}
unsigned long getdraw(pbitmap b){return GetDraw69(b);}
unsigned long getdraw(){return GetDraw70();}
unsigned long getbgcolor(){return GetBGColor71();}
void setbgcolor(unsigned long c){SetBGColor72(c);}
unsigned long getfgcolor(){return GetFGColor73();}
void setfgcolor(unsigned long c){SetFGColor74(c);}
void setpenwidth(unsigned long pew){SetPenWidth75(pew);}
void setpencolor(pbitmap b,unsigned long c){SetPenColor76(b,c);}
void setpencolor(unsigned long c){SetPenColor77(c);}
void setbrushcolor(pbitmap b,unsigned long c){SetBrushColor78(b,c);}
void setbrushcolor(unsigned long c){SetBrushColor79(c);}
unsigned char getalpha(unsigned long c){return GetAlpha80(c);}
unsigned char getblue(unsigned long c){return GetBlue81(c);}
unsigned char getgreen(unsigned long c){return GetGreen82(c);}
unsigned char getred(unsigned long c){return GetRed83(c);}
unsigned long getrgba(unsigned char r,unsigned char g,unsigned char b,unsigned char a){return GetRGBA84(r,g,b,a);}
unsigned long getrgb(unsigned char r,unsigned char g,unsigned char b){return GetRGB85(r,g,b);}
unsigned long rgb2hsl(unsigned long rgb){return RGB2HSL86(rgb);}
unsigned long rgb2hsv(unsigned long rgb){return RGB2HSV87(rgb);}
unsigned long rgb2hsi(unsigned long rgb){return RGB2HSI88(rgb);}
unsigned long rgb2hsn(unsigned long rgb){return RGB2HSN89(rgb);}
unsigned long hsl2rgb(unsigned long hsn){return HSL2RGB90(hsn);}
unsigned long hsv2rgb(unsigned long hsn){return HSV2RGB91(hsn);}
unsigned long hsi2rgb(unsigned long hsn){return HSI2RGB92(hsn);}
unsigned long hsn2rgb(unsigned long hsn){return HSN2RGB93(hsn);}
void mixcolor(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3,double m){MixColor94(rgb1,rgb2,rgb3,m);}
void mixcolor(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3){MixColor95(rgb1,rgb2,rgb3);}
void setfont(pbitmap b){SetFont96(b);}
void setfont(){SetFont97();}
void setfontwidth(unsigned long w){SetFontWidth98(w);}
void setfontheight(unsigned long h){SetFontHeight99(h);}
void setfontsize(unsigned long w,unsigned long h){SetFontSize100(w,h);}
void setfontweight(unsigned long wg){SetFontWeight101(wg);}
void setfontltalic(unsigned long lt){SetFontLtalic102(lt);}
void setfontunderline(unsigned long ud){SetFontUnderLine103(ud);}
void setfontstrikeout(unsigned long sk){SetFontStrikeOut104(sk);}
void setfontcharset(unsigned long cs){SetFontCharSet105(cs);}
void setfontname(const char* s){SetFontName106(s);}
void getstringsize(const char* s){GetStringSize107(s);}
unsigned long getstringwidth(const char* s){return GetStringWidth108(s);}
unsigned long getstringheight(const char* s){return GetStringHeight109(s);}
void drawtextxy(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXY110(b,s,x,y,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextXY111(b,s,x,y,cfg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXY112(s,x,y,cfg,cbg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextXY113(s,x,y,cfg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y){DrawTextXY114(s,x,y);}
void drawtext(const char* s,unsigned long cfg,unsigned long cbg){DrawText115(s,cfg,cbg);}
void drawtext(const char* s,unsigned long cfg){DrawText116(s,cfg);}
void drawtext(const char* s){DrawText117(s);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextlnXY118(s,x,y,cfg,cbg);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextlnXY119(s,x,y,cfg);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y){DrawTextlnXY120(s,x,y);}
void drawtextln(const char* s,unsigned long cfg,unsigned long cbg){DrawTextln121(s,cfg,cbg);}
void drawtextln(const char* s,unsigned long cfg){DrawTextln122(s,cfg);}
void drawtextln(const char* s){DrawTextln123(s);}
void drawtextln(){DrawTextln124();}
void drawtextxyw(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXYw125(b,s,x,y,cfg,cbg);}
void drawtextxyw(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextXYw126(b,s,x,y,cfg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXYw127(s,x,y,cfg,cbg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextXYw128(s,x,y,cfg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y){DrawTextXYw129(s,x,y);}
void drawtextw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextw130(s,cfg,cbg);}
void drawtextw(const char* s,unsigned long cfg){DrawTextw131(s,cfg);}
void drawtextw(const char* s){DrawTextw132(s);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextlnXYw133(s,x,y,cfg,cbg);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextlnXYw134(s,x,y,cfg);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y){DrawTextlnXYw135(s,x,y);}
void drawtextlnw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextlnw136(s,cfg,cbg);}
void drawtextlnw(const char* s,unsigned long cfg){DrawTextlnw137(s,cfg);}
void drawtextlnw(const char* s){DrawTextlnw138(s);}
unsigned long getpixel(pbitmap b,unsigned long x,unsigned long y){return GetPixel139(b,x,y);}
unsigned long getpixel(unsigned long x,unsigned long y){return GetPixel140(x,y);}
void setpixel(pbitmap b,unsigned long x,unsigned long y,unsigned long c){SetPixel141(b,x,y,c);}
void setpixel(unsigned long x,unsigned long y,unsigned long c){SetPixel142(x,y,c);}
void setpixel(unsigned long x,unsigned long y){SetPixel143(x,y);}
unsigned long getbbpixel(pbitbuf bb,unsigned long x,unsigned long y){return GetBBPixel144(bb,x,y);}
void setbbpixel(pbitbuf bb,unsigned long x,unsigned long y,unsigned long c){SetBBPixel145(bb,x,y,c);}
void line(pbitmap b,long x,long y,long w,long h,unsigned long c){Line146(b,x,y,w,h,c);}
void line(long x,long y,long w,long h,unsigned long c){Line147(x,y,w,h,c);}
void line(long x,long y,long w,long h){Line148(x,y,w,h);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar149(b,x,y,w,h,cfg,cbg);}
void bar(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar150(x,y,w,h,cfg,cbg);}
void bar(long x,long y,long w,long h,unsigned long c){Bar151(x,y,w,h,c);}
void bar(long x,long y,long w,long h){Bar152(x,y,w,h);}
void clear(pbitmap b,unsigned long c){Clear153(b,c);}
void clear(pbitmap b){Clear154(b);}
void clear(unsigned long c){Clear155(c);}
void clear(){Clear156();}
void triangle(pbitmap b,long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg){Triangle157(b,x1,y1,x2,y2,x3,y3,cfg,cbg);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg){Triangle158(x1,y1,x2,y2,x3,y3,cfg,cbg);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long c){Triangle159(x1,y1,x2,y2,x3,y3,c);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3){Triangle160(x1,y1,x2,y2,x3,y3);}
void arc(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc161(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc162(x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Arc163(x,y,rx,ry,sa,ea,c);}
void arc(long x,long y,long rx,long ry,double sa,double ea){Arc164(x,y,rx,ry,sa,ea);}
void pie(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie165(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie166(x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Pie167(x,y,rx,ry,sa,ea,c);}
void pie(long x,long y,long rx,long ry,double sa,double ea){Pie168(x,y,rx,ry,sa,ea);}
void chord(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord169(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord170(x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Chord171(x,y,rx,ry,sa,ea,c);}
void chord(long x,long y,long rx,long ry,double sa,double ea){Chord172(x,y,rx,ry,sa,ea);}
void ellipse(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse173(b,x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse174(x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long c){Ellipse175(x,y,rx,ry,c);}
void ellipse(long x,long y,long rx,long ry){Ellipse176(x,y,rx,ry);}
void circle(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle177(b,x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle178(x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long c){Circle179(x,y,r,c);}
void circle(long x,long y,long r){Circle180(x,y,r);}
pbitmap createbmp(pbitmap b,unsigned long w,unsigned long h,unsigned long c){return CreateBMP181(b,w,h,c);}
pbitmap createbmp(pbitmap b){return CreateBMP182(b);}
pbitmap createbmp(unsigned long w,unsigned long h,unsigned long c){return CreateBMP183(w,h,c);}
pbitmap createbmp(unsigned long w,unsigned long h){return CreateBMP184(w,h);}
pbitmap createbmp(){return CreateBMP185();}
void releasebmp(pbitmap b){ReleaseBMP186(b);}
void releasebmp(){ReleaseBMP187();}
pbitmap loadbmp(const char* s,unsigned long c){return LoadBMP188(s,c);}
pbitmap loadbmp(const char* s){return LoadBMP189(s);}
void savebmp(pbitmap b,const char* s){SaveBMP190(b,s);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP191(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP192(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP193(bs,bd,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP194(bs,bd,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP195(bs,bd,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP196(bs,bd,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP197(bs,bd,xd,yd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd){DrawBMP198(bs,bd,xd,yd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long c){DrawBMP199(bs,bd,c);}
void drawbmp(pbitmap bs,pbitmap bd){DrawBMP200(bs,bd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP201(bs,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP202(bs,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP203(bs,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP204(bs,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP205(bs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP206(bs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP207(bs,xd,yd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd){DrawBMP208(bs,xd,yd);}
void drawbmp(pbitmap bs,unsigned long c){DrawBMP209(bs,c);}
void drawbmp(pbitmap bs){DrawBMP210(bs);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP211(xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP212(xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP213(xs,ys,xd,yd,w,h,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP214(xs,ys,xd,yd,w,h);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP215(xd,yd,wd,hd,c);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP216(xd,yd,wd,hd);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long c){DrawBMP217(xd,yd,c);}
void drawbmp(unsigned long xd,unsigned long yd){DrawBMP218(xd,yd);}
void drawbmp(unsigned long c){DrawBMP219(c);}
void drawbmp(){DrawBMP220();}
void mixbmp(pbitmap b1,pbitmap b2,pbitmap b3){MixBMP221(b1,b2,b3);}
void blurbmpbox(pbitmap b,unsigned long d,unsigned long n){BlurBMPBox222(b,d,n);}
void blurbmpbox(pbitmap b,unsigned long d){BlurBMPBox223(b,d);}
void blurbmpgau(pbitmap b,double d){BlurBMPGau224(b,d);}
pbitbuf createbb(pbitmap b){return CreateBB225(b);}
void releasebb(pbitbuf bb){ReleaseBB226(bb);}
void getbb(pbitbuf bb){GetBB227(bb);}
void setbb(pbitbuf bb){SetBB228(bb);}
void mixbb(pbitbuf bb1,pbitbuf bb2,pbitbuf bb3){MixBB229(bb1,bb2,bb3);}
void blurbbbox(pbitbuf bb,unsigned long d,unsigned long n){BlurBBBox230(bb,d,n);}
void blurbbgau(pbitbuf bb,double d){BlurBBGau231(bb,d);}
void presskey(unsigned char k,unsigned long t){PressKey232(k,t);}
void presskey(unsigned char k){PressKey233(k);}
void downkey(unsigned char k){DownKey234(k);}
void upkey(unsigned char k){UpKey235(k);}
void pressmouse(unsigned char m,unsigned long t){PressMouse236(m,t);}
void pressmouse(unsigned char m){PressMouse237(m);}
void downmouse(unsigned char m){DownMouse238(m);}
void upmouse(unsigned char m){UpMouse239(m);}
void wheelmouse(long wl){WheelMouse240(wl);}
void movemouse(long x,long y){MoveMouse241(x,y);}
void movemouseabs(long x,long y){MoveMouseAbs242(x,y);}
void movemousewin(long x,long y){MoveMouseWin243(x,y);}
void movemousepos(long x,long y){MoveMousePos244(x,y);}
void sendmsg(){SendMsg245();}
bool isnextmsg(){return IsNextMsg246();}
unsigned long getnextmsg(){return GetNextMsg247();}
unsigned long waitnextmsg(){return WaitNextMsg248();}
bool ismsg(unsigned long uM){return IsMsg249(uM);}
long long getmsg(unsigned long uM){return GetMsg250(uM);}
long long waitmsg(unsigned long uM){return WaitMsg251(uM);}
bool iskey(unsigned long k){return IsKey252(k);}
bool iskey(){return IsKey253();}
unsigned long getkey(){return GetKey254();}
unsigned long waitkey(unsigned long k){return WaitKey255(k);}
unsigned long waitkey(){return WaitKey256();}
bool ismouse(unsigned long m){return IsMouse257(m);}
bool ismouse(){return IsMouse258();}
unsigned long getmouse(){return GetMouse259();}
unsigned long waitmouse(unsigned long m){return WaitMouse260(m);}
unsigned long waitmouse(){return WaitMouse261();}
bool ismouseleft(){return IsMouseLeft262();}
void waitmouseleft(){WaitMouseLeft263();}
bool ismousemiddle(){return IsMouseMiddle264();}
void waitmousemiddle(){WaitMouseMiddle265();}
bool ismouseright(){return IsMouseRight266();}
void waitmouseright(){WaitMouseRight267();}
bool ismousewheel(){return IsMouseWheel268();}
long getmousewheel(){return GetMouseWheel269();}
void waitmousewheel(){WaitMouseWheel270();}
bool ismousemove(){return IsMouseMove271();}
unsigned long getmousemove(){return GetMouseMove272();}
unsigned long waitmousemove(){return WaitMouseMove273();}
bool isdropfile(){return IsDropFile274();}
mystring getdropfile(){return GetDropFile275();}
mystring waitdropfile(){return WaitDropFile276();}
long getmouseabsx(){return GetMouseAbsX277();}
long getmouseabsy(){return GetMouseAbsY278();}
long getmousewinx(){return GetMouseWinX279();}
long getmousewiny(){return GetMouseWinY280();}
long getmouseposx(){return GetMousePosX281();}
long getmouseposy(){return GetMousePosY282();}
unsigned long loadaudio(const char* s){return LoadAudio283(s);}
void playaudio(unsigned long id,const char* s,bool b){PlayAudio284(id,s,b);}
void playaudio(unsigned long id,const char* s){PlayAudio285(id,s);}
void playaudio(unsigned long id,bool b){PlayAudio286(id,b);}
void playaudio(unsigned long id){PlayAudio287(id);}
void stopaudio(unsigned long id){StopAudio288(id);}
void pauseaudio(unsigned long id){PauseAudio289(id);}
void resumeaudio(unsigned long id){ResumeAudio290(id);}
void releaseaudio(unsigned long id){ReleaseAudio291(id);}
unsigned long getaudiovol(unsigned long id){return GetAudioVol292(id);}
void setaudiovol(unsigned long id,unsigned long v){SetAudioVol293(id,v);}
unsigned long getaudiopos(unsigned long id){return GetAudioPos294(id);}
void setaudiopos(unsigned long id,unsigned long pos,bool b){SetAudioPos295(id,pos,b);}
void setaudiopos(unsigned long id,unsigned long pos){SetAudioPos296(id,pos);}
unsigned long getaudiolen(unsigned long id){return GetAudioLen297(id);}
bool isfile(const char* s){return IsFile298(s);}
bool newfile(const char* s){return NewFile299(s);}
bool newdir(const char* s){return NewDir300(s);}
bool copyfile(const char* src,const char* des){return CopyFile301(src,des);}
bool movefile(const char* src,const char* des){return MoveFile302(src,des);}
bool deletefile(const char* s){return DeleteFile303(s);}
void openfile(const char* s){OpenFile304(s);}
void closefile(){CloseFile305();}
unsigned long getfilelen(){return GetFileLen306();}
unsigned long getfilepos(){return GetFilePos307();}
void setfilepos(unsigned long pos){SetFilePos308(pos);}
unsigned char getbyte(){return GetByte309();}
unsigned short getword(){return GetWord310();}
unsigned long getlongword(){return GetLongword311();}
unsigned long getinteger(){return GetInteger312();}
const char* getpchar(){return GetPchar313();}
mystring getstring(unsigned long len){return GetString314(len);}
