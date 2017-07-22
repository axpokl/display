#include<string.h>
#include<windows.h>
#include<math.h>
#include<time.h>

struct bitmap {
  unsigned long handle;
  unsigned long dc;
  unsigned long width;
  unsigned long height;
  unsigned long color;
};
typedef bitmap* pbitmap;

class mystring
{
public:
char s[256];
char s0[256];
mystring(const char* d){strcpy(s,d);}
mystring operator+(const char* d){strcpy(s0,s);strcat(s0,d);return s0;}
operator const char*(){return s;}
};

int random(int r){return rand()%r;}
int randomize(){srand(time(NULL));}
const long black = 0x000000;
const long navy = 0x800000;
const long darkblue = 0x8b0000;
const long mediumblue = 0xcd0000;
const long blue = 0xff0000;
const long darkgreen = 0x006400;
const long green = 0x008000;
const long teal = 0x808000;
const long darkcyan = 0x8b8b00;
const long deepskyblue = 0xffbf00;
const long darkturquoise = 0xd1ce00;
const long mediumspringgreen = 0x9afa00;
const long lime = 0x00ff00;
const long springgreen = 0x7fff00;
const long cyan = 0xffff00;
const long aqua = 0xffff00;
const long midnightblue = 0x701919;
const long dodgerblue = 0xff901e;
const long lightseagreen = 0xaab220;
const long forestgreen = 0x228b22;
const long seagreen = 0x578b2e;
const long darkslategray = 0x4f4f2f;
const long limegreen = 0x32cd32;
const long mediumseagreen = 0x71b33c;
const long turquoise = 0xd0e040;
const long royalblue = 0xe16941;
const long steelblue = 0xb48246;
const long darkslateblue = 0x8b3d48;
const long mediumturquoise = 0xccd148;
const long indigo = 0x82004b;
const long darkolivegreen = 0x2f6b55;
const long cadetblue = 0xa09e5f;
const long cornflowerblue = 0xed9564;
const long mediumaquamarine = 0xaacd66;
const long dimgray = 0x696969;
const long slateblue = 0xcd5a6a;
const long olivedrab = 0x238e6b;
const long slategray = 0x908070;
const long lightslategray = 0x998877;
const long mediumslateblue = 0xee687b;
const long lawngreen = 0x00fc7c;
const long chartreuse = 0x00ff7f;
const long aquamarine = 0xd4ff7f;
const long maroon = 0x000080;
const long purple = 0x800080;
const long olive = 0x008080;
const long gray = 0x808080;
const long skyblue = 0xebce87;
const long lightskyblue = 0xface87;
const long blueviolet = 0xe22b8a;
const long darkred = 0x00008b;
const long darkmagenta = 0x8b008b;
const long saddlebrown = 0x13458b;
const long darkseagreen = 0x8fbc8f;
const long lightgreen = 0x90ee90;
const long mediumpurple = 0xdb7093;
const long darkviolet = 0xd30094;
const long palegreen = 0x98fb98;
const long darkorchid = 0xcc3299;
const long amethyst = 0xcc6699;
const long yellowgreen = 0x32cd9a;
const long sienna = 0x2d52a0;
const long brown = 0x2a2aa5;
const long darkgray = 0xa9a9a9;
const long lightblue = 0xe6d8ad;
const long greenyellow = 0x2fffad;
const long paleturquoise = 0xeeeeaf;
const long lightsteelblue = 0xdec4b0;
const long powderblue = 0xe6e0b0;
const long firebrick = 0x2222b2;
const long darkgoldenrod = 0x0b86b8;
const long mediumorchid = 0xd355ba;
const long rosybrown = 0x8f8fbc;
const long darkkhaki = 0x6bb7bd;
const long silver = 0xc0c0c0;
const long mediumvioletred = 0x8515c7;
const long indianred = 0x5c5ccd;
const long peru = 0x3f85cd;
const long chocolate = 0x1e69d2;
const long lightgrey = 0xd3d3d3;
const long thistle = 0xd8bfd8;
const long orchid = 0xd670da;
const long goldenrod = 0x20a5da;
const long palevioletred = 0x9370db;
const long crimson = 0x3c14dc;
const long gainsboro = 0xdcdcdc;
const long plum = 0xdda0dd;
const long burlywood = 0x87b8de;
const long lightcyan = 0xffffe0;
const long lavender = 0xfae6e6;
const long darksalmon = 0x7a96e9;
const long violet = 0xee82ee;
const long palegoldenrod = 0xaae8ee;
const long lightcoral = 0x8080f0;
const long khaki = 0x8ce6f0;
const long aliceblue = 0xfff8f0;
const long honeydew = 0xf0fff0;
const long azure = 0xfffff0;
const long sandybrown = 0x60a4f4;
const long wheat = 0xb3def5;
const long beige = 0xdcf5f5;
const long whitesmoke = 0xf5f5f5;
const long mintcream = 0xfafff5;
const long ghostwhite = 0xfff8f8;
const long salmon = 0x7280fa;
const long antiquewhite = 0xd7ebfa;
const long linen = 0xe6f0fa;
const long lightgoldenrodyellow = 0xd2fafa;
const long oldlace = 0xe6f5fd;
const long red = 0x0000ff;
const long fuchsia = 0xff00ff;
const long magenta = 0xff00ff;
const long deeppink = 0x9314ff;
const long orangered = 0x0045ff;
const long tomato = 0x4763ff;
const long hotpink = 0xb469ff;
const long coral = 0x507fff;
const long darkorange = 0x008cff;
const long lightsalmon = 0x7aa0ff;
const long orange = 0x00a5ff;
const long lightpink = 0xc1b6ff;
const long pink = 0xcbc0ff;
const long gold = 0x00d7ff;
const long peachpuff = 0xb9daff;
const long navajowhite = 0xaddeff;
const long moccasin = 0xb5e4ff;
const long bisque = 0xc4e4ff;
const long mistyrose = 0xe1e4ff;
const long blanchedalmond = 0xcdebff;
const long papayawhip = 0xd5efff;
const long lavenderblush = 0xf5f0ff;
const long seashell = 0xeef5ff;
const long cornsilk = 0xdcf8ff;
const long lemonchiffon = 0xcdfaff;
const long floralwhite = 0xf0faff;
const long snow = 0xfafaff;
const long yellow = 0x00ffff;
const long lightyellow = 0xe0ffff;
const long ivory = 0xf0ffff;
const long white = 0xffffff;
const long transparent = 0x1;

