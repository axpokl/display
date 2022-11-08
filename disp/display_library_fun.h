
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
extern "C" void DrawTextXY118(pbitmap b,const char* s,long x,long y,unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY119(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY120(pbitmap b,const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXY121(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY122(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXY123(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawText124(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawText125(const char* s,unsigned long cfg);
extern "C" void DrawText126(const char* s);
extern "C" void DrawTextlnXY127(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXY128(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextlnXY129(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextln130(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextln131(const char* s,unsigned long cfg);
extern "C" void DrawTextln132(const char* s);
extern "C" void DrawTextln133();
extern "C" void DrawTextXYw134(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw135(pbitmap b,const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXYw136(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw137(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextXYw138(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextw139(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextw140(const char* s,unsigned long cfg);
extern "C" void DrawTextw141(const char* s);
extern "C" void DrawTextlnXYw142(const char* s,long x,long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXYw143(const char* s,long x,long y,unsigned long cfg);
extern "C" void DrawTextlnXYw144(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextlnw145(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnw146(const char* s,unsigned long cfg);
extern "C" void DrawTextlnw147(const char* s);
extern "C" unsigned long GetPixel148(pbitmap b,unsigned long x,unsigned long y);
extern "C" unsigned long GetPixel149(unsigned long x,unsigned long y);
extern "C" void SetPixel150(pbitmap b,unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel151(unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel152(unsigned long x,unsigned long y);
extern "C" unsigned long GetBBPixel153(pbitbuf bb,unsigned long x,unsigned long y);
extern "C" void SetBBPixel154(pbitbuf bb,unsigned long x,unsigned long y,unsigned long c);
extern "C" void Line155(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Line156(long x,long y,long w,long h,unsigned long c);
extern "C" void Line157(long x,long y,long w,long h);
extern "C" void LineBB158(pbitbuf bb,long x,long y,long w,long h,unsigned long c);
extern "C" void Bar159(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar160(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Bar161(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar162(long x,long y,long w,long h,unsigned long c);
extern "C" void Bar163(long x,long y,long w,long h);
extern "C" void Clear164(pbitmap b,unsigned long c);
extern "C" void Clear165(pbitmap b);
extern "C" void Clear166(unsigned long c);
extern "C" void Clear167();
extern "C" void Triangle168(pbitmap b,long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg);
extern "C" void Triangle169(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg);
extern "C" void Triangle170(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long c);
extern "C" void Triangle171(long x1,long y1,long x2,long y2,long x3,long y3);
extern "C" void Arc172(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc173(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc174(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Arc175(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Pie176(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie177(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie178(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Pie179(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Chord180(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord181(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord182(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Chord183(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Ellipse184(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse185(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse186(long x,long y,long rx,long ry,unsigned long c);
extern "C" void Ellipse187(long x,long y,long rx,long ry);
extern "C" void Circle188(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle189(long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle190(long x,long y,long r,unsigned long c);
extern "C" void Circle191(long x,long y,long r);
extern "C" pbitmap CreateBMP192(pbitmap b,unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP193(pbitmap b);
extern "C" pbitmap CreateBMP194(unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP195(unsigned long w,unsigned long h);
extern "C" pbitmap CreateBMP196();
extern "C" void ReleaseBMP197(pbitmap b);
extern "C" void ReleaseBMP198();
extern "C" pbitmap LoadBMP199(const char* s,unsigned long c);
extern "C" pbitmap LoadBMP200(const char* s);
extern "C" void SaveBMP201(pbitmap b,const char* s);
extern "C" void DrawBMP202(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP203(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP204(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP205(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP206(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP207(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP208(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP209(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP210(pbitmap bs,pbitmap bd,unsigned long c);
extern "C" void DrawBMP211(pbitmap bs,pbitmap bd);
extern "C" void DrawBMP212(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP213(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP214(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP215(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP216(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP217(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP218(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP219(pbitmap bs,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP220(pbitmap bs,unsigned long c);
extern "C" void DrawBMP221(pbitmap bs);
extern "C" void DrawBMP222(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP223(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP224(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP225(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP226(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP227(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP228(unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP229(unsigned long xd,unsigned long yd);
extern "C" void DrawBMP230(unsigned long c);
extern "C" void DrawBMP231();
extern "C" void MixBMP232(pbitmap b1,pbitmap b2,pbitmap b3);
extern "C" void BlurBMPBox233(pbitmap b,unsigned long d,unsigned long n);
extern "C" void BlurBMPBox234(pbitmap b,unsigned long d);
extern "C" void BlurBMPGau235(pbitmap b,double d);
extern "C" pbitbuf CreateBB236(pbitmap b);
extern "C" void ReleaseBB237(pbitbuf bb);
extern "C" void GetBB238(pbitbuf bb);
extern "C" void SetBB239(pbitbuf bb);
extern "C" void MixBB240(pbitbuf bb1,pbitbuf bb2,pbitbuf bb3);
extern "C" void BlurBBBox241(pbitbuf bb,unsigned long d,unsigned long n);
extern "C" void BlurBBGau242(pbitbuf bb,double d);
extern "C" void PressKey243(unsigned char k,unsigned long t);
extern "C" void PressKey244(unsigned char k);
extern "C" void DownKey245(unsigned char k);
extern "C" void UpKey246(unsigned char k);
extern "C" void PressMouse247(unsigned char m,unsigned long t);
extern "C" void PressMouse248(unsigned char m);
extern "C" void DownMouse249(unsigned char m);
extern "C" void UpMouse250(unsigned char m);
extern "C" void WheelMouse251(long wl);
extern "C" void MoveMouse252(long x,long y);
extern "C" void MoveMouseAbs253(long x,long y);
extern "C" void MoveMouseWin254(long x,long y);
extern "C" void MoveMousePos255(long x,long y);
extern "C" void SendMsg256();
extern "C" bool IsNextMsg257();
extern "C" unsigned long GetNextMsg258();
extern "C" unsigned long WaitNextMsg259();
extern "C" bool IsMsg260(unsigned long uM);
extern "C" long long GetMsg261(unsigned long uM);
extern "C" long long WaitMsg262(unsigned long uM);
extern "C" bool IsKey263(unsigned long k);
extern "C" bool IsKey264();
extern "C" unsigned long GetKey265();
extern "C" unsigned long WaitKey266(unsigned long k);
extern "C" unsigned long WaitKey267();
extern "C" bool IsMouse268(unsigned long m);
extern "C" bool IsMouse269();
extern "C" unsigned long GetMouse270();
extern "C" unsigned long WaitMouse271(unsigned long m);
extern "C" unsigned long WaitMouse272();
extern "C" bool IsMouseLeft273();
extern "C" void WaitMouseLeft274();
extern "C" bool IsMouseMiddle275();
extern "C" void WaitMouseMiddle276();
extern "C" bool IsMouseRight277();
extern "C" void WaitMouseRight278();
extern "C" bool IsMouseWheel279();
extern "C" long GetMouseWheel280();
extern "C" void WaitMouseWheel281();
extern "C" bool IsMouseMove282();
extern "C" unsigned long GetMouseMove283();
extern "C" unsigned long WaitMouseMove284();
extern "C" bool IsDropFile285();
extern "C" const char* GetDropFile286();
extern "C" const short int* GetDropFileW287();
extern "C" const char* WaitDropFile288();
extern "C" long GetMouseAbsX289();
extern "C" long GetMouseAbsY290();
extern "C" long GetMouseWinX291();
extern "C" long GetMouseWinY292();
extern "C" long GetMousePosX293();
extern "C" long GetMousePosY294();
extern "C" unsigned long LoadAudio295(const char* s1,const char* s2);
extern "C" unsigned long LoadAudio296(const char* s);
extern "C" void PlayAudio297(unsigned long id,const char* s,bool b);
extern "C" void PlayAudio298(unsigned long id,const char* s);
extern "C" void PlayAudio299(unsigned long id,bool b);
extern "C" void PlayAudio300(unsigned long id);
extern "C" void StopAudio301(unsigned long id);
extern "C" void PauseAudio302(unsigned long id);
extern "C" void ResumeAudio303(unsigned long id);
extern "C" void ReleaseAudio304(unsigned long id);
extern "C" unsigned long GetAudioVol305(unsigned long id);
extern "C" void SetAudioVol306(unsigned long id,unsigned long v);
extern "C" unsigned long GetAudioPos307(unsigned long id);
extern "C" void SetAudioPos308(unsigned long id,unsigned long pos,bool b);
extern "C" void SetAudioPos309(unsigned long id,unsigned long pos);
extern "C" unsigned long GetAudioLen310(unsigned long id);
extern "C" bool IsFile311(const char* s);
extern "C" bool IsFileW312(const short int* s);
extern "C" bool NewFile313(const char* s);
extern "C" bool NewDir314(const char* s);
extern "C" bool CopyFile315(const char* src,const char* des);
extern "C" bool MoveFile316(const char* src,const char* des);
extern "C" bool DeleteFile317(const char* s);
extern "C" const char* GetFileName318(const char* s);
extern "C" const short int* GetFileNameW319(const short int* s);
extern "C" const char* GetFileDir320(const char* s);
extern "C" const short int* GetFileDirW321(const short int* s);
extern "C" void OpenFile322(const char* s);
extern "C" void OpenFileW323(const short int* s);
extern "C" void CloseFile324();
extern "C" unsigned long GetFileLen325();
extern "C" unsigned long GetFilePos326();
extern "C" void SetFilePos327(unsigned long pos);
extern "C" unsigned char GetByte328();
extern "C" unsigned short GetWord329();
extern "C" unsigned long GetLongword330();
extern "C" unsigned long GetInteger331();
extern "C" const char* GetPchar332();
extern "C" const char* GetString333(unsigned long len);
extern "C" const char* GetPara334();
extern "C" const char* GetPara335(unsigned long n);
extern "C" const short int* GetParaW336();
extern "C" const short int* GetParaW337(unsigned long n);

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
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg){DrawTextXY118(b,s,x,y,w,h,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXY119(b,s,x,y,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,long x,long y,unsigned long cfg){DrawTextXY120(b,s,x,y,cfg);}
void drawtextxy(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXY121(s,x,y,cfg,cbg);}
void drawtextxy(const char* s,long x,long y,unsigned long cfg){DrawTextXY122(s,x,y,cfg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y){DrawTextXY123(s,x,y);}
void drawtext(const char* s,unsigned long cfg,unsigned long cbg){DrawText124(s,cfg,cbg);}
void drawtext(const char* s,unsigned long cfg){DrawText125(s,cfg);}
void drawtext(const char* s){DrawText126(s);}
void drawtextlnxy(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextlnXY127(s,x,y,cfg,cbg);}
void drawtextlnxy(const char* s,long x,long y,unsigned long cfg){DrawTextlnXY128(s,x,y,cfg);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y){DrawTextlnXY129(s,x,y);}
void drawtextln(const char* s,unsigned long cfg,unsigned long cbg){DrawTextln130(s,cfg,cbg);}
void drawtextln(const char* s,unsigned long cfg){DrawTextln131(s,cfg);}
void drawtextln(const char* s){DrawTextln132(s);}
void drawtextln(){DrawTextln133();}
void drawtextxyw(pbitmap b,const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXYw134(b,s,x,y,cfg,cbg);}
void drawtextxyw(pbitmap b,const char* s,long x,long y,unsigned long cfg){DrawTextXYw135(b,s,x,y,cfg);}
void drawtextxyw(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextXYw136(s,x,y,cfg,cbg);}
void drawtextxyw(const char* s,long x,long y,unsigned long cfg){DrawTextXYw137(s,x,y,cfg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y){DrawTextXYw138(s,x,y);}
void drawtextw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextw139(s,cfg,cbg);}
void drawtextw(const char* s,unsigned long cfg){DrawTextw140(s,cfg);}
void drawtextw(const char* s){DrawTextw141(s);}
void drawtextlnxyw(const char* s,long x,long y,unsigned long cfg,unsigned long cbg){DrawTextlnXYw142(s,x,y,cfg,cbg);}
void drawtextlnxyw(const char* s,long x,long y,unsigned long cfg){DrawTextlnXYw143(s,x,y,cfg);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y){DrawTextlnXYw144(s,x,y);}
void drawtextlnw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextlnw145(s,cfg,cbg);}
void drawtextlnw(const char* s,unsigned long cfg){DrawTextlnw146(s,cfg);}
void drawtextlnw(const char* s){DrawTextlnw147(s);}
unsigned long getpixel(pbitmap b,unsigned long x,unsigned long y){return GetPixel148(b,x,y);}
unsigned long getpixel(unsigned long x,unsigned long y){return GetPixel149(x,y);}
void setpixel(pbitmap b,unsigned long x,unsigned long y,unsigned long c){SetPixel150(b,x,y,c);}
void setpixel(unsigned long x,unsigned long y,unsigned long c){SetPixel151(x,y,c);}
void setpixel(unsigned long x,unsigned long y){SetPixel152(x,y);}
unsigned long getbbpixel(pbitbuf bb,unsigned long x,unsigned long y){return GetBBPixel153(bb,x,y);}
void setbbpixel(pbitbuf bb,unsigned long x,unsigned long y,unsigned long c){SetBBPixel154(bb,x,y,c);}
void line(pbitmap b,long x,long y,long w,long h,unsigned long c){Line155(b,x,y,w,h,c);}
void line(long x,long y,long w,long h,unsigned long c){Line156(x,y,w,h,c);}
void line(long x,long y,long w,long h){Line157(x,y,w,h);}
void linebb(pbitbuf bb,long x,long y,long w,long h,unsigned long c){LineBB158(bb,x,y,w,h,c);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar159(b,x,y,w,h,cfg,cbg);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long c){Bar160(b,x,y,w,h,c);}
void bar(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar161(x,y,w,h,cfg,cbg);}
void bar(long x,long y,long w,long h,unsigned long c){Bar162(x,y,w,h,c);}
void bar(long x,long y,long w,long h){Bar163(x,y,w,h);}
void clear(pbitmap b,unsigned long c){Clear164(b,c);}
void clear(pbitmap b){Clear165(b);}
void clear(unsigned long c){Clear166(c);}
void clear(){Clear167();}
void triangle(pbitmap b,long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg){Triangle168(b,x1,y1,x2,y2,x3,y3,cfg,cbg);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long cfg,unsigned long cbg){Triangle169(x1,y1,x2,y2,x3,y3,cfg,cbg);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3,unsigned long c){Triangle170(x1,y1,x2,y2,x3,y3,c);}
void triangle(long x1,long y1,long x2,long y2,long x3,long y3){Triangle171(x1,y1,x2,y2,x3,y3);}
void arc(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc172(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc173(x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Arc174(x,y,rx,ry,sa,ea,c);}
void arc(long x,long y,long rx,long ry,double sa,double ea){Arc175(x,y,rx,ry,sa,ea);}
void pie(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie176(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie177(x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Pie178(x,y,rx,ry,sa,ea,c);}
void pie(long x,long y,long rx,long ry,double sa,double ea){Pie179(x,y,rx,ry,sa,ea);}
void chord(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord180(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord181(x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Chord182(x,y,rx,ry,sa,ea,c);}
void chord(long x,long y,long rx,long ry,double sa,double ea){Chord183(x,y,rx,ry,sa,ea);}
void ellipse(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse184(b,x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse185(x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long c){Ellipse186(x,y,rx,ry,c);}
void ellipse(long x,long y,long rx,long ry){Ellipse187(x,y,rx,ry);}
void circle(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle188(b,x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle189(x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long c){Circle190(x,y,r,c);}
void circle(long x,long y,long r){Circle191(x,y,r);}
pbitmap createbmp(pbitmap b,unsigned long w,unsigned long h,unsigned long c){return CreateBMP192(b,w,h,c);}
pbitmap createbmp(pbitmap b){return CreateBMP193(b);}
pbitmap createbmp(unsigned long w,unsigned long h,unsigned long c){return CreateBMP194(w,h,c);}
pbitmap createbmp(unsigned long w,unsigned long h){return CreateBMP195(w,h);}
pbitmap createbmp(){return CreateBMP196();}
void releasebmp(pbitmap b){ReleaseBMP197(b);}
void releasebmp(){ReleaseBMP198();}
pbitmap loadbmp(const char* s,unsigned long c){return LoadBMP199(s,c);}
pbitmap loadbmp(const char* s){return LoadBMP200(s);}
void savebmp(pbitmap b,const char* s){SaveBMP201(b,s);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP202(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP203(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP204(bs,bd,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP205(bs,bd,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP206(bs,bd,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP207(bs,bd,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP208(bs,bd,xd,yd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd){DrawBMP209(bs,bd,xd,yd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long c){DrawBMP210(bs,bd,c);}
void drawbmp(pbitmap bs,pbitmap bd){DrawBMP211(bs,bd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP212(bs,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP213(bs,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP214(bs,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP215(bs,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP216(bs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP217(bs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP218(bs,xd,yd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd){DrawBMP219(bs,xd,yd);}
void drawbmp(pbitmap bs,unsigned long c){DrawBMP220(bs,c);}
void drawbmp(pbitmap bs){DrawBMP221(bs);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP222(xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP223(xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP224(xs,ys,xd,yd,w,h,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP225(xs,ys,xd,yd,w,h);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP226(xd,yd,wd,hd,c);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP227(xd,yd,wd,hd);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long c){DrawBMP228(xd,yd,c);}
void drawbmp(unsigned long xd,unsigned long yd){DrawBMP229(xd,yd);}
void drawbmp(unsigned long c){DrawBMP230(c);}
void drawbmp(){DrawBMP231();}
void mixbmp(pbitmap b1,pbitmap b2,pbitmap b3){MixBMP232(b1,b2,b3);}
void blurbmpbox(pbitmap b,unsigned long d,unsigned long n){BlurBMPBox233(b,d,n);}
void blurbmpbox(pbitmap b,unsigned long d){BlurBMPBox234(b,d);}
void blurbmpgau(pbitmap b,double d){BlurBMPGau235(b,d);}
pbitbuf createbb(pbitmap b){return CreateBB236(b);}
void releasebb(pbitbuf bb){ReleaseBB237(bb);}
void getbb(pbitbuf bb){GetBB238(bb);}
void setbb(pbitbuf bb){SetBB239(bb);}
void mixbb(pbitbuf bb1,pbitbuf bb2,pbitbuf bb3){MixBB240(bb1,bb2,bb3);}
void blurbbbox(pbitbuf bb,unsigned long d,unsigned long n){BlurBBBox241(bb,d,n);}
void blurbbgau(pbitbuf bb,double d){BlurBBGau242(bb,d);}
void presskey(unsigned char k,unsigned long t){PressKey243(k,t);}
void presskey(unsigned char k){PressKey244(k);}
void downkey(unsigned char k){DownKey245(k);}
void upkey(unsigned char k){UpKey246(k);}
void pressmouse(unsigned char m,unsigned long t){PressMouse247(m,t);}
void pressmouse(unsigned char m){PressMouse248(m);}
void downmouse(unsigned char m){DownMouse249(m);}
void upmouse(unsigned char m){UpMouse250(m);}
void wheelmouse(long wl){WheelMouse251(wl);}
void movemouse(long x,long y){MoveMouse252(x,y);}
void movemouseabs(long x,long y){MoveMouseAbs253(x,y);}
void movemousewin(long x,long y){MoveMouseWin254(x,y);}
void movemousepos(long x,long y){MoveMousePos255(x,y);}
void sendmsg(){SendMsg256();}
bool isnextmsg(){return IsNextMsg257();}
unsigned long getnextmsg(){return GetNextMsg258();}
unsigned long waitnextmsg(){return WaitNextMsg259();}
bool ismsg(unsigned long uM){return IsMsg260(uM);}
long long getmsg(unsigned long uM){return GetMsg261(uM);}
long long waitmsg(unsigned long uM){return WaitMsg262(uM);}
bool iskey(unsigned long k){return IsKey263(k);}
bool iskey(){return IsKey264();}
unsigned long getkey(){return GetKey265();}
unsigned long waitkey(unsigned long k){return WaitKey266(k);}
unsigned long waitkey(){return WaitKey267();}
bool ismouse(unsigned long m){return IsMouse268(m);}
bool ismouse(){return IsMouse269();}
unsigned long getmouse(){return GetMouse270();}
unsigned long waitmouse(unsigned long m){return WaitMouse271(m);}
unsigned long waitmouse(){return WaitMouse272();}
bool ismouseleft(){return IsMouseLeft273();}
void waitmouseleft(){WaitMouseLeft274();}
bool ismousemiddle(){return IsMouseMiddle275();}
void waitmousemiddle(){WaitMouseMiddle276();}
bool ismouseright(){return IsMouseRight277();}
void waitmouseright(){WaitMouseRight278();}
bool ismousewheel(){return IsMouseWheel279();}
long getmousewheel(){return GetMouseWheel280();}
void waitmousewheel(){WaitMouseWheel281();}
bool ismousemove(){return IsMouseMove282();}
unsigned long getmousemove(){return GetMouseMove283();}
unsigned long waitmousemove(){return WaitMouseMove284();}
bool isdropfile(){return IsDropFile285();}
mystring getdropfile(){return GetDropFile286();}
const short int* getdropfilew(){return GetDropFileW287();}
mystring waitdropfile(){return WaitDropFile288();}
long getmouseabsx(){return GetMouseAbsX289();}
long getmouseabsy(){return GetMouseAbsY290();}
long getmousewinx(){return GetMouseWinX291();}
long getmousewiny(){return GetMouseWinY292();}
long getmouseposx(){return GetMousePosX293();}
long getmouseposy(){return GetMousePosY294();}
unsigned long loadaudio(const char* s1,const char* s2){return LoadAudio295(s1,s2);}
unsigned long loadaudio(const char* s){return LoadAudio296(s);}
void playaudio(unsigned long id,const char* s,bool b){PlayAudio297(id,s,b);}
void playaudio(unsigned long id,const char* s){PlayAudio298(id,s);}
void playaudio(unsigned long id,bool b){PlayAudio299(id,b);}
void playaudio(unsigned long id){PlayAudio300(id);}
void stopaudio(unsigned long id){StopAudio301(id);}
void pauseaudio(unsigned long id){PauseAudio302(id);}
void resumeaudio(unsigned long id){ResumeAudio303(id);}
void releaseaudio(unsigned long id){ReleaseAudio304(id);}
unsigned long getaudiovol(unsigned long id){return GetAudioVol305(id);}
void setaudiovol(unsigned long id,unsigned long v){SetAudioVol306(id,v);}
unsigned long getaudiopos(unsigned long id){return GetAudioPos307(id);}
void setaudiopos(unsigned long id,unsigned long pos,bool b){SetAudioPos308(id,pos,b);}
void setaudiopos(unsigned long id,unsigned long pos){SetAudioPos309(id,pos);}
unsigned long getaudiolen(unsigned long id){return GetAudioLen310(id);}
bool isfile(const char* s){return IsFile311(s);}
bool isfilew(const short int* s){return IsFileW312(s);}
bool newfile(const char* s){return NewFile313(s);}
bool newdir(const char* s){return NewDir314(s);}
bool copyfile(const char* src,const char* des){return CopyFile315(src,des);}
bool movefile(const char* src,const char* des){return MoveFile316(src,des);}
bool deletefile(const char* s){return DeleteFile317(s);}
mystring getfilename(const char* s){return GetFileName318(s);}
const short int* getfilenamew(const short int* s){return GetFileNameW319(s);}
mystring getfiledir(const char* s){return GetFileDir320(s);}
const short int* getfiledirw(const short int* s){return GetFileDirW321(s);}
void openfile(const char* s){OpenFile322(s);}
void openfilew(const short int* s){OpenFileW323(s);}
void closefile(){CloseFile324();}
unsigned long getfilelen(){return GetFileLen325();}
unsigned long getfilepos(){return GetFilePos326();}
void setfilepos(unsigned long pos){SetFilePos327(pos);}
unsigned char getbyte(){return GetByte328();}
unsigned short getword(){return GetWord329();}
unsigned long getlongword(){return GetLongword330();}
unsigned long getinteger(){return GetInteger331();}
const char* getpchar(){return GetPchar332();}
mystring getstring(unsigned long len){return GetString333(len);}
mystring getpara(){return GetPara334();}
mystring getpara(unsigned long n){return GetPara335(n);}
const short int* getparaw(){return GetParaW336();}
const short int* getparaw(unsigned long n){return GetParaW337(n);}
