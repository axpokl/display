
extern "C" double arcsin1(double x);
extern "C" double arccos2(double x);
extern "C" const char* i2s3(long i);
extern "C" const char* i2s4(unsigned long i);
extern "C" const char* i2s5(long i,long l,char c);
extern "C" const char* i2s6(long i,long l);
extern "C" const char* i2as7(unsigned char i);
extern "C" const char* i2as8(unsigned short i);
extern "C" const char* i2as9(unsigned long i);
extern "C" const char* hs2as10(const char* s);
extern "C" unsigned long s2i11(const char* s);
extern "C" unsigned char as2i12(const char* s);
extern "C" unsigned char hc2i13(char c);
extern "C" unsigned char hs2i14(const char* s);
extern "C" char i2hc15(unsigned char i);
extern "C" const char* i2hs16(unsigned char i);
extern "C" const char* as2hs17(const char* s);
extern "C" const char* i2hs18(unsigned short i);
extern "C" const char* i2hs19(unsigned long i);
extern "C" unsigned long NewThread20(void* th);
extern "C" void PauseThread21(unsigned long thi);
extern "C" void ResumeThread22(unsigned long thi);
extern "C" void StopThread23(unsigned long thi);
extern "C" unsigned long MsgBox24(const char* s,const char* title,unsigned long i);
extern "C" void MsgBox25(const char* s,const char* title);
extern "C" void MsgBox26(const char* s);
extern "C" void Delay27(unsigned long t);
extern "C" void Delay28(double t);
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
extern "C" void CreateWin43(unsigned long c);
extern "C" void CreateWin44();
extern "C" void FreshWin45();
extern "C" void CloseWin46();
extern "C" bool IsWin47();
extern "C" void SetDrawProcedure48(void* th);
extern "C" void SetTitle49(const char* s);
extern "C" void SetSize50(unsigned long w,unsigned long h);
extern "C" const char* GetTitle51();
extern "C" double GetTimeR52();
extern "C" unsigned long GetTime53();
extern "C" unsigned long GetWidth54();
extern "C" unsigned long GetHeight55();
extern "C" unsigned long GetSize56();
extern "C" long GetScrWidth57();
extern "C" long GetScrHeight58();
extern "C" unsigned long GetScrSize59();
extern "C" long GetBorderTitle60();
extern "C" long GetBorderWidth61();
extern "C" long GetBorderHeight62();
extern "C" unsigned long GetBorderSize63();
extern "C" long GetPosX64();
extern "C" long GetPosY65();
extern "C" unsigned long GetHwnd66();
extern "C" unsigned long GetDraw67();
extern "C" unsigned long GetBGColor68();
extern "C" void SetBGColor69(unsigned long c);
extern "C" unsigned long GetFGColor70();
extern "C" void SetFGColor71(unsigned long c);
extern "C" void SetPenColor72(pbitmap b,unsigned long c);
extern "C" void SetBrushColor73(pbitmap b,unsigned long c);
extern "C" unsigned char GetBlue74(unsigned long c);
extern "C" unsigned char GetGreen75(unsigned long c);
extern "C" unsigned char GetRed76(unsigned long c);
extern "C" unsigned char GetAlpha77(unsigned long c);
extern "C" unsigned long GetRGB78(unsigned char r,unsigned char g,unsigned char b);
extern "C" unsigned long GetRGBA79(unsigned char r,unsigned char g,unsigned char b,unsigned char a);
extern "C" void SetFont80(pbitmap b);
extern "C" void SetFont81();
extern "C" void SetFontWidth82(unsigned long w);
extern "C" void SetFontHeight83(unsigned long h);
extern "C" void SetFontSize84(unsigned long w,unsigned long h);
extern "C" void SetFontWeight85(unsigned long wg);
extern "C" void SetFontLtalic86(unsigned long lt);
extern "C" void SetFontUnderLine87(unsigned long ud);
extern "C" void SetFontStrikeOut88(unsigned long sk);
extern "C" void SetFontCharSet89(unsigned long cs);
extern "C" void SetFontName90(const char* s);
extern "C" void GetStringSize91(const char* s);
extern "C" unsigned long GetStringWidth92(const char* s);
extern "C" unsigned long GetStringHeight93(const char* s);
extern "C" void DrawTextXY94(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY95(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long c);
extern "C" void DrawTextXY96(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY97(const char* s,unsigned long x,unsigned long y,unsigned long c);
extern "C" void DrawTextXY98(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawText99(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawText100(const char* s,unsigned long c);
extern "C" void DrawText101(const char* s);
extern "C" void DrawTextlnXY102(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXY103(const char* s,unsigned long x,unsigned long y,unsigned long c);
extern "C" void DrawTextlnXY104(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextln105(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextln106(const char* s,unsigned long c);
extern "C" void DrawTextln107(const char* s);
extern "C" void DrawTextln108();
extern "C" void DrawTextXYw109(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw110(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long c);
extern "C" void DrawTextXYw111(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw112(const char* s,unsigned long x,unsigned long y,unsigned long c);
extern "C" void DrawTextXYw113(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextw114(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextw115(const char* s,unsigned long c);
extern "C" void DrawTextw116(const char* s);
extern "C" void DrawTextlnXYw117(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXYw118(const char* s,unsigned long x,unsigned long y,unsigned long c);
extern "C" void DrawTextlnXYw119(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextlnw120(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnw121(const char* s,unsigned long c);
extern "C" void DrawTextlnw122(const char* s);
extern "C" unsigned long GetPixel123(unsigned long x,unsigned long y);
extern "C" void SetPixel124(unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel125(unsigned long x,unsigned long y);
extern "C" void Line126(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Line127(unsigned long x,unsigned long y,long w,long h,unsigned long c);
extern "C" void Line128(unsigned long x,unsigned long y,long w,long h);
extern "C" void Bar129(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar130(unsigned long x,unsigned long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar131(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Bar132(unsigned long x,unsigned long y,long w,long h,unsigned long c);
extern "C" void Bar133(unsigned long x,unsigned long y,long w,long h);
extern "C" void Clear134(pbitmap b,unsigned long c);
extern "C" void Clear135(unsigned long c);
extern "C" void Clear136(pbitmap b);
extern "C" void Clear137();
extern "C" void Ellipse138(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse139(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse140(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Ellipse141(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Ellipse142(long x,long y,long rx,long ry,unsigned short sa,unsigned short ea,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse143(long x,long y,long rx,long ry,unsigned short sa,unsigned short ea,unsigned long c);
extern "C" void Ellipse144(long x,long y,long rx,long ry,unsigned short sa,unsigned short ea);
extern "C" void Ellipse145(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse146(long x,long y,long rx,long ry,unsigned long c);
extern "C" void Ellipse147(long x,long y,long rx,long ry);
extern "C" void Circle148(long x,long y,long r,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Circle149(long x,long y,long r,double sa,double ea,unsigned long c);
extern "C" void Circle150(long x,long y,long r,double sa,double ea);
extern "C" void Circle151(long x,long y,long r,unsigned short sa,unsigned short ea,unsigned long cfg,unsigned long cbg);
extern "C" void Circle152(long x,long y,long r,unsigned short sa,unsigned short ea,unsigned long c);
extern "C" void Circle153(long x,long y,long r,unsigned short sa,unsigned short ea);
extern "C" void Circle154(long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle155(long x,long y,long r,unsigned long c);
extern "C" void Circle156(long x,long y,long r);
extern "C" pbitmap CreateBMP157(unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP158(unsigned long w,unsigned long h);
extern "C" pbitmap CreateBMP159(pbitmap b);
extern "C" pbitmap CreateBMP160();
extern "C" pbitmap LoadBMP161(const char* s,unsigned long c);
extern "C" pbitmap LoadBMP162(const char* s);
extern "C" void SaveBMP163(pbitmap b,const char* s);
extern "C" void DrawBMP164(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP165(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP166(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP167(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP168(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP169(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP170(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP171(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP172(pbitmap bs,pbitmap bd,unsigned long c);
extern "C" void DrawBMP173(pbitmap bs,pbitmap bd);
extern "C" void DrawBMP174(pbitmap b,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP175(pbitmap b,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP176(pbitmap b,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP177(pbitmap b,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP178(pbitmap b,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP179(pbitmap b,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP180(pbitmap b,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP181(pbitmap b,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP182(pbitmap b,unsigned long c);
extern "C" void DrawBMP183(pbitmap b);
extern "C" void DrawBMP184(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP185(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP186(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP187(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP188(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP189(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP190(unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP191(unsigned long xd,unsigned long yd);
extern "C" void DrawBMP192(unsigned long c);
extern "C" void DrawBMP193();
extern "C" void ReleaseBMP194(pbitmap b);
extern "C" void ReleaseBMP195();
extern "C" void PressKey196(unsigned char k,unsigned long t);
extern "C" void PressKey197(unsigned char k,double t);
extern "C" void PressKey198(unsigned char k);
extern "C" void DownKey199(unsigned char k);
extern "C" void UpKey200(unsigned char k);
extern "C" void PressMouse201(unsigned char m,unsigned long t);
extern "C" void PressMouse202(unsigned char m,double t);
extern "C" void PressMouse203(unsigned char m);
extern "C" void DownMouse204(unsigned char m);
extern "C" void UpMouse205(unsigned char m);
extern "C" void WheelMouse206(long wl);
extern "C" void MoveMouse207(long x,long y);
extern "C" void MoveMouseAbs208(long x,long y);
extern "C" void MoveMouseWin209(long x,long y);
extern "C" void MoveMousePos210(long x,long y);
extern "C" void MoveMouse211(long pos);
extern "C" void MoveMouseAbs212(long pos);
extern "C" void MoveMouseWin213(long pos);
extern "C" void MoveMousePos214(long pos);
extern "C" void SendMsg215();
extern "C" bool IsNextMsg216();
extern "C" unsigned long GetNextMsg217();
extern "C" unsigned long WaitNextMsg218();
extern "C" bool IsMsg219(unsigned long uM);
extern "C" long long GetMsg220(unsigned long uM);
extern "C" long long WaitMsg221(unsigned long uM);
extern "C" bool IsKey222();
extern "C" unsigned long GetKey223();
extern "C" unsigned long WaitKey224();
extern "C" bool IsKey225(unsigned long k);
extern "C" void WaitKey226(unsigned long k);
extern "C" bool IsMouse227();
extern "C" unsigned long GetMouse228();
extern "C" unsigned long WaitMouse229();
extern "C" bool IsMouse230(unsigned long m);
extern "C" void WaitMouse231(unsigned long m);
extern "C" bool IsMouseLeft232();
extern "C" void WaitMouseLeft233();
extern "C" bool IsMouseMiddle234();
extern "C" void WaitMouseMiddle235();
extern "C" bool IsMouseRight236();
extern "C" void WaitMouseRight237();
extern "C" bool IsMouseWheel238();
extern "C" long GetMouseWheel239();
extern "C" void WaitMouseWheel240();
extern "C" bool IsMouseMove241();
extern "C" unsigned long GetMouseMove242();
extern "C" unsigned long WaitMouseMove243();
extern "C" bool IsDropFile244();
extern "C" const char* GetDropFile245();
extern "C" const char* WaitDropFile246();
extern "C" long GetMouseAbsX247();
extern "C" long GetMouseAbsY248();
extern "C" long GetMouseWinX249();
extern "C" long GetMouseWinY250();
extern "C" long GetMousePosX251();
extern "C" long GetMousePosY252();
extern "C" unsigned long LoadAudio253(const char* s);
extern "C" void PlayAudio254(unsigned long id,const char* s,bool b);
extern "C" void PlayAudio255(unsigned long id,const char* s);
extern "C" void PlayAudio256(unsigned long id,bool b);
extern "C" void PlayAudio257(unsigned long id);
extern "C" void StopAudio258(unsigned long id);
extern "C" void PauseAudio259(unsigned long id);
extern "C" void ResumeAudio260(unsigned long id);
extern "C" void ReleaseAudio261(unsigned long id);
extern "C" unsigned long GetAudioVol262(unsigned long id);
extern "C" void SetAudioVol263(unsigned long id,unsigned long v);
extern "C" unsigned long GetAudioPos264(unsigned long id);
extern "C" void SetAudioPos265(unsigned long id,unsigned long pos,bool b);
extern "C" void SetAudioPos266(unsigned long id,unsigned long pos);
extern "C" unsigned long GetAudioLen267(unsigned long id);
extern "C" bool IsFile268(const char* s);
extern "C" bool NewFile269(const char* s);
extern "C" bool NewDir270(const char* s);
extern "C" bool CopyFile271(const char* src,const char* des);
extern "C" bool MoveFile272(const char* src,const char* des);
extern "C" bool DeleteFile273(const char* s);
extern "C" void OpenFile274(const char* s);
extern "C" void CloseFile275();
extern "C" unsigned long GetFileLen276();
extern "C" unsigned long GetFilePos277();
extern "C" void SetFilePos278(unsigned long pos);
extern "C" unsigned char GetByte279();
extern "C" unsigned short GetWord280();
extern "C" unsigned long GetLongword281();
extern "C" unsigned long GetInteger282();
extern "C" const char* GetPchar283();
extern "C" const char* GetString284(unsigned long len);
extern "C" const char* GetString285();

double arcsin(double x){return arcsin1(x);}
double arccos(double x){return arccos2(x);}
mystring i2s(long i){return i2s3(i);}
mystring i2s(unsigned long i){return i2s4(i);}
mystring i2s(long i,long l,char c){return i2s5(i,l,c);}
mystring i2s(long i,long l){return i2s6(i,l);}
mystring i2as(unsigned char i){return i2as7(i);}
mystring i2as(unsigned short i){return i2as8(i);}
mystring i2as(unsigned long i){return i2as9(i);}
mystring hs2as(const char* s){return hs2as10(s);}
unsigned long s2i(const char* s){return s2i11(s);}
unsigned char as2i(const char* s){return as2i12(s);}
unsigned char hc2i(char c){return hc2i13(c);}
unsigned char hs2i(const char* s){return hs2i14(s);}
char i2hc(unsigned char i){return i2hc15(i);}
mystring i2hs(unsigned char i){return i2hs16(i);}
mystring as2hs(const char* s){return as2hs17(s);}
mystring i2hs(unsigned short i){return i2hs18(i);}
mystring i2hs(unsigned long i){return i2hs19(i);}
unsigned long newthread(void* th){return NewThread20(th);}
void pausethread(unsigned long thi){PauseThread21(thi);}
void resumethread(unsigned long thi){ResumeThread22(thi);}
void stopthread(unsigned long thi){StopThread23(thi);}
unsigned long msgbox(const char* s,const char* title,unsigned long i){return MsgBox24(s,title,i);}
void msgbox(const char* s,const char* title){MsgBox25(s,title);}
void msgbox(const char* s){MsgBox26(s);}
void delay(unsigned long t){Delay27(t);}
void delay(double t){Delay28(t);}
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
void createwin(unsigned long c){CreateWin43(c);}
void createwin(){CreateWin44();}
void freshwin(){FreshWin45();}
void closewin(){CloseWin46();}
bool iswin(){return IsWin47();}
void setdrawprocedure(void* th){SetDrawProcedure48(th);}
void settitle(const char* s){SetTitle49(s);}
void setsize(unsigned long w,unsigned long h){SetSize50(w,h);}
mystring gettitle(){return GetTitle51();}
double gettimer(){return GetTimeR52();}
unsigned long gettime(){return GetTime53();}
unsigned long getwidth(){return GetWidth54();}
unsigned long getheight(){return GetHeight55();}
unsigned long getsize(){return GetSize56();}
long getscrwidth(){return GetScrWidth57();}
long getscrheight(){return GetScrHeight58();}
unsigned long getscrsize(){return GetScrSize59();}
long getbordertitle(){return GetBorderTitle60();}
long getborderwidth(){return GetBorderWidth61();}
long getborderheight(){return GetBorderHeight62();}
unsigned long getbordersize(){return GetBorderSize63();}
long getposx(){return GetPosX64();}
long getposy(){return GetPosY65();}
unsigned long gethwnd(){return GetHwnd66();}
unsigned long getdraw(){return GetDraw67();}
unsigned long getbgcolor(){return GetBGColor68();}
void setbgcolor(unsigned long c){SetBGColor69(c);}
unsigned long getfgcolor(){return GetFGColor70();}
void setfgcolor(unsigned long c){SetFGColor71(c);}
void setpencolor(pbitmap b,unsigned long c){SetPenColor72(b,c);}
void setbrushcolor(pbitmap b,unsigned long c){SetBrushColor73(b,c);}
unsigned char getblue(unsigned long c){return GetBlue74(c);}
unsigned char getgreen(unsigned long c){return GetGreen75(c);}
unsigned char getred(unsigned long c){return GetRed76(c);}
unsigned char getalpha(unsigned long c){return GetAlpha77(c);}
unsigned long getrgb(unsigned char r,unsigned char g,unsigned char b){return GetRGB78(r,g,b);}
unsigned long getrgba(unsigned char r,unsigned char g,unsigned char b,unsigned char a){return GetRGBA79(r,g,b,a);}
void setfont(pbitmap b){SetFont80(b);}
void setfont(){SetFont81();}
void setfontwidth(unsigned long w){SetFontWidth82(w);}
void setfontheight(unsigned long h){SetFontHeight83(h);}
void setfontsize(unsigned long w,unsigned long h){SetFontSize84(w,h);}
void setfontweight(unsigned long wg){SetFontWeight85(wg);}
void setfontltalic(unsigned long lt){SetFontLtalic86(lt);}
void setfontunderline(unsigned long ud){SetFontUnderLine87(ud);}
void setfontstrikeout(unsigned long sk){SetFontStrikeOut88(sk);}
void setfontcharset(unsigned long cs){SetFontCharSet89(cs);}
void setfontname(const char* s){SetFontName90(s);}
void getstringsize(const char* s){GetStringSize91(s);}
unsigned long getstringwidth(const char* s){return GetStringWidth92(s);}
unsigned long getstringheight(const char* s){return GetStringHeight93(s);}
void drawtextxy(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXY94(b,s,x,y,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long c){DrawTextXY95(b,s,x,y,c);}
void drawtextxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXY96(s,x,y,cfg,cbg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y,unsigned long c){DrawTextXY97(s,x,y,c);}
void drawtextxy(const char* s,unsigned long x,unsigned long y){DrawTextXY98(s,x,y);}
void drawtext(const char* s,unsigned long cfg,unsigned long cbg){DrawText99(s,cfg,cbg);}
void drawtext(const char* s,unsigned long c){DrawText100(s,c);}
void drawtext(const char* s){DrawText101(s);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextlnXY102(s,x,y,cfg,cbg);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y,unsigned long c){DrawTextlnXY103(s,x,y,c);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y){DrawTextlnXY104(s,x,y);}
void drawtextln(const char* s,unsigned long cfg,unsigned long cbg){DrawTextln105(s,cfg,cbg);}
void drawtextln(const char* s,unsigned long c){DrawTextln106(s,c);}
void drawtextln(const char* s){DrawTextln107(s);}
void drawtextln(){DrawTextln108();}
void drawtextxyw(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXYw109(b,s,x,y,cfg,cbg);}
void drawtextxyw(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long c){DrawTextXYw110(b,s,x,y,c);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXYw111(s,x,y,cfg,cbg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y,unsigned long c){DrawTextXYw112(s,x,y,c);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y){DrawTextXYw113(s,x,y);}
void drawtextw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextw114(s,cfg,cbg);}
void drawtextw(const char* s,unsigned long c){DrawTextw115(s,c);}
void drawtextw(const char* s){DrawTextw116(s);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextlnXYw117(s,x,y,cfg,cbg);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y,unsigned long c){DrawTextlnXYw118(s,x,y,c);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y){DrawTextlnXYw119(s,x,y);}
void drawtextlnw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextlnw120(s,cfg,cbg);}
void drawtextlnw(const char* s,unsigned long c){DrawTextlnw121(s,c);}
void drawtextlnw(const char* s){DrawTextlnw122(s);}
unsigned long getpixel(unsigned long x,unsigned long y){return GetPixel123(x,y);}
void setpixel(unsigned long x,unsigned long y,unsigned long c){SetPixel124(x,y,c);}
void setpixel(unsigned long x,unsigned long y){SetPixel125(x,y);}
void line(pbitmap b,long x,long y,long w,long h,unsigned long c){Line126(b,x,y,w,h,c);}
void line(unsigned long x,unsigned long y,long w,long h,unsigned long c){Line127(x,y,w,h,c);}
void line(unsigned long x,unsigned long y,long w,long h){Line128(x,y,w,h);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar129(b,x,y,w,h,cfg,cbg);}
void bar(unsigned long x,unsigned long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar130(x,y,w,h,cfg,cbg);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long c){Bar131(b,x,y,w,h,c);}
void bar(unsigned long x,unsigned long y,long w,long h,unsigned long c){Bar132(x,y,w,h,c);}
void bar(unsigned long x,unsigned long y,long w,long h){Bar133(x,y,w,h);}
void clear(pbitmap b,unsigned long c){Clear134(b,c);}
void clear(unsigned long c){Clear135(c);}
void clear(pbitmap b){Clear136(b);}
void clear(){Clear137();}
void ellipse(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Ellipse138(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Ellipse139(x,y,rx,ry,sa,ea,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Ellipse140(x,y,rx,ry,sa,ea,c);}
void ellipse(long x,long y,long rx,long ry,double sa,double ea){Ellipse141(x,y,rx,ry,sa,ea);}
void ellipse(long x,long y,long rx,long ry,unsigned short sa,unsigned short ea,unsigned long cfg,unsigned long cbg){Ellipse142(x,y,rx,ry,sa,ea,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned short sa,unsigned short ea,unsigned long c){Ellipse143(x,y,rx,ry,sa,ea,c);}
void ellipse(long x,long y,long rx,long ry,unsigned short sa,unsigned short ea){Ellipse144(x,y,rx,ry,sa,ea);}
void ellipse(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse145(x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long c){Ellipse146(x,y,rx,ry,c);}
void ellipse(long x,long y,long rx,long ry){Ellipse147(x,y,rx,ry);}
void circle(long x,long y,long r,double sa,double ea,unsigned long cfg,unsigned long cbg){Circle148(x,y,r,sa,ea,cfg,cbg);}
void circle(long x,long y,long r,double sa,double ea,unsigned long c){Circle149(x,y,r,sa,ea,c);}
void circle(long x,long y,long r,double sa,double ea){Circle150(x,y,r,sa,ea);}
void circle(long x,long y,long r,unsigned short sa,unsigned short ea,unsigned long cfg,unsigned long cbg){Circle151(x,y,r,sa,ea,cfg,cbg);}
void circle(long x,long y,long r,unsigned short sa,unsigned short ea,unsigned long c){Circle152(x,y,r,sa,ea,c);}
void circle(long x,long y,long r,unsigned short sa,unsigned short ea){Circle153(x,y,r,sa,ea);}
void circle(long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle154(x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long c){Circle155(x,y,r,c);}
void circle(long x,long y,long r){Circle156(x,y,r);}
pbitmap createbmp(unsigned long w,unsigned long h,unsigned long c){return CreateBMP157(w,h,c);}
pbitmap createbmp(unsigned long w,unsigned long h){return CreateBMP158(w,h);}
pbitmap createbmp(pbitmap b){return CreateBMP159(b);}
pbitmap createbmp(){return CreateBMP160();}
pbitmap loadbmp(const char* s,unsigned long c){return LoadBMP161(s,c);}
pbitmap loadbmp(const char* s){return LoadBMP162(s);}
void savebmp(pbitmap b,const char* s){SaveBMP163(b,s);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP164(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP165(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP166(bs,bd,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP167(bs,bd,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP168(bs,bd,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP169(bs,bd,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP170(bs,bd,xd,yd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd){DrawBMP171(bs,bd,xd,yd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long c){DrawBMP172(bs,bd,c);}
void drawbmp(pbitmap bs,pbitmap bd){DrawBMP173(bs,bd);}
void drawbmp(pbitmap b,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP174(b,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap b,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP175(b,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap b,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP176(b,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap b,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP177(b,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap b,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP178(b,xd,yd,wd,hd,c);}
void drawbmp(pbitmap b,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP179(b,xd,yd,wd,hd);}
void drawbmp(pbitmap b,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP180(b,xd,yd,c);}
void drawbmp(pbitmap b,unsigned long xd,unsigned long yd){DrawBMP181(b,xd,yd);}
void drawbmp(pbitmap b,unsigned long c){DrawBMP182(b,c);}
void drawbmp(pbitmap b){DrawBMP183(b);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP184(xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP185(xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP186(xs,ys,xd,yd,w,h,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP187(xs,ys,xd,yd,w,h);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP188(xd,yd,wd,hd,c);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP189(xd,yd,wd,hd);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long c){DrawBMP190(xd,yd,c);}
void drawbmp(unsigned long xd,unsigned long yd){DrawBMP191(xd,yd);}
void drawbmp(unsigned long c){DrawBMP192(c);}
void drawbmp(){DrawBMP193();}
void releasebmp(pbitmap b){ReleaseBMP194(b);}
void releasebmp(){ReleaseBMP195();}
void presskey(unsigned char k,unsigned long t){PressKey196(k,t);}
void presskey(unsigned char k,double t){PressKey197(k,t);}
void presskey(unsigned char k){PressKey198(k);}
void downkey(unsigned char k){DownKey199(k);}
void upkey(unsigned char k){UpKey200(k);}
void pressmouse(unsigned char m,unsigned long t){PressMouse201(m,t);}
void pressmouse(unsigned char m,double t){PressMouse202(m,t);}
void pressmouse(unsigned char m){PressMouse203(m);}
void downmouse(unsigned char m){DownMouse204(m);}
void upmouse(unsigned char m){UpMouse205(m);}
void wheelmouse(long wl){WheelMouse206(wl);}
void movemouse(long x,long y){MoveMouse207(x,y);}
void movemouseabs(long x,long y){MoveMouseAbs208(x,y);}
void movemousewin(long x,long y){MoveMouseWin209(x,y);}
void movemousepos(long x,long y){MoveMousePos210(x,y);}
void movemouse(long pos){MoveMouse211(pos);}
void movemouseabs(long pos){MoveMouseAbs212(pos);}
void movemousewin(long pos){MoveMouseWin213(pos);}
void movemousepos(long pos){MoveMousePos214(pos);}
void sendmsg(){SendMsg215();}
bool isnextmsg(){return IsNextMsg216();}
unsigned long getnextmsg(){return GetNextMsg217();}
unsigned long waitnextmsg(){return WaitNextMsg218();}
bool ismsg(unsigned long uM){return IsMsg219(uM);}
long long getmsg(unsigned long uM){return GetMsg220(uM);}
long long waitmsg(unsigned long uM){return WaitMsg221(uM);}
bool iskey(){return IsKey222();}
unsigned long getkey(){return GetKey223();}
unsigned long waitkey(){return WaitKey224();}
bool iskey(unsigned long k){return IsKey225(k);}
void waitkey(unsigned long k){WaitKey226(k);}
bool ismouse(){return IsMouse227();}
unsigned long getmouse(){return GetMouse228();}
unsigned long waitmouse(){return WaitMouse229();}
bool ismouse(unsigned long m){return IsMouse230(m);}
void waitmouse(unsigned long m){WaitMouse231(m);}
bool ismouseleft(){return IsMouseLeft232();}
void waitmouseleft(){WaitMouseLeft233();}
bool ismousemiddle(){return IsMouseMiddle234();}
void waitmousemiddle(){WaitMouseMiddle235();}
bool ismouseright(){return IsMouseRight236();}
void waitmouseright(){WaitMouseRight237();}
bool ismousewheel(){return IsMouseWheel238();}
long getmousewheel(){return GetMouseWheel239();}
void waitmousewheel(){WaitMouseWheel240();}
bool ismousemove(){return IsMouseMove241();}
unsigned long getmousemove(){return GetMouseMove242();}
unsigned long waitmousemove(){return WaitMouseMove243();}
bool isdropfile(){return IsDropFile244();}
mystring getdropfile(){return GetDropFile245();}
mystring waitdropfile(){return WaitDropFile246();}
long getmouseabsx(){return GetMouseAbsX247();}
long getmouseabsy(){return GetMouseAbsY248();}
long getmousewinx(){return GetMouseWinX249();}
long getmousewiny(){return GetMouseWinY250();}
long getmouseposx(){return GetMousePosX251();}
long getmouseposy(){return GetMousePosY252();}
unsigned long loadaudio(const char* s){return LoadAudio253(s);}
void playaudio(unsigned long id,const char* s,bool b){PlayAudio254(id,s,b);}
void playaudio(unsigned long id,const char* s){PlayAudio255(id,s);}
void playaudio(unsigned long id,bool b){PlayAudio256(id,b);}
void playaudio(unsigned long id){PlayAudio257(id);}
void stopaudio(unsigned long id){StopAudio258(id);}
void pauseaudio(unsigned long id){PauseAudio259(id);}
void resumeaudio(unsigned long id){ResumeAudio260(id);}
void releaseaudio(unsigned long id){ReleaseAudio261(id);}
unsigned long getaudiovol(unsigned long id){return GetAudioVol262(id);}
void setaudiovol(unsigned long id,unsigned long v){SetAudioVol263(id,v);}
unsigned long getaudiopos(unsigned long id){return GetAudioPos264(id);}
void setaudiopos(unsigned long id,unsigned long pos,bool b){SetAudioPos265(id,pos,b);}
void setaudiopos(unsigned long id,unsigned long pos){SetAudioPos266(id,pos);}
unsigned long getaudiolen(unsigned long id){return GetAudioLen267(id);}
bool isfile(const char* s){return IsFile268(s);}
bool newfile(const char* s){return NewFile269(s);}
bool newdir(const char* s){return NewDir270(s);}
bool copyfile(const char* src,const char* des){return CopyFile271(src,des);}
bool movefile(const char* src,const char* des){return MoveFile272(src,des);}
bool deletefile(const char* s){return DeleteFile273(s);}
void openfile(const char* s){OpenFile274(s);}
void closefile(){CloseFile275();}
unsigned long getfilelen(){return GetFileLen276();}
unsigned long getfilepos(){return GetFilePos277();}
void setfilepos(unsigned long pos){SetFilePos278(pos);}
unsigned char getbyte(){return GetByte279();}
unsigned short getword(){return GetWord280();}
unsigned long getlongword(){return GetLongword281();}
unsigned long getinteger(){return GetInteger282();}
const char* getpchar(){return GetPchar283();}
mystring getstring(unsigned long len){return GetString284(len);}
mystring getstring(){return GetString285();}
