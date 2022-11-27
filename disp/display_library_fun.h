
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
extern "C" void CreateWin39(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style,const char* winclass);
extern "C" void CreateWin40(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style);
extern "C" void CreateWin41(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg);
extern "C" void CreateWin42(unsigned long w,unsigned long h,unsigned long c);
extern "C" void CreateWin43(unsigned long w,unsigned long h);
extern "C" void CreateWin44(unsigned long cbg);
extern "C" void CreateWin45();
extern "C" void FreshWin46();
extern "C" void CloseWin47();
extern "C" bool IsWin48();
extern "C" void SetDrawProcedure49(void* th);
extern "C" double GetTimeR50();
extern "C" unsigned long GetTime51();
extern "C" void SetTitle52(const char* s);
extern "C" void SetTitleW53(const short int* s);
extern "C" const char* GetTitle54();
extern "C" const short int* GetTitleW55();
extern "C" void SetSize56(unsigned long w,unsigned long h);
extern "C" unsigned long GetWidth57();
extern "C" unsigned long GetHeight58();
extern "C" unsigned long GetSize59();
extern "C" long GetScrWidth60();
extern "C" long GetScrHeight61();
extern "C" unsigned long GetScrSize62();
extern "C" double GetScrCapsX63();
extern "C" double GetScrCapsY64();
extern "C" long GetBorderTitle65();
extern "C" long GetBorderWidth66();
extern "C" long GetBorderHeight67();
extern "C" unsigned long GetBorderSize68();
extern "C" void SetPos69(unsigned long x,unsigned long y);
extern "C" long GetPosX70();
extern "C" long GetPosY71();
extern "C" unsigned long GetPos72();
extern "C" pbitmap GetWin73();
extern "C" pbitmap GetScr74();
extern "C" unsigned long GetHwnd75(pbitmap b);
extern "C" unsigned long GetHwnd76();
extern "C" unsigned long GetDraw77(pbitmap b);
extern "C" unsigned long GetDraw78();
extern "C" unsigned long GetBGColor79();
extern "C" void SetBGColor80(unsigned long c);
extern "C" unsigned long GetFGColor81();
extern "C" void SetFGColor82(unsigned long c);
extern "C" void SetPenWidth83(unsigned long pew);
extern "C" void SetPenColor84(pbitmap b,unsigned long c);
extern "C" void SetPenColor85(unsigned long c);
extern "C" void SetBrushColor86(pbitmap b,unsigned long c);
extern "C" void SetBrushColor87(unsigned long c);
extern "C" unsigned char GetAlpha88(unsigned long c);
extern "C" unsigned char GetBlue89(unsigned long c);
extern "C" unsigned char GetGreen90(unsigned long c);
extern "C" unsigned char GetRed91(unsigned long c);
extern "C" unsigned long GetRGBA92(unsigned char r,unsigned char g,unsigned char b,unsigned char a);
extern "C" unsigned long GetRGB93(unsigned char r,unsigned char g,unsigned char b);
extern "C" unsigned long RGB2HSL94(unsigned long rgb);
extern "C" unsigned long RGB2HSV95(unsigned long rgb);
extern "C" unsigned long RGB2HSI96(unsigned long rgb);
extern "C" unsigned long RGB2HSN97(unsigned long rgb);
extern "C" unsigned long HSL2RGB98(unsigned long hsn);
extern "C" unsigned long HSV2RGB99(unsigned long hsn);
extern "C" unsigned long HSI2RGB100(unsigned long hsn);
extern "C" unsigned long HSN2RGB101(unsigned long hsn);
extern "C" void MixColor102(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3,double m);
extern "C" void MixColor103(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3);
extern "C" void SetFont104(pbitmap b);
extern "C" void SetFont105();
extern "C" void SetFontWidth106(unsigned long w);
extern "C" void SetFontHeight107(unsigned long h);
extern "C" void SetFontSize108(unsigned long w,unsigned long h);
extern "C" void SetFontWeight109(unsigned long wg);
extern "C" void SetFontLtalic110(unsigned long lt);
extern "C" void SetFontUnderLine111(unsigned long ud);
extern "C" void SetFontStrikeOut112(unsigned long sk);
extern "C" void SetFontCharSet113(unsigned long cs);
extern "C" void SetFontName114(const char* s);
extern "C" void GetStringSize115(const char* s);
extern "C" unsigned long GetStringWidth116(const char* s);
extern "C" unsigned long GetStringHeight117(const char* s);
extern "C" void DrawTextXY118(pbitmap b,const short int* s,long x,long y,unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY119(pbitmap b,const char* s,long x,long y,unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY120(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY121(pbitmap b,const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXY122(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY123(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXY124(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawText125(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawText126(const char* s,unsigned long cfg);
extern "C" void DrawText127(const char* s);
extern "C" void DrawTextlnXY128(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXY129(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextlnXY130(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextln131(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextln132(const char* s,unsigned long cfg);
extern "C" void DrawTextln133(const char* s);
extern "C" void DrawTextln134();
extern "C" void DrawTextXYw135(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw136(pbitmap b,const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXYw137(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw138(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXYw139(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextw140(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextw141(const char* s,unsigned long cfg);
extern "C" void DrawTextw142(const char* s);
extern "C" void DrawTextlnXYw143(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXYw144(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextlnXYw145(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextlnw146(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnw147(const char* s,unsigned long cfg);
extern "C" void DrawTextlnw148(const char* s);
extern "C" unsigned long GetPixel149(pbitmap b,unsigned long x,unsigned long y);
extern "C" unsigned long GetPixel150(unsigned long x,unsigned long y);
extern "C" void SetPixel151(pbitmap b,unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel152(unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel153(unsigned long x,unsigned long y);
extern "C" unsigned long GetBBPixel154(pbitbuf bb,unsigned long x,unsigned long y);
extern "C" void SetBBPixel155(pbitbuf bb,unsigned long x,unsigned long y,unsigned long c);
extern "C" void Line156(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Line157(long x,long y,long w,long h,unsigned long c);
extern "C" void Line158(long x,long y,long w,long h);
extern "C" void LineBB159(pbitbuf bb,long x,long y,long w,long h,unsigned long c);
extern "C" void Bar160(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar161(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Bar162(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar163(long x,long y,long w,long h,unsigned long c);
extern "C" void Bar164(long x,long y,long w,long h);
extern "C" void Clear165(pbitmap b,unsigned long c);
extern "C" void Clear166(pbitmap b);
extern "C" void Clear167(unsigned long c);
extern "C" void Clear168();
extern "C" void Triangle169(pbitmap b,long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg);
extern "C" void Triangle170(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg);
extern "C" void Triangle171(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long c);
extern "C" void Triangle172(long x1,long y1,long x2,long y2,long x3,long y3);
extern "C" void Arc173(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc174(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc175(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Arc176(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Pie177(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie178(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie179(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Pie180(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Chord181(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord182(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord183(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Chord184(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Ellipse185(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse186(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse187(long x,long y,long rx,long ry,unsigned long c);
extern "C" void Ellipse188(long x,long y,long rx,long ry);
extern "C" void Circle189(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle190(long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle191(long x,long y,long r,unsigned long c);
extern "C" void Circle192(long x,long y,long r);
extern "C" pbitmap CreateBMP193(pbitmap b,unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP194(pbitmap b);
extern "C" pbitmap CreateBMP195(unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP196(unsigned long w,unsigned long h);
extern "C" pbitmap CreateBMP197();
extern "C" void ReleaseBMP198(pbitmap b);
extern "C" void ReleaseBMP199();
extern "C" pbitmap LoadBMP200(const char* s,unsigned long c);
extern "C" pbitmap LoadBMP201(const char* s);
extern "C" void SaveBMP202(pbitmap b,const char* s);
extern "C" void DrawBMP203(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP204(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP205(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP206(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP207(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP208(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP209(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP210(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP211(pbitmap bs,pbitmap bd,unsigned long c);
extern "C" void DrawBMP212(pbitmap bs,pbitmap bd);
extern "C" void DrawBMP213(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP214(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP215(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP216(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP217(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP218(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP219(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP220(pbitmap bs,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP221(pbitmap bs,unsigned long c);
extern "C" void DrawBMP222(pbitmap bs);
extern "C" void DrawBMP223(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP224(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP225(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP226(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP227(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP228(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP229(unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP230(unsigned long xd,unsigned long yd);
extern "C" void DrawBMP231(unsigned long c);
extern "C" void DrawBMP232();
extern "C" void MixBMP233(pbitmap b1,pbitmap b2,pbitmap b3);
extern "C" void BlurBMPBox234(pbitmap b,unsigned long d,unsigned long n);
extern "C" void BlurBMPBox235(pbitmap b,unsigned long d);
extern "C" void BlurBMPGau236(pbitmap b,double d);
extern "C" pbitbuf CreateBB237(pbitmap b);
extern "C" void ReleaseBB238(pbitbuf bb);
extern "C" void GetBB239(pbitbuf bb);
extern "C" void SetBB240(pbitbuf bb);
extern "C" void MixBB241(pbitbuf bb1,pbitbuf bb2,pbitbuf bb3);
extern "C" void BlurBBBox242(pbitbuf bb,unsigned long d,unsigned long n);
extern "C" void BlurBBGau243(pbitbuf bb,double d);
extern "C" void PressKey244(unsigned char k,unsigned long t);
extern "C" void PressKey245(unsigned char k);
extern "C" void DownKey246(unsigned char k);
extern "C" void UpKey247(unsigned char k);
extern "C" void PressMouse248(unsigned char m,unsigned long t);
extern "C" void PressMouse249(unsigned char m);
extern "C" void DownMouse250(unsigned char m);
extern "C" void UpMouse251(unsigned char m);
extern "C" void WheelMouse252(long wl);
extern "C" void MoveMouse253(long x,long y);
extern "C" void MoveMouseAbs254(long x,long y);
extern "C" void MoveMouseWin255(long x,long y);
extern "C" void MoveMousePos256(long x,long y);
extern "C" void SendMsg257();
extern "C" bool IsNextMsg258();
extern "C" unsigned long GetNextMsg259();
extern "C" unsigned long WaitNextMsg260();
extern "C" bool IsMsg261(unsigned long uM);
extern "C" long long GetMsg262(unsigned long uM);
extern "C" long long WaitMsg263(unsigned long uM);
extern "C" bool IsKey264(unsigned long k);
extern "C" bool IsKey265();
extern "C" unsigned long GetKey266();
extern "C" unsigned long WaitKey267(unsigned long k);
extern "C" unsigned long WaitKey268();
extern "C" bool IsMouse269(unsigned long m);
extern "C" bool IsMouse270();
extern "C" unsigned long GetMouse271();
extern "C" unsigned long WaitMouse272(unsigned long m);
extern "C" unsigned long WaitMouse273();
extern "C" bool IsMouseLeft274();
extern "C" void WaitMouseLeft275();
extern "C" bool IsMouseMiddle276();
extern "C" void WaitMouseMiddle277();
extern "C" bool IsMouseRight278();
extern "C" void WaitMouseRight279();
extern "C" bool IsMouseWheel280();
extern "C" long GetMouseWheel281();
extern "C" void WaitMouseWheel282();
extern "C" bool IsMouseMove283();
extern "C" unsigned long GetMouseMove284();
extern "C" unsigned long WaitMouseMove285();
extern "C" bool IsDropFile286();
extern "C" const char* GetDropFile287();
extern "C" const short int* GetDropFileW288();
extern "C" const char* WaitDropFile289();
extern "C" long GetMouseAbsX290();
extern "C" long GetMouseAbsY291();
extern "C" long GetMouseWinX292();
extern "C" long GetMouseWinY293();
extern "C" long GetMousePosX294();
extern "C" long GetMousePosY295();
extern "C" unsigned long LoadAudio296(const char* s1,const char* s2);
extern "C" unsigned long LoadAudio297(const char* s);
extern "C" void PlayAudio298(unsigned long id,const char* s,bool b);
extern "C" void PlayAudio299(unsigned long id,const char* s);
extern "C" void PlayAudio300(unsigned long id,bool b);
extern "C" void PlayAudio301(unsigned long id);
extern "C" void StopAudio302(unsigned long id);
extern "C" void PauseAudio303(unsigned long id);
extern "C" void ResumeAudio304(unsigned long id);
extern "C" void ReleaseAudio305(unsigned long id);
extern "C" unsigned long GetAudioVol306(unsigned long id);
extern "C" void SetAudioVol307(unsigned long id,unsigned long v);
extern "C" unsigned long GetAudioPos308(unsigned long id);
extern "C" void SetAudioPos309(unsigned long id,unsigned long pos,bool b);
extern "C" void SetAudioPos310(unsigned long id,unsigned long pos);
extern "C" unsigned long GetAudioLen311(unsigned long id);
extern "C" bool IsFile312(const char* s);
extern "C" bool IsFileW313(const short int* s);
extern "C" bool NewFile314(const char* s);
extern "C" bool NewDir315(const char* s);
extern "C" bool CopyFile316(const char* src,const char* des);
extern "C" bool MoveFile317(const char* src,const char* des);
extern "C" bool DeleteFile318(const char* s);
extern "C" const char* GetFileName319(const char* s);
extern "C" const short int* GetFileNameW320(const short int* s);
extern "C" const char* GetFileDir321(const char* s);
extern "C" const short int* GetFileDirW322(const short int* s);
extern "C" void OpenFile323(const char* s);
extern "C" void OpenFileW324(const short int* s);
extern "C" void CloseFile325();
extern "C" unsigned long GetFileLen326();
extern "C" unsigned long GetFilePos327();
extern "C" void SetFilePos328(unsigned long pos);
extern "C" unsigned char GetByte329();
extern "C" unsigned short GetWord330();
extern "C" unsigned long GetLongword331();
extern "C" unsigned long GetInteger332();
extern "C" const char* GetPchar333();
extern "C" const char* GetString334(unsigned long len);
extern "C" const char* GetPara335();
extern "C" const char* GetPara336(unsigned long n);
extern "C" const short int* GetParaW337();
extern "C" const short int* GetParaW338(unsigned long n);

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
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style,const char* winclass){CreateWin39(w,h,cfg,cbg,style,winclass);}
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style){CreateWin40(w,h,cfg,cbg,style);}
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg){CreateWin41(w,h,cfg,cbg);}
void createwin(unsigned long w,unsigned long h,unsigned long c){CreateWin42(w,h,c);}
void createwin(unsigned long w,unsigned long h){CreateWin43(w,h);}
void createwin(unsigned long cbg){CreateWin44(cbg);}
void createwin(){CreateWin45();}
void freshwin(){FreshWin46();}
void closewin(){CloseWin47();}
bool iswin(){return IsWin48();}
void setdrawprocedure(void* th){SetDrawProcedure49(th);}
double gettimer(){return GetTimeR50();}
unsigned long gettime(){return GetTime51();}
void settitle(const char* s){SetTitle52(s);}
void settitlew(const short int* s){SetTitleW53(s);}
mystring gettitle(){return GetTitle54();}
const short int* gettitlew(){return GetTitleW55();}
void setsize(unsigned long w,unsigned long h){SetSize56(w,h);}
unsigned long getwidth(){return GetWidth57();}
unsigned long getheight(){return GetHeight58();}
unsigned long getsize(){return GetSize59();}
long getscrwidth(){return GetScrWidth60();}
long getscrheight(){return GetScrHeight61();}
unsigned long getscrsize(){return GetScrSize62();}
double getscrcapsx(){return GetScrCapsX63();}
double getscrcapsy(){return GetScrCapsY64();}
long getbordertitle(){return GetBorderTitle65();}
long getborderwidth(){return GetBorderWidth66();}
long getborderheight(){return GetBorderHeight67();}
unsigned long getbordersize(){return GetBorderSize68();}
void setpos(unsigned long x,unsigned long y){SetPos69(x,y);}
long getposx(){return GetPosX70();}
long getposy(){return GetPosY71();}
unsigned long getpos(){return GetPos72();}
pbitmap getwin(){return GetWin73();}
pbitmap getscr(){return GetScr74();}
unsigned long gethwnd(pbitmap b){return GetHwnd75(b);}
unsigned long gethwnd(){return GetHwnd76();}
unsigned long getdraw(pbitmap b){return GetDraw77(b);}
unsigned long getdraw(){return GetDraw78();}
unsigned long getbgcolor(){return GetBGColor79();}
void setbgcolor(unsigned long c){SetBGColor80(c);}
unsigned long getfgcolor(){return GetFGColor81();}
void setfgcolor(unsigned long c){SetFGColor82(c);}
void setpenwidth(unsigned long pew){SetPenWidth83(pew);}
void setpencolor(pbitmap b,unsigned long c){SetPenColor84(b,c);}
void setpencolor(unsigned long c){SetPenColor85(c);}
void setbrushcolor(pbitmap b,unsigned long c){SetBrushColor86(b,c);}
void setbrushcolor(unsigned long c){SetBrushColor87(c);}
unsigned char getalpha(unsigned long c){return GetAlpha88(c);}
unsigned char getblue(unsigned long c){return GetBlue89(c);}
unsigned char getgreen(unsigned long c){return GetGreen90(c);}
unsigned char getred(unsigned long c){return GetRed91(c);}
unsigned long getrgba(unsigned char r,unsigned char g,unsigned char b,unsigned char a){return GetRGBA92(r,g,b,a);}
unsigned long getrgb(unsigned char r,unsigned char g,unsigned char b){return GetRGB93(r,g,b);}
unsigned long rgb2hsl(unsigned long rgb){return RGB2HSL94(rgb);}
unsigned long rgb2hsv(unsigned long rgb){return RGB2HSV95(rgb);}
unsigned long rgb2hsi(unsigned long rgb){return RGB2HSI96(rgb);}
unsigned long rgb2hsn(unsigned long rgb){return RGB2HSN97(rgb);}
unsigned long hsl2rgb(unsigned long hsn){return HSL2RGB98(hsn);}
unsigned long hsv2rgb(unsigned long hsn){return HSV2RGB99(hsn);}
unsigned long hsi2rgb(unsigned long hsn){return HSI2RGB100(hsn);}
unsigned long hsn2rgb(unsigned long hsn){return HSN2RGB101(hsn);}
void mixcolor(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3,double m){MixColor102(rgb1,rgb2,rgb3,m);}
void mixcolor(unsigned long rgb1,unsigned long rgb2,unsigned long rgb3){MixColor103(rgb1,rgb2,rgb3);}
void setfont(pbitmap b){SetFont104(b);}
void setfont(){SetFont105();}
void setfontwidth(unsigned long w){SetFontWidth106(w);}
void setfontheight(unsigned long h){SetFontHeight107(h);}
void setfontsize(unsigned long w,unsigned long h){SetFontSize108(w,h);}
void setfontweight(unsigned long wg){SetFontWeight109(wg);}
void setfontltalic(unsigned long lt){SetFontLtalic110(lt);}
void setfontunderline(unsigned long ud){SetFontUnderLine111(ud);}
void setfontstrikeout(unsigned long sk){SetFontStrikeOut112(sk);}
void setfontcharset(unsigned long cs){SetFontCharSet113(cs);}
void setfontname(const char* s){SetFontName114(s);}
void getstringsize(const char* s){GetStringSize115(s);}
unsigned long getstringwidth(const char* s){return GetStringWidth116(s);}
unsigned long getstringheight(const char* s){return GetStringHeight117(s);}
void drawtextxy(pbitmap b,const short int* s,long x,long y,unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg){DrawTextXY118(b,s,x,y,w,h,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg){DrawTextXY119(b,s,x,y,w,h,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXY120(b,s,x,y,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long cfg){DrawTextXY121(b,s,x,y,cfg);}
void drawtextxy(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXY122(s,x,y,cfg,cbg);}
void drawtextxy(const char* s,long x,long y,unsigned long cfg){DrawTextXY123(s,x,y,cfg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y){DrawTextXY124(s,x,y);}
void drawtext(const char* s,unsigned long cfg,unsigned long cbg){DrawText125(s,cfg,cbg);}
void drawtext(const char* s,unsigned long cfg){DrawText126(s,cfg);}
void drawtext(const char* s){DrawText127(s);}
void drawtextlnxy(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextlnXY128(s,x,y,cfg,cbg);}
void drawtextlnxy(const char* s,long x,long y,unsigned long cfg){DrawTextlnXY129(s,x,y,cfg);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y){DrawTextlnXY130(s,x,y);}
void drawtextln(const char* s,unsigned long cfg,unsigned long cbg){DrawTextln131(s,cfg,cbg);}
void drawtextln(const char* s,unsigned long cfg){DrawTextln132(s,cfg);}
void drawtextln(const char* s){DrawTextln133(s);}
void drawtextln(){DrawTextln134();}
void drawtextxyw(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXYw135(b,s,x,y,cfg,cbg);}
void drawtextxyw(pbitmap b,const char* s,long x,long y,unsigned long cfg){DrawTextXYw136(b,s,x,y,cfg);}
void drawtextxyw(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXYw137(s,x,y,cfg,cbg);}
void drawtextxyw(const char* s,long x,long y,unsigned long cfg){DrawTextXYw138(s,x,y,cfg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y){DrawTextXYw139(s,x,y);}
void drawtextw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextw140(s,cfg,cbg);}
void drawtextw(const char* s,unsigned long cfg){DrawTextw141(s,cfg);}
void drawtextw(const char* s){DrawTextw142(s);}
void drawtextlnxyw(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextlnXYw143(s,x,y,cfg,cbg);}
void drawtextlnxyw(const char* s,long x,long y,unsigned long cfg){DrawTextlnXYw144(s,x,y,cfg);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y){DrawTextlnXYw145(s,x,y);}
void drawtextlnw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextlnw146(s,cfg,cbg);}
void drawtextlnw(const char* s,unsigned long cfg){DrawTextlnw147(s,cfg);}
void drawtextlnw(const char* s){DrawTextlnw148(s);}
unsigned long getpixel(pbitmap b,unsigned long x,unsigned long y){return GetPixel149(b,x,y);}
unsigned long getpixel(unsigned long x,unsigned long y){return GetPixel150(x,y);}
void setpixel(pbitmap b,unsigned long x,unsigned long y,unsigned long c){SetPixel151(b,x,y,c);}
void setpixel(unsigned long x,unsigned long y,unsigned long c){SetPixel152(x,y,c);}
void setpixel(unsigned long x,unsigned long y){SetPixel153(x,y);}
unsigned long getbbpixel(pbitbuf bb,unsigned long x,unsigned long y){return GetBBPixel154(bb,x,y);}
void setbbpixel(pbitbuf bb,unsigned long x,unsigned long y,unsigned long c){SetBBPixel155(bb,x,y,c);}
void line(pbitmap b,long x,long y,long w,long h,unsigned long c){Line156(b,x,y,w,h,c);}
void line(long x,long y,long w,long h,unsigned long c){Line157(x,y,w,h,c);}
void line(long x,long y,long w,long h){Line158(x,y,w,h);}
void linebb(pbitbuf bb,long x,long y,long w,long h,unsigned long c){LineBB159(bb,x,y,w,h,c);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar160(b,x,y,w,h,cfg,cbg);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long c){Bar161(b,x,y,w,h,c);}
void bar(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar162(x,y,w,h,cfg,cbg);}
void bar(long x,long y,long w,long h,unsigned long c){Bar163(x,y,w,h,c);}
void bar(long x,long y,long w,long h){Bar164(x,y,w,h);}
void clear(pbitmap b,unsigned long c){Clear165(b,c);}
void clear(pbitmap b){Clear166(b);}
void clear(unsigned long c){Clear167(c);}
void clear(){Clear168();}
void triangle(pbitmap b,long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg){Triangle169(b,x1,y1,x2,y2,x3,y3,cfg,cbg);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg){Triangle170(x1,y1,x2,y2,x3,y3,cfg,cbg);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long c){Triangle171(x1,y1,x2,y2,x3,y3,c);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3){Triangle172(x1,y1,x2,y2,x3,y3);}
void arc(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc173(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc174(x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Arc175(x,y,rx,ry,sa,ea,c);}
void arc(long x,long y,long rx,long ry,double sa,double ea){Arc176(x,y,rx,ry,sa,ea);}
void pie(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie177(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie178(x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Pie179(x,y,rx,ry,sa,ea,c);}
void pie(long x,long y,long rx,long ry,double sa,double ea){Pie180(x,y,rx,ry,sa,ea);}
void chord(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord181(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord182(x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Chord183(x,y,rx,ry,sa,ea,c);}
void chord(long x,long y,long rx,long ry,double sa,double ea){Chord184(x,y,rx,ry,sa,ea);}
void ellipse(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse185(b,x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse186(x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long c){Ellipse187(x,y,rx,ry,c);}
void ellipse(long x,long y,long rx,long ry){Ellipse188(x,y,rx,ry);}
void circle(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle189(b,x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle190(x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long c){Circle191(x,y,r,c);}
void circle(long x,long y,long r){Circle192(x,y,r);}
pbitmap createbmp(pbitmap b,unsigned long w,unsigned long h,unsigned long c){return CreateBMP193(b,w,h,c);}
pbitmap createbmp(pbitmap b){return CreateBMP194(b);}
pbitmap createbmp(unsigned long w,unsigned long h,unsigned long c){return CreateBMP195(w,h,c);}
pbitmap createbmp(unsigned long w,unsigned long h){return CreateBMP196(w,h);}
pbitmap createbmp(){return CreateBMP197();}
void releasebmp(pbitmap b){ReleaseBMP198(b);}
void releasebmp(){ReleaseBMP199();}
pbitmap loadbmp(const char* s,unsigned long c){return LoadBMP200(s,c);}
pbitmap loadbmp(const char* s){return LoadBMP201(s);}
void savebmp(pbitmap b,const char* s){SaveBMP202(b,s);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP203(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP204(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP205(bs,bd,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP206(bs,bd,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP207(bs,bd,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP208(bs,bd,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP209(bs,bd,xd,yd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd){DrawBMP210(bs,bd,xd,yd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long c){DrawBMP211(bs,bd,c);}
void drawbmp(pbitmap bs,pbitmap bd){DrawBMP212(bs,bd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP213(bs,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP214(bs,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP215(bs,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP216(bs,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP217(bs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP218(bs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP219(bs,xd,yd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd){DrawBMP220(bs,xd,yd);}
void drawbmp(pbitmap bs,unsigned long c){DrawBMP221(bs,c);}
void drawbmp(pbitmap bs){DrawBMP222(bs);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP223(xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP224(xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP225(xs,ys,xd,yd,w,h,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP226(xs,ys,xd,yd,w,h);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP227(xd,yd,wd,hd,c);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP228(xd,yd,wd,hd);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long c){DrawBMP229(xd,yd,c);}
void drawbmp(unsigned long xd,unsigned long yd){DrawBMP230(xd,yd);}
void drawbmp(unsigned long c){DrawBMP231(c);}
void drawbmp(){DrawBMP232();}
void mixbmp(pbitmap b1,pbitmap b2,pbitmap b3){MixBMP233(b1,b2,b3);}
void blurbmpbox(pbitmap b,unsigned long d,unsigned long n){BlurBMPBox234(b,d,n);}
void blurbmpbox(pbitmap b,unsigned long d){BlurBMPBox235(b,d);}
void blurbmpgau(pbitmap b,double d){BlurBMPGau236(b,d);}
pbitbuf createbb(pbitmap b){return CreateBB237(b);}
void releasebb(pbitbuf bb){ReleaseBB238(bb);}
void getbb(pbitbuf bb){GetBB239(bb);}
void setbb(pbitbuf bb){SetBB240(bb);}
void mixbb(pbitbuf bb1,pbitbuf bb2,pbitbuf bb3){MixBB241(bb1,bb2,bb3);}
void blurbbbox(pbitbuf bb,unsigned long d,unsigned long n){BlurBBBox242(bb,d,n);}
void blurbbgau(pbitbuf bb,double d){BlurBBGau243(bb,d);}
void presskey(unsigned char k,unsigned long t){PressKey244(k,t);}
void presskey(unsigned char k){PressKey245(k);}
void downkey(unsigned char k){DownKey246(k);}
void upkey(unsigned char k){UpKey247(k);}
void pressmouse(unsigned char m,unsigned long t){PressMouse248(m,t);}
void pressmouse(unsigned char m){PressMouse249(m);}
void downmouse(unsigned char m){DownMouse250(m);}
void upmouse(unsigned char m){UpMouse251(m);}
void wheelmouse(long wl){WheelMouse252(wl);}
void movemouse(long x,long y){MoveMouse253(x,y);}
void movemouseabs(long x,long y){MoveMouseAbs254(x,y);}
void movemousewin(long x,long y){MoveMouseWin255(x,y);}
void movemousepos(long x,long y){MoveMousePos256(x,y);}
void sendmsg(){SendMsg257();}
bool isnextmsg(){return IsNextMsg258();}
unsigned long getnextmsg(){return GetNextMsg259();}
unsigned long waitnextmsg(){return WaitNextMsg260();}
bool ismsg(unsigned long uM){return IsMsg261(uM);}
long long getmsg(unsigned long uM){return GetMsg262(uM);}
long long waitmsg(unsigned long uM){return WaitMsg263(uM);}
bool iskey(unsigned long k){return IsKey264(k);}
bool iskey(){return IsKey265();}
unsigned long getkey(){return GetKey266();}
unsigned long waitkey(unsigned long k){return WaitKey267(k);}
unsigned long waitkey(){return WaitKey268();}
bool ismouse(unsigned long m){return IsMouse269(m);}
bool ismouse(){return IsMouse270();}
unsigned long getmouse(){return GetMouse271();}
unsigned long waitmouse(unsigned long m){return WaitMouse272(m);}
unsigned long waitmouse(){return WaitMouse273();}
bool ismouseleft(){return IsMouseLeft274();}
void waitmouseleft(){WaitMouseLeft275();}
bool ismousemiddle(){return IsMouseMiddle276();}
void waitmousemiddle(){WaitMouseMiddle277();}
bool ismouseright(){return IsMouseRight278();}
void waitmouseright(){WaitMouseRight279();}
bool ismousewheel(){return IsMouseWheel280();}
long getmousewheel(){return GetMouseWheel281();}
void waitmousewheel(){WaitMouseWheel282();}
bool ismousemove(){return IsMouseMove283();}
unsigned long getmousemove(){return GetMouseMove284();}
unsigned long waitmousemove(){return WaitMouseMove285();}
bool isdropfile(){return IsDropFile286();}
mystring getdropfile(){return GetDropFile287();}
const short int* getdropfilew(){return GetDropFileW288();}
mystring waitdropfile(){return WaitDropFile289();}
long getmouseabsx(){return GetMouseAbsX290();}
long getmouseabsy(){return GetMouseAbsY291();}
long getmousewinx(){return GetMouseWinX292();}
long getmousewiny(){return GetMouseWinY293();}
long getmouseposx(){return GetMousePosX294();}
long getmouseposy(){return GetMousePosY295();}
unsigned long loadaudio(const char* s1,const char* s2){return LoadAudio296(s1,s2);}
unsigned long loadaudio(const char* s){return LoadAudio297(s);}
void playaudio(unsigned long id,const char* s,bool b){PlayAudio298(id,s,b);}
void playaudio(unsigned long id,const char* s){PlayAudio299(id,s);}
void playaudio(unsigned long id,bool b){PlayAudio300(id,b);}
void playaudio(unsigned long id){PlayAudio301(id);}
void stopaudio(unsigned long id){StopAudio302(id);}
void pauseaudio(unsigned long id){PauseAudio303(id);}
void resumeaudio(unsigned long id){ResumeAudio304(id);}
void releaseaudio(unsigned long id){ReleaseAudio305(id);}
unsigned long getaudiovol(unsigned long id){return GetAudioVol306(id);}
void setaudiovol(unsigned long id,unsigned long v){SetAudioVol307(id,v);}
unsigned long getaudiopos(unsigned long id){return GetAudioPos308(id);}
void setaudiopos(unsigned long id,unsigned long pos,bool b){SetAudioPos309(id,pos,b);}
void setaudiopos(unsigned long id,unsigned long pos){SetAudioPos310(id,pos);}
unsigned long getaudiolen(unsigned long id){return GetAudioLen311(id);}
bool isfile(const char* s){return IsFile312(s);}
bool isfilew(const short int* s){return IsFileW313(s);}
bool newfile(const char* s){return NewFile314(s);}
bool newdir(const char* s){return NewDir315(s);}
bool copyfile(const char* src,const char* des){return CopyFile316(src,des);}
bool movefile(const char* src,const char* des){return MoveFile317(src,des);}
bool deletefile(const char* s){return DeleteFile318(s);}
mystring getfilename(const char* s){return GetFileName319(s);}
const short int* getfilenamew(const short int* s){return GetFileNameW320(s);}
mystring getfiledir(const char* s){return GetFileDir321(s);}
const short int* getfiledirw(const short int* s){return GetFileDirW322(s);}
void openfile(const char* s){OpenFile323(s);}
void openfilew(const short int* s){OpenFileW324(s);}
void closefile(){CloseFile325();}
unsigned long getfilelen(){return GetFileLen326();}
unsigned long getfilepos(){return GetFilePos327();}
void setfilepos(unsigned long pos){SetFilePos328(pos);}
unsigned char getbyte(){return GetByte329();}
unsigned short getword(){return GetWord330();}
unsigned long getlongword(){return GetLongword331();}
unsigned long getinteger(){return GetInteger332();}
const char* getpchar(){return GetPchar333();}
mystring getstring(unsigned long len){return GetString334(len);}
mystring getpara(){return GetPara335();}
mystring getpara(unsigned long n){return GetPara336(n);}
const short int* getparaw(){return GetParaW337();}
const short int* getparaw(unsigned long n){return GetParaW338(n);}
