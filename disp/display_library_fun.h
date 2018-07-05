
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
extern "C" unsigned long MsgBoxW22(const short int* s,const short int* title,unsigned long i);
extern "C" unsigned long MsgBox23(const char* s,const char* title,unsigned long i);
extern "C" void MsgBoxW24(const short int* s,const short int* title);
extern "C" void MsgBox25(const char* s,const char* title);
extern "C" void MsgBoxW26(const short int* s);
extern "C" void MsgBox27(const char* s);
extern "C" void Delay28(unsigned long t);
extern "C" void Delay29();
extern "C" void Sound30(unsigned long hz,unsigned long t);
extern "C" void Sound31(unsigned long hz,double t);
extern "C" void Sound32(unsigned long hz);
extern "C" void FreshFPS33();
extern "C" void AddFPS34();
extern "C" unsigned long GetFPSL35();
extern "C" double GetFPSR36();
extern "C" unsigned long GetFPS37();
extern "C" unsigned long GetError38();
extern "C" void CreateWin39(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style);
extern "C" void CreateWin40(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg);
extern "C" void CreateWin41(unsigned long w,unsigned long h,unsigned long c);
extern "C" void CreateWin42(unsigned long w,unsigned long h);
extern "C" void CreateWin43(unsigned long cbg);
extern "C" void CreateWin44();
extern "C" void FreshWin45();
extern "C" void CloseWin46();
extern "C" bool IsWin47();
extern "C" void SetDrawProcedure48(void* th);
extern "C" double GetTimeR49();
extern "C" unsigned long GetTime50();
extern "C" void SetTitle51(const char* s);
extern "C" void SetTitleW52(const short int* s);
extern "C" const char* GetTitle53();
extern "C" const short int* GetTitleW54();
extern "C" void SetSize55(unsigned long w,unsigned long h);
extern "C" unsigned long GetWidth56();
extern "C" unsigned long GetHeight57();
extern "C" unsigned long GetSize58();
extern "C" long GetScrWidth59();
extern "C" long GetScrHeight60();
extern "C" unsigned long GetScrSize61();
extern "C" double GetScrCapsX62();
extern "C" double GetScrCapsY63();
extern "C" long GetBorderTitle64();
extern "C" long GetBorderWidth65();
extern "C" long GetBorderHeight66();
extern "C" unsigned long GetBorderSize67();
extern "C" void SetPos68(unsigned long x,unsigned long y);
extern "C" long GetPosX69();
extern "C" long GetPosY70();
extern "C" unsigned long GetPos71();
extern "C" pbitmap GetWin72();
extern "C" pbitmap GetScr73();
extern "C" unsigned long GetHwnd74(pbitmap b);
extern "C" unsigned long GetHwnd75();
extern "C" unsigned long GetDraw76(pbitmap b);
extern "C" unsigned long GetDraw77();
extern "C" unsigned long GetBGColor78();
extern "C" void SetBGColor79(unsigned long c);
extern "C" unsigned long GetFGColor80();
extern "C" void SetFGColor81(unsigned long c);
extern "C" void SetPenWidth82(unsigned long pew);
extern "C" void SetPenColor83(pbitmap b,unsigned long c);
extern "C" void SetPenColor84(unsigned long c);
extern "C" void SetBrushColor85(pbitmap b,unsigned long c);
extern "C" void SetBrushColor86(unsigned long c);
extern "C" unsigned char GetAlpha87(unsigned long c);
extern "C" unsigned char GetBlue88(unsigned long c);
extern "C" unsigned char GetGreen89(unsigned long c);
extern "C" unsigned char GetRed90(unsigned long c);
extern "C" unsigned long GetRGBA91(unsigned char r,unsigned char g,unsigned char b,unsigned char a);
extern "C" unsigned long GetRGB92(unsigned char r,unsigned char g,unsigned char b);
extern "C" unsigned long RGB2HSL93(unsigned long rgb);
extern "C" unsigned long RGB2HSV94(unsigned long rgb);
extern "C" unsigned long RGB2HSI95(unsigned long rgb);
extern "C" unsigned long RGB2HSN96(unsigned long rgb);
extern "C" unsigned long HSL2RGB97(unsigned long hsn);
extern "C" unsigned long HSV2RGB98(unsigned long hsn);
extern "C" unsigned long HSI2RGB99(unsigned long hsn);
extern "C" unsigned long HSN2RGB100(unsigned long hsn);
extern "C" void MixColor101(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3,double m);
extern "C" void MixColor102(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3);
extern "C" void SetFont103(pbitmap b);
extern "C" void SetFont104();
extern "C" void SetFontWidth105(unsigned long w);
extern "C" void SetFontHeight106(unsigned long h);
extern "C" void SetFontSize107(unsigned long w,unsigned long h);
extern "C" void SetFontWeight108(unsigned long wg);
extern "C" void SetFontLtalic109(unsigned long lt);
extern "C" void SetFontUnderLine110(unsigned long ud);
extern "C" void SetFontStrikeOut111(unsigned long sk);
extern "C" void SetFontCharSet112(unsigned long cs);
extern "C" void SetFontName113(const char* s);
extern "C" void GetStringSize114(const char* s);
extern "C" unsigned long GetStringWidth115(const char* s);
extern "C" unsigned long GetStringHeight116(const char* s);
extern "C" void DrawTextXY117(pbitmap b,const char* s,long x,long y,unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY118(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY119(pbitmap b,const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXY120(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY121(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXY122(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawText123(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawText124(const char* s,unsigned long cfg);
extern "C" void DrawText125(const char* s);
extern "C" void DrawTextlnXY126(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXY127(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextlnXY128(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextln129(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextln130(const char* s,unsigned long cfg);
extern "C" void DrawTextln131(const char* s);
extern "C" void DrawTextln132();
extern "C" void DrawTextXYw133(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw134(pbitmap b,const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXYw135(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw136(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXYw137(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextw138(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextw139(const char* s,unsigned long cfg);
extern "C" void DrawTextw140(const char* s);
extern "C" void DrawTextlnXYw141(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXYw142(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextlnXYw143(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextlnw144(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnw145(const char* s,unsigned long cfg);
extern "C" void DrawTextlnw146(const char* s);
extern "C" unsigned long GetPixel147(pbitmap b,unsigned long x,unsigned long y);
extern "C" unsigned long GetPixel148(unsigned long x,unsigned long y);
extern "C" void SetPixel149(pbitmap b,unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel150(unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel151(unsigned long x,unsigned long y);
extern "C" unsigned long GetBBPixel152(pbitbuf bb,unsigned long x,unsigned long y);
extern "C" void SetBBPixel153(pbitbuf bb,unsigned long x,unsigned long y,unsigned long c);
extern "C" void Line154(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Line155(long x,long y,long w,long h,unsigned long c);
extern "C" void Line156(long x,long y,long w,long h);
extern "C" void Bar157(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar158(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar159(long x,long y,long w,long h,unsigned long c);
extern "C" void Bar160(long x,long y,long w,long h);
extern "C" void Clear161(pbitmap b,unsigned long c);
extern "C" void Clear162(pbitmap b);
extern "C" void Clear163(unsigned long c);
extern "C" void Clear164();
extern "C" void Triangle165(pbitmap b,long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg);
extern "C" void Triangle166(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg);
extern "C" void Triangle167(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long c);
extern "C" void Triangle168(long x1,long y1,long x2,long y2,long x3,long y3);
extern "C" void Arc169(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc170(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc171(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Arc172(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Pie173(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie174(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie175(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Pie176(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Chord177(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord178(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord179(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Chord180(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Ellipse181(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse182(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse183(long x,long y,long rx,long ry,unsigned long c);
extern "C" void Ellipse184(long x,long y,long rx,long ry);
extern "C" void Circle185(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle186(long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle187(long x,long y,long r,unsigned long c);
extern "C" void Circle188(long x,long y,long r);
extern "C" pbitmap CreateBMP189(pbitmap b,unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP190(pbitmap b);
extern "C" pbitmap CreateBMP191(unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP192(unsigned long w,unsigned long h);
extern "C" pbitmap CreateBMP193();
extern "C" void ReleaseBMP194(pbitmap b);
extern "C" void ReleaseBMP195();
extern "C" pbitmap LoadBMP196(const char* s,unsigned long c);
extern "C" pbitmap LoadBMP197(const char* s);
extern "C" void SaveBMP198(pbitmap b,const char* s);
extern "C" void DrawBMP199(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP200(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP201(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP202(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP203(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP204(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP205(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP206(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP207(pbitmap bs,pbitmap bd,unsigned long c);
extern "C" void DrawBMP208(pbitmap bs,pbitmap bd);
extern "C" void DrawBMP209(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP210(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP211(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP212(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP213(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP214(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP215(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP216(pbitmap bs,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP217(pbitmap bs,unsigned long c);
extern "C" void DrawBMP218(pbitmap bs);
extern "C" void DrawBMP219(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP220(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP221(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP222(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP223(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP224(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP225(unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP226(unsigned long xd,unsigned long yd);
extern "C" void DrawBMP227(unsigned long c);
extern "C" void DrawBMP228();
extern "C" void MixBMP229(pbitmap b1,pbitmap b2,pbitmap b3);
extern "C" void BlurBMPBox230(pbitmap b,unsigned long d,unsigned long n);
extern "C" void BlurBMPBox231(pbitmap b,unsigned long d);
extern "C" void BlurBMPGau232(pbitmap b,double d);
extern "C" pbitbuf CreateBB233(pbitmap b);
extern "C" void ReleaseBB234(pbitbuf bb);
extern "C" void GetBB235(pbitbuf bb);
extern "C" void SetBB236(pbitbuf bb);
extern "C" void MixBB237(pbitbuf bb1,pbitbuf bb2,pbitbuf bb3);
extern "C" void BlurBBBox238(pbitbuf bb,unsigned long d,unsigned long n);
extern "C" void BlurBBGau239(pbitbuf bb,double d);
extern "C" void PressKey240(unsigned char k,unsigned long t);
extern "C" void PressKey241(unsigned char k);
extern "C" void DownKey242(unsigned char k);
extern "C" void UpKey243(unsigned char k);
extern "C" void PressMouse244(unsigned char m,unsigned long t);
extern "C" void PressMouse245(unsigned char m);
extern "C" void DownMouse246(unsigned char m);
extern "C" void UpMouse247(unsigned char m);
extern "C" void WheelMouse248(long wl);
extern "C" void MoveMouse249(long x,long y);
extern "C" void MoveMouseAbs250(long x,long y);
extern "C" void MoveMouseWin251(long x,long y);
extern "C" void MoveMousePos252(long x,long y);
extern "C" void SendMsg253();
extern "C" bool IsNextMsg254();
extern "C" unsigned long GetNextMsg255();
extern "C" unsigned long WaitNextMsg256();
extern "C" bool IsMsg257(unsigned long uM);
extern "C" long long GetMsg258(unsigned long uM);
extern "C" long long WaitMsg259(unsigned long uM);
extern "C" bool IsKey260(unsigned long k);
extern "C" bool IsKey261();
extern "C" unsigned long GetKey262();
extern "C" unsigned long WaitKey263(unsigned long k);
extern "C" unsigned long WaitKey264();
extern "C" bool IsMouse265(unsigned long m);
extern "C" bool IsMouse266();
extern "C" unsigned long GetMouse267();
extern "C" unsigned long WaitMouse268(unsigned long m);
extern "C" unsigned long WaitMouse269();
extern "C" bool IsMouseLeft270();
extern "C" void WaitMouseLeft271();
extern "C" bool IsMouseMiddle272();
extern "C" void WaitMouseMiddle273();
extern "C" bool IsMouseRight274();
extern "C" void WaitMouseRight275();
extern "C" bool IsMouseWheel276();
extern "C" long GetMouseWheel277();
extern "C" void WaitMouseWheel278();
extern "C" bool IsMouseMove279();
extern "C" unsigned long GetMouseMove280();
extern "C" unsigned long WaitMouseMove281();
extern "C" bool IsDropFile282();
extern "C" const char* GetDropFile283();
extern "C" const short int* GetDropFileW284();
extern "C" const char* WaitDropFile285();
extern "C" long GetMouseAbsX286();
extern "C" long GetMouseAbsY287();
extern "C" long GetMouseWinX288();
extern "C" long GetMouseWinY289();
extern "C" long GetMousePosX290();
extern "C" long GetMousePosY291();
extern "C" unsigned long LoadAudio292(const char* s);
extern "C" void PlayAudio293(unsigned long id,const char* s,bool b);
extern "C" void PlayAudio294(unsigned long id,const char* s);
extern "C" void PlayAudio295(unsigned long id,bool b);
extern "C" void PlayAudio296(unsigned long id);
extern "C" void StopAudio297(unsigned long id);
extern "C" void PauseAudio298(unsigned long id);
extern "C" void ResumeAudio299(unsigned long id);
extern "C" void ReleaseAudio300(unsigned long id);
extern "C" unsigned long GetAudioVol301(unsigned long id);
extern "C" void SetAudioVol302(unsigned long id,unsigned long v);
extern "C" unsigned long GetAudioPos303(unsigned long id);
extern "C" void SetAudioPos304(unsigned long id,unsigned long pos,bool b);
extern "C" void SetAudioPos305(unsigned long id,unsigned long pos);
extern "C" unsigned long GetAudioLen306(unsigned long id);
extern "C" bool IsFile307(const char* s);
extern "C" bool NewFile308(const char* s);
extern "C" bool NewDir309(const char* s);
extern "C" bool CopyFile310(const char* src,const char* des);
extern "C" bool MoveFile311(const char* src,const char* des);
extern "C" bool DeleteFile312(const char* s);
extern "C" void OpenFile313(const char* s);
extern "C" void CloseFile314();
extern "C" unsigned long GetFileLen315();
extern "C" unsigned long GetFilePos316();
extern "C" void SetFilePos317(unsigned long pos);
extern "C" unsigned char GetByte318();
extern "C" unsigned short GetWord319();
extern "C" unsigned long GetLongword320();
extern "C" unsigned long GetInteger321();
extern "C" const char* GetPchar322();
extern "C" const char* GetString323(unsigned long len);

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
unsigned long msgboxw(const short int* s,const short int* title,unsigned long i){return MsgBoxW22(s,title,i);}
unsigned long msgbox(const char* s,const char* title,unsigned long i){return MsgBox23(s,title,i);}
void msgboxw(const short int* s,const short int* title){MsgBoxW24(s,title);}
void msgbox(const char* s,const char* title){MsgBox25(s,title);}
void msgboxw(const short int* s){MsgBoxW26(s);}
void msgbox(const char* s){MsgBox27(s);}
void delay(unsigned long t){Delay28(t);}
void delay(){Delay29();}
void sound(unsigned long hz,unsigned long t){Sound30(hz,t);}
void sound(unsigned long hz,double t){Sound31(hz,t);}
void sound(unsigned long hz){Sound32(hz);}
void freshfps(){FreshFPS33();}
void addfps(){AddFPS34();}
unsigned long getfpsl(){return GetFPSL35();}
double getfpsr(){return GetFPSR36();}
unsigned long getfps(){return GetFPS37();}
unsigned long geterror(){return GetError38();}
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style){CreateWin39(w,h,cfg,cbg,style);}
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg){CreateWin40(w,h,cfg,cbg);}
void createwin(unsigned long w,unsigned long h,unsigned long c){CreateWin41(w,h,c);}
void createwin(unsigned long w,unsigned long h){CreateWin42(w,h);}
void createwin(unsigned long cbg){CreateWin43(cbg);}
void createwin(){CreateWin44();}
void freshwin(){FreshWin45();}
void closewin(){CloseWin46();}
bool iswin(){return IsWin47();}
void setdrawprocedure(void* th){SetDrawProcedure48(th);}
double gettimer(){return GetTimeR49();}
unsigned long gettime(){return GetTime50();}
void settitle(const char* s){SetTitle51(s);}
void settitlew(const short int* s){SetTitleW52(s);}
mystring gettitle(){return GetTitle53();}
const short int* gettitlew(){return GetTitleW54();}
void setsize(unsigned long w,unsigned long h){SetSize55(w,h);}
unsigned long getwidth(){return GetWidth56();}
unsigned long getheight(){return GetHeight57();}
unsigned long getsize(){return GetSize58();}
long getscrwidth(){return GetScrWidth59();}
long getscrheight(){return GetScrHeight60();}
unsigned long getscrsize(){return GetScrSize61();}
double getscrcapsx(){return GetScrCapsX62();}
double getscrcapsy(){return GetScrCapsY63();}
long getbordertitle(){return GetBorderTitle64();}
long getborderwidth(){return GetBorderWidth65();}
long getborderheight(){return GetBorderHeight66();}
unsigned long getbordersize(){return GetBorderSize67();}
void setpos(unsigned long x,unsigned long y){SetPos68(x,y);}
long getposx(){return GetPosX69();}
long getposy(){return GetPosY70();}
unsigned long getpos(){return GetPos71();}
pbitmap getwin(){return GetWin72();}
pbitmap getscr(){return GetScr73();}
unsigned long gethwnd(pbitmap b){return GetHwnd74(b);}
unsigned long gethwnd(){return GetHwnd75();}
unsigned long getdraw(pbitmap b){return GetDraw76(b);}
unsigned long getdraw(){return GetDraw77();}
unsigned long getbgcolor(){return GetBGColor78();}
void setbgcolor(unsigned long c){SetBGColor79(c);}
unsigned long getfgcolor(){return GetFGColor80();}
void setfgcolor(unsigned long c){SetFGColor81(c);}
void setpenwidth(unsigned long pew){SetPenWidth82(pew);}
void setpencolor(pbitmap b,unsigned long c){SetPenColor83(b,c);}
void setpencolor(unsigned long c){SetPenColor84(c);}
void setbrushcolor(pbitmap b,unsigned long c){SetBrushColor85(b,c);}
void setbrushcolor(unsigned long c){SetBrushColor86(c);}
unsigned char getalpha(unsigned long c){return GetAlpha87(c);}
unsigned char getblue(unsigned long c){return GetBlue88(c);}
unsigned char getgreen(unsigned long c){return GetGreen89(c);}
unsigned char getred(unsigned long c){return GetRed90(c);}
unsigned long getrgba(unsigned char r,unsigned char g,unsigned char b,unsigned char a){return GetRGBA91(r,g,b,a);}
unsigned long getrgb(unsigned char r,unsigned char g,unsigned char b){return GetRGB92(r,g,b);}
unsigned long rgb2hsl(unsigned long rgb){return RGB2HSL93(rgb);}
unsigned long rgb2hsv(unsigned long rgb){return RGB2HSV94(rgb);}
unsigned long rgb2hsi(unsigned long rgb){return RGB2HSI95(rgb);}
unsigned long rgb2hsn(unsigned long rgb){return RGB2HSN96(rgb);}
unsigned long hsl2rgb(unsigned long hsn){return HSL2RGB97(hsn);}
unsigned long hsv2rgb(unsigned long hsn){return HSV2RGB98(hsn);}
unsigned long hsi2rgb(unsigned long hsn){return HSI2RGB99(hsn);}
unsigned long hsn2rgb(unsigned long hsn){return HSN2RGB100(hsn);}
void mixcolor(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3,double m){MixColor101(rgb1,rgb2,rgb3,m);}
void mixcolor(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3){MixColor102(rgb1,rgb2,rgb3);}
void setfont(pbitmap b){SetFont103(b);}
void setfont(){SetFont104();}
void setfontwidth(unsigned long w){SetFontWidth105(w);}
void setfontheight(unsigned long h){SetFontHeight106(h);}
void setfontsize(unsigned long w,unsigned long h){SetFontSize107(w,h);}
void setfontweight(unsigned long wg){SetFontWeight108(wg);}
void setfontltalic(unsigned long lt){SetFontLtalic109(lt);}
void setfontunderline(unsigned long ud){SetFontUnderLine110(ud);}
void setfontstrikeout(unsigned long sk){SetFontStrikeOut111(sk);}
void setfontcharset(unsigned long cs){SetFontCharSet112(cs);}
void setfontname(const char* s){SetFontName113(s);}
void getstringsize(const char* s){GetStringSize114(s);}
unsigned long getstringwidth(const char* s){return GetStringWidth115(s);}
unsigned long getstringheight(const char* s){return GetStringHeight116(s);}
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg){DrawTextXY117(b,s,x,y,w,h,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXY118(b,s,x,y,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long cfg){DrawTextXY119(b,s,x,y,cfg);}
void drawtextxy(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXY120(s,x,y,cfg,cbg);}
void drawtextxy(const char* s,long x,long y,unsigned long cfg){DrawTextXY121(s,x,y,cfg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y){DrawTextXY122(s,x,y);}
void drawtext(const char* s,unsigned long cfg,unsigned long cbg){DrawText123(s,cfg,cbg);}
void drawtext(const char* s,unsigned long cfg){DrawText124(s,cfg);}
void drawtext(const char* s){DrawText125(s);}
void drawtextlnxy(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextlnXY126(s,x,y,cfg,cbg);}
void drawtextlnxy(const char* s,long x,long y,unsigned long cfg){DrawTextlnXY127(s,x,y,cfg);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y){DrawTextlnXY128(s,x,y);}
void drawtextln(const char* s,unsigned long cfg,unsigned long cbg){DrawTextln129(s,cfg,cbg);}
void drawtextln(const char* s,unsigned long cfg){DrawTextln130(s,cfg);}
void drawtextln(const char* s){DrawTextln131(s);}
void drawtextln(){DrawTextln132();}
void drawtextxyw(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXYw133(b,s,x,y,cfg,cbg);}
void drawtextxyw(pbitmap b,const char* s,long x,long y,unsigned long cfg){DrawTextXYw134(b,s,x,y,cfg);}
void drawtextxyw(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXYw135(s,x,y,cfg,cbg);}
void drawtextxyw(const char* s,long x,long y,unsigned long cfg){DrawTextXYw136(s,x,y,cfg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y){DrawTextXYw137(s,x,y);}
void drawtextw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextw138(s,cfg,cbg);}
void drawtextw(const char* s,unsigned long cfg){DrawTextw139(s,cfg);}
void drawtextw(const char* s){DrawTextw140(s);}
void drawtextlnxyw(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextlnXYw141(s,x,y,cfg,cbg);}
void drawtextlnxyw(const char* s,long x,long y,unsigned long cfg){DrawTextlnXYw142(s,x,y,cfg);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y){DrawTextlnXYw143(s,x,y);}
void drawtextlnw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextlnw144(s,cfg,cbg);}
void drawtextlnw(const char* s,unsigned long cfg){DrawTextlnw145(s,cfg);}
void drawtextlnw(const char* s){DrawTextlnw146(s);}
unsigned long getpixel(pbitmap b,unsigned long x,unsigned long y){return GetPixel147(b,x,y);}
unsigned long getpixel(unsigned long x,unsigned long y){return GetPixel148(x,y);}
void setpixel(pbitmap b,unsigned long x,unsigned long y,unsigned long c){SetPixel149(b,x,y,c);}
void setpixel(unsigned long x,unsigned long y,unsigned long c){SetPixel150(x,y,c);}
void setpixel(unsigned long x,unsigned long y){SetPixel151(x,y);}
unsigned long getbbpixel(pbitbuf bb,unsigned long x,unsigned long y){return GetBBPixel152(bb,x,y);}
void setbbpixel(pbitbuf bb,unsigned long x,unsigned long y,unsigned long c){SetBBPixel153(bb,x,y,c);}
void line(pbitmap b,long x,long y,long w,long h,unsigned long c){Line154(b,x,y,w,h,c);}
void line(long x,long y,long w,long h,unsigned long c){Line155(x,y,w,h,c);}
void line(long x,long y,long w,long h){Line156(x,y,w,h);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar157(b,x,y,w,h,cfg,cbg);}
void bar(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar158(x,y,w,h,cfg,cbg);}
void bar(long x,long y,long w,long h,unsigned long c){Bar159(x,y,w,h,c);}
void bar(long x,long y,long w,long h){Bar160(x,y,w,h);}
void clear(pbitmap b,unsigned long c){Clear161(b,c);}
void clear(pbitmap b){Clear162(b);}
void clear(unsigned long c){Clear163(c);}
void clear(){Clear164();}
void triangle(pbitmap b,long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg){Triangle165(b,x1,y1,x2,y2,x3,y3,cfg,cbg);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg){Triangle166(x1,y1,x2,y2,x3,y3,cfg,cbg);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long c){Triangle167(x1,y1,x2,y2,x3,y3,c);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3){Triangle168(x1,y1,x2,y2,x3,y3);}
void arc(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc169(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc170(x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Arc171(x,y,rx,ry,sa,ea,c);}
void arc(long x,long y,long rx,long ry,double sa,double ea){Arc172(x,y,rx,ry,sa,ea);}
void pie(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie173(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie174(x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Pie175(x,y,rx,ry,sa,ea,c);}
void pie(long x,long y,long rx,long ry,double sa,double ea){Pie176(x,y,rx,ry,sa,ea);}
void chord(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord177(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord178(x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Chord179(x,y,rx,ry,sa,ea,c);}
void chord(long x,long y,long rx,long ry,double sa,double ea){Chord180(x,y,rx,ry,sa,ea);}
void ellipse(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse181(b,x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse182(x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long c){Ellipse183(x,y,rx,ry,c);}
void ellipse(long x,long y,long rx,long ry){Ellipse184(x,y,rx,ry);}
void circle(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle185(b,x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle186(x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long c){Circle187(x,y,r,c);}
void circle(long x,long y,long r){Circle188(x,y,r);}
pbitmap createbmp(pbitmap b,unsigned long w,unsigned long h,unsigned long c){return CreateBMP189(b,w,h,c);}
pbitmap createbmp(pbitmap b){return CreateBMP190(b);}
pbitmap createbmp(unsigned long w,unsigned long h,unsigned long c){return CreateBMP191(w,h,c);}
pbitmap createbmp(unsigned long w,unsigned long h){return CreateBMP192(w,h);}
pbitmap createbmp(){return CreateBMP193();}
void releasebmp(pbitmap b){ReleaseBMP194(b);}
void releasebmp(){ReleaseBMP195();}
pbitmap loadbmp(const char* s,unsigned long c){return LoadBMP196(s,c);}
pbitmap loadbmp(const char* s){return LoadBMP197(s);}
void savebmp(pbitmap b,const char* s){SaveBMP198(b,s);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP199(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP200(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP201(bs,bd,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP202(bs,bd,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP203(bs,bd,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP204(bs,bd,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP205(bs,bd,xd,yd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd){DrawBMP206(bs,bd,xd,yd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long c){DrawBMP207(bs,bd,c);}
void drawbmp(pbitmap bs,pbitmap bd){DrawBMP208(bs,bd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP209(bs,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP210(bs,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP211(bs,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP212(bs,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP213(bs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP214(bs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP215(bs,xd,yd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd){DrawBMP216(bs,xd,yd);}
void drawbmp(pbitmap bs,unsigned long c){DrawBMP217(bs,c);}
void drawbmp(pbitmap bs){DrawBMP218(bs);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP219(xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP220(xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP221(xs,ys,xd,yd,w,h,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP222(xs,ys,xd,yd,w,h);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP223(xd,yd,wd,hd,c);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP224(xd,yd,wd,hd);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long c){DrawBMP225(xd,yd,c);}
void drawbmp(unsigned long xd,unsigned long yd){DrawBMP226(xd,yd);}
void drawbmp(unsigned long c){DrawBMP227(c);}
void drawbmp(){DrawBMP228();}
void mixbmp(pbitmap b1,pbitmap b2,pbitmap b3){MixBMP229(b1,b2,b3);}
void blurbmpbox(pbitmap b,unsigned long d,unsigned long n){BlurBMPBox230(b,d,n);}
void blurbmpbox(pbitmap b,unsigned long d){BlurBMPBox231(b,d);}
void blurbmpgau(pbitmap b,double d){BlurBMPGau232(b,d);}
pbitbuf createbb(pbitmap b){return CreateBB233(b);}
void releasebb(pbitbuf bb){ReleaseBB234(bb);}
void getbb(pbitbuf bb){GetBB235(bb);}
void setbb(pbitbuf bb){SetBB236(bb);}
void mixbb(pbitbuf bb1,pbitbuf bb2,pbitbuf bb3){MixBB237(bb1,bb2,bb3);}
void blurbbbox(pbitbuf bb,unsigned long d,unsigned long n){BlurBBBox238(bb,d,n);}
void blurbbgau(pbitbuf bb,double d){BlurBBGau239(bb,d);}
void presskey(unsigned char k,unsigned long t){PressKey240(k,t);}
void presskey(unsigned char k){PressKey241(k);}
void downkey(unsigned char k){DownKey242(k);}
void upkey(unsigned char k){UpKey243(k);}
void pressmouse(unsigned char m,unsigned long t){PressMouse244(m,t);}
void pressmouse(unsigned char m){PressMouse245(m);}
void downmouse(unsigned char m){DownMouse246(m);}
void upmouse(unsigned char m){UpMouse247(m);}
void wheelmouse(long wl){WheelMouse248(wl);}
void movemouse(long x,long y){MoveMouse249(x,y);}
void movemouseabs(long x,long y){MoveMouseAbs250(x,y);}
void movemousewin(long x,long y){MoveMouseWin251(x,y);}
void movemousepos(long x,long y){MoveMousePos252(x,y);}
void sendmsg(){SendMsg253();}
bool isnextmsg(){return IsNextMsg254();}
unsigned long getnextmsg(){return GetNextMsg255();}
unsigned long waitnextmsg(){return WaitNextMsg256();}
bool ismsg(unsigned long uM){return IsMsg257(uM);}
long long getmsg(unsigned long uM){return GetMsg258(uM);}
long long waitmsg(unsigned long uM){return WaitMsg259(uM);}
bool iskey(unsigned long k){return IsKey260(k);}
bool iskey(){return IsKey261();}
unsigned long getkey(){return GetKey262();}
unsigned long waitkey(unsigned long k){return WaitKey263(k);}
unsigned long waitkey(){return WaitKey264();}
bool ismouse(unsigned long m){return IsMouse265(m);}
bool ismouse(){return IsMouse266();}
unsigned long getmouse(){return GetMouse267();}
unsigned long waitmouse(unsigned long m){return WaitMouse268(m);}
unsigned long waitmouse(){return WaitMouse269();}
bool ismouseleft(){return IsMouseLeft270();}
void waitmouseleft(){WaitMouseLeft271();}
bool ismousemiddle(){return IsMouseMiddle272();}
void waitmousemiddle(){WaitMouseMiddle273();}
bool ismouseright(){return IsMouseRight274();}
void waitmouseright(){WaitMouseRight275();}
bool ismousewheel(){return IsMouseWheel276();}
long getmousewheel(){return GetMouseWheel277();}
void waitmousewheel(){WaitMouseWheel278();}
bool ismousemove(){return IsMouseMove279();}
unsigned long getmousemove(){return GetMouseMove280();}
unsigned long waitmousemove(){return WaitMouseMove281();}
bool isdropfile(){return IsDropFile282();}
mystring getdropfile(){return GetDropFile283();}
const short int* getdropfilew(){return GetDropFileW284();}
mystring waitdropfile(){return WaitDropFile285();}
long getmouseabsx(){return GetMouseAbsX286();}
long getmouseabsy(){return GetMouseAbsY287();}
long getmousewinx(){return GetMouseWinX288();}
long getmousewiny(){return GetMouseWinY289();}
long getmouseposx(){return GetMousePosX290();}
long getmouseposy(){return GetMousePosY291();}
unsigned long loadaudio(const char* s){return LoadAudio292(s);}
void playaudio(unsigned long id,const char* s,bool b){PlayAudio293(id,s,b);}
void playaudio(unsigned long id,const char* s){PlayAudio294(id,s);}
void playaudio(unsigned long id,bool b){PlayAudio295(id,b);}
void playaudio(unsigned long id){PlayAudio296(id);}
void stopaudio(unsigned long id){StopAudio297(id);}
void pauseaudio(unsigned long id){PauseAudio298(id);}
void resumeaudio(unsigned long id){ResumeAudio299(id);}
void releaseaudio(unsigned long id){ReleaseAudio300(id);}
unsigned long getaudiovol(unsigned long id){return GetAudioVol301(id);}
void setaudiovol(unsigned long id,unsigned long v){SetAudioVol302(id,v);}
unsigned long getaudiopos(unsigned long id){return GetAudioPos303(id);}
void setaudiopos(unsigned long id,unsigned long pos,bool b){SetAudioPos304(id,pos,b);}
void setaudiopos(unsigned long id,unsigned long pos){SetAudioPos305(id,pos);}
unsigned long getaudiolen(unsigned long id){return GetAudioLen306(id);}
bool isfile(const char* s){return IsFile307(s);}
bool newfile(const char* s){return NewFile308(s);}
bool newdir(const char* s){return NewDir309(s);}
bool copyfile(const char* src,const char* des){return CopyFile310(src,des);}
bool movefile(const char* src,const char* des){return MoveFile311(src,des);}
bool deletefile(const char* s){return DeleteFile312(s);}
void openfile(const char* s){OpenFile313(s);}
void closefile(){CloseFile314();}
unsigned long getfilelen(){return GetFileLen315();}
unsigned long getfilepos(){return GetFilePos316();}
void setfilepos(unsigned long pos){SetFilePos317(pos);}
unsigned char getbyte(){return GetByte318();}
unsigned short getword(){return GetWord319();}
unsigned long getlongword(){return GetLongword320();}
unsigned long getinteger(){return GetInteger321();}
const char* getpchar(){return GetPchar322();}
mystring getstring(unsigned long len){return GetString323(len);}