const byte m_left = 0;
const byte m_right = 1;
const byte m_middle = 2;

const byte k_uk = 0;
const byte k_lmouse = 1;
const byte k_rmouse = 2;
const byte k_cancel = 3;
const byte k_mmouse = 4;
const byte k_x1mouse = 5;
const byte k_x2mouse = 6;
const byte k_back = 8;
const byte k_tab = 9;
const byte k_clear = 12;
const byte k_enter = 13;
const byte k_shift = 16;
const byte k_ctrl = 17;
const byte k_alt = 18;
const byte k_pause = 19;
const byte k_caps = 20;
const byte k_esc = 27;
const byte k_space = 32;
const byte k_pgup = 33;
const byte k_pgdn = 34;
const byte k_end = 35;
const byte k_home = 36;
const byte k_left = 37;
const byte k_up = 38;
const byte k_right = 39;
const byte k_down = 40;
const byte k_select = 41;
const byte k_print = 42;
const byte k_execute = 43;
const byte k_prtsc = 44;
const byte k_ins = 45;
const byte k_del = 46;
const byte k_help = 47;
const byte k_0 = 48;
const byte k_1 = 49;
const byte k_2 = 50;
const byte k_3 = 51;
const byte k_4 = 52;
const byte k_5 = 53;
const byte k_6 = 54;
const byte k_7 = 55;
const byte k_8 = 56;
const byte k_9 = 57;
const byte k_a = 65;
const byte k_b = 66;
const byte k_c = 67;
const byte k_d = 68;
const byte k_e = 69;
const byte k_f = 70;
const byte k_g = 71;
const byte k_h = 72;
const byte k_i = 73;
const byte k_j = 74;
const byte k_k = 75;
const byte k_l = 76;
const byte k_m = 77;
const byte k_n = 78;
const byte k_o = 79;
const byte k_p = 80;
const byte k_q = 81;
const byte k_r = 82;
const byte k_s = 83;
const byte k_t = 84;
const byte k_u = 85;
const byte k_v = 86;
const byte k_w = 87;
const byte k_x = 88;
const byte k_y = 89;
const byte k_z = 90;
const byte k_lwin = 91;
const byte k_rwin = 92;
const byte k_apps = 93;
const byte k_sleep = 95;
const byte k_n0 = 96;
const byte k_n1 = 97;
const byte k_n2 = 98;
const byte k_n3 = 99;
const byte k_n4 = 100;
const byte k_n5 = 101;
const byte k_n6 = 102;
const byte k_n7 = 103;
const byte k_n8 = 104;
const byte k_n9 = 105;
const byte k_mul = 106;
const byte k_add = 107;
const byte k_sep = 108;
const byte k_sub = 109;
const byte k_dec = 110;
const byte k_div = 111;
const byte k_f1 = 112;
const byte k_f2 = 113;
const byte k_f3 = 114;
const byte k_f4 = 115;
const byte k_f5 = 116;
const byte k_f6 = 117;
const byte k_f7 = 118;
const byte k_f8 = 119;
const byte k_f9 = 120;
const byte k_f10 = 121;
const byte k_f11 = 122;
const byte k_f12 = 123;
const byte k_f13 = 124;
const byte k_f14 = 125;
const byte k_f15 = 126;
const byte k_f16 = 127;
const byte k_f17 = 128;
const byte k_f18 = 129;
const byte k_f19 = 130;
const byte k_f20 = 131;
const byte k_f21 = 132;
const byte k_f22 = 133;
const byte k_f23 = 134;
const byte k_f24 = 135;
const byte k_num = 144;
const byte k_scr = 145;
const byte k_lshift = 160;
const byte k_lctrl = 162;
const byte k_lalt = 164;
const byte k_rshift = 161;
const byte k_rctrl = 163;
const byte k_ralt = 165;

const double pi = 3.1415926535897932384626433832795028841971694;

const long maxchar = 0x100;                   //最大字符串长度
const long buffsize = 0x1000;                 //缓冲区大小
const long delaytimekey = 20;                 //默认按键时长      
const long delaytimedefault = 1;              //默认等待时长      
const long delaytimemin = 1;                  //默认最短等待时长
const long fontwidthdefault = 10;             //默认字体宽度      
const long fontheightdefault = 20;            //默认字体高度
const long minhz = 100;                       //最小频率      
const long maxhz = 15000;                     //最大频率
const long _bufmax = 0x100000;                //文件缓冲区大小
const long _thmax = 0x100;                    //最大线程数量
const long _mswinmax = 0x10000;               //窗口消息数目
const long _msusrmax = 0x10000;               //用户消息数目
const long _mscntmax = 0x10000;               //消息时间数目

long _w,_h,_x,_y;                 //窗口宽高坐标    
unsigned long _cbg,_cfg;          //窗口背前景颜色    
unsigned long _style;             //窗口样式
unsigned long _hw;                //窗口句柄    
unsigned long _dc;                //绘图句柄   
bitmap _main;                     //缓冲位图结构    
pbitmap _pmain;                   //缓冲位图指针    
bitmap _mscr;                     //屏幕位图结构    
pbitmap _pmscr;                   //屏幕位图指针
double _tbegin;                   //窗口建立时间    
bool _winb;                       //窗口状态    
unsigned long _pe;                //画笔    
unsigned long _br;                //画刷
unsigned long _fx,_fy;            //文字输出位置    
unsigned long _fw,_fh,_fwg;       //字体长宽粗细    
unsigned long _flt,_fud,_fsk,_fcs;//字体格式  
const char* _ffn;                 //字体名称    
unsigned long _fns;               //字体结构    
unsigned long _fnm=256;           //拖拽文件名长度    
const char* _fn;                  //拖拽文件名
unsigned long _cid;               //全局音频标识符    
unsigned long _cam=256;           //音频字符串长度    
const char* _ca;                  //音频字符串
unsigned long _fhdl;              //文件句柄    
unsigned long _fpos;              //文件指针位置    
unsigned long _flen;              //文件长度

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
