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
const long transparent = 0x000001;
const long black = 0x010101;
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
extern "C" unsigned long s2i4(const char* s);
extern "C" unsigned char as2i5(const char* s);
extern "C" char i2hc6(unsigned char i);
extern "C" unsigned char hc2i7(char c);
extern "C" const char* i2hs8(unsigned char i);
extern "C" unsigned char hs2i9(const char* s);
extern "C" const char* as2hs10(const char* s);
extern "C" const char* hs2as11(const char* s);
extern "C" const char* i2as12(unsigned long i);
extern "C" const char* i2hs13(unsigned long i);
extern "C" unsigned long NewThread14(void* th);
extern "C" void PauseThread15(unsigned long thi);
extern "C" void ResumeThread16(unsigned long thi);
extern "C" void StopThread17(unsigned long thi);
extern "C" unsigned long MsgBox18(const char* s,const char* title,unsigned long i);
extern "C" void MsgBox19(const char* s,const char* title);
extern "C" void MsgBox20(const char* s);
extern "C" void Delay21(unsigned long t);
extern "C" void Delay22();
extern "C" void Sound23(unsigned long hz,unsigned long t);
extern "C" void Sound24(unsigned long hz,double t);
extern "C" void Sound25(unsigned long hz);
extern "C" void FreshFPS26();
extern "C" void AddFPS27();
extern "C" unsigned long GetFPSL28();
extern "C" double GetFPSR29();
extern "C" unsigned long GetFPS30();
extern "C" unsigned long GetError31();
extern "C" void CreateWin32(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style);
extern "C" void CreateWin33(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg);
extern "C" void CreateWin34(unsigned long w,unsigned long h,unsigned long cbg);
extern "C" void CreateWin35(unsigned long w,unsigned long h);
extern "C" void CreateWin36(unsigned long cbg);
extern "C" void CreateWin37();
extern "C" void FreshWin38();
extern "C" void CloseWin39();
extern "C" bool IsWin40();
extern "C" void SetDrawProcedure41(void* th);
extern "C" void SetTitle42(const char* s);
extern "C" void SetSize43(unsigned long w,unsigned long h);
extern "C" const char* GetTitle44();
extern "C" double GetTimeR45();
extern "C" unsigned long GetTime46();
extern "C" unsigned long GetWidth47();
extern "C" unsigned long GetHeight48();
extern "C" unsigned long GetSize49();
extern "C" long GetScrWidth50();
extern "C" long GetScrHeight51();
extern "C" unsigned long GetScrSize52();
extern "C" long GetBorderTitle53();
extern "C" long GetBorderWidth54();
extern "C" long GetBorderHeight55();
extern "C" unsigned long GetBorderSize56();
extern "C" long GetPosX57();
extern "C" long GetPosY58();
extern "C" unsigned long GetHwnd59();
extern "C" unsigned long GetDraw60();
extern "C" unsigned long GetBGColor61();
extern "C" void SetBGColor62(unsigned long c);
extern "C" unsigned long GetFGColor63();
extern "C" void SetFGColor64(unsigned long c);
extern "C" void SetPenColor65(pbitmap b,unsigned long c);
extern "C" void SetBrushColor66(pbitmap b,unsigned long c);
extern "C" unsigned char GetBlue67(unsigned long c);
extern "C" unsigned char GetGreen68(unsigned long c);
extern "C" unsigned char GetRed69(unsigned long c);
extern "C" unsigned char GetAlpha70(unsigned long c);
extern "C" unsigned long GetRGB71(unsigned char r,unsigned char g,unsigned char b);
extern "C" unsigned long GetRGBA72(unsigned char r,unsigned char g,unsigned char b,unsigned char a);
extern "C" void SetFont73(pbitmap b);
extern "C" void SetFont74();
extern "C" void SetFontWidth75(unsigned long w);
extern "C" void SetFontHeight76(unsigned long h);
extern "C" void SetFontSize77(unsigned long w,unsigned long h);
extern "C" void SetFontWeight78(unsigned long wg);
extern "C" void SetFontLtalic79(unsigned long lt);
extern "C" void SetFontUnderLine80(unsigned long ud);
extern "C" void SetFontStrikeOut81(unsigned long sk);
extern "C" void SetFontCharSet82(unsigned long cs);
extern "C" void SetFontName83(const char* s);
extern "C" void GetStringSize84(const char* s);
extern "C" unsigned long GetStringWidth85(const char* s);
extern "C" unsigned long GetStringHeight86(const char* s);
extern "C" void DrawTextXY87(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY88(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextXY89(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXY90(const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextXY91(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawText92(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawText93(const char* s,unsigned long cfg);
extern "C" void DrawText94(const char* s);
extern "C" void DrawTextlnXY95(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXY96(const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextlnXY97(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextln98(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextln99(const char* s,unsigned long cfg);
extern "C" void DrawTextln100(const char* s);
extern "C" void DrawTextln101();
extern "C" void DrawTextXYw102(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw103(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextXYw104(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextXYw105(const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextXYw106(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextw107(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextw108(const char* s,unsigned long cfg);
extern "C" void DrawTextw109(const char* s);
extern "C" void DrawTextlnXYw110(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnXYw111(const char* s,unsigned long x,unsigned long y,unsigned long cfg);
extern "C" void DrawTextlnXYw112(const char* s,unsigned long x,unsigned long y);
extern "C" void DrawTextlnw113(const char* s,unsigned long cfg,unsigned long cbg);
extern "C" void DrawTextlnw114(const char* s,unsigned long cfg);
extern "C" void DrawTextlnw115(const char* s);
extern "C" unsigned long GetPixel116(pbitmap b,unsigned long x,unsigned long y);
extern "C" unsigned long GetPixel117(unsigned long x,unsigned long y);
extern "C" void SetPixel118(pbitmap b,unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel119(unsigned long x,unsigned long y,unsigned long c);
extern "C" void SetPixel120(unsigned long x,unsigned long y);
extern "C" void Line121(pbitmap b,long x,long y,long w,long h,unsigned long c);
extern "C" void Line122(pbitmap b,long x,long y,long w,long h);
extern "C" void Line123(long x,long y,long w,long h,unsigned long c);
extern "C" void Line124(long x,long y,long w,long h);
extern "C" void Bar125(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar126(pbitmap b,long x,long y,long w,long h,unsigned long cbg);
extern "C" void Bar127(pbitmap b,long x,long y,long w,long h);
extern "C" void Bar128(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg);
extern "C" void Bar129(long x,long y,long w,long h,unsigned long cbg);
extern "C" void Bar130(long x,long y,long w,long h);
extern "C" void Clear131(pbitmap b,unsigned long c);
extern "C" void Clear132(pbitmap b);
extern "C" void Clear133(unsigned long c);
extern "C" void Clear134();
extern "C" void Arc135(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc136(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Arc137(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Arc138(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Pie139(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie140(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Pie141(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Pie142(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Chord143(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord144(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg);
extern "C" void Chord145(long x,long y,long rx,long ry,double sa,double ea,unsigned long c);
extern "C" void Chord146(long x,long y,long rx,long ry,double sa,double ea);
extern "C" void Ellipse147(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse148(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg);
extern "C" void Ellipse149(long x,long y,long rx,long ry,unsigned long c);
extern "C" void Ellipse150(long x,long y,long rx,long ry);
extern "C" void Circle151(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle152(long x,long y,long r,unsigned long cfg,unsigned long cbg);
extern "C" void Circle153(long x,long y,long r,unsigned long c);
extern "C" void Circle154(long x,long y,long r);
extern "C" pbitmap CreateBMP155(pbitmap b,unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP156(pbitmap b);
extern "C" pbitmap CreateBMP157(unsigned long w,unsigned long h,unsigned long c);
extern "C" pbitmap CreateBMP158(unsigned long w,unsigned long h);
extern "C" pbitmap CreateBMP159();
extern "C" void ReleaseBMP160(pbitmap b);
extern "C" void ReleaseBMP161();
extern "C" pbitmap LoadBMP162(const char* s,unsigned long c);
extern "C" pbitmap LoadBMP163(const char* s);
extern "C" void SaveBMP164(pbitmap b,const char* s);
extern "C" void DrawBMP165(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP166(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP167(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP168(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP169(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP170(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP171(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP172(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP173(pbitmap bs,pbitmap bd,unsigned long c);
extern "C" void DrawBMP174(pbitmap bs,pbitmap bd);
extern "C" void DrawBMP175(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP176(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP177(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP178(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP179(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP180(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP181(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP182(pbitmap bs,unsigned long xd,unsigned long yd);
extern "C" void DrawBMP183(pbitmap bs,unsigned long c);
extern "C" void DrawBMP184(pbitmap bs);
extern "C" void DrawBMP185(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP186(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP187(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c);
extern "C" void DrawBMP188(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h);
extern "C" void DrawBMP189(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c);
extern "C" void DrawBMP190(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd);
extern "C" void DrawBMP191(unsigned long xd,unsigned long yd,unsigned long c);
extern "C" void DrawBMP192(unsigned long xd,unsigned long yd);
extern "C" void DrawBMP193(unsigned long c);
extern "C" void DrawBMP194();
extern "C" void PressKey195(unsigned char k,unsigned long t);
extern "C" void PressKey196(unsigned char k);
extern "C" void DownKey197(unsigned char k);
extern "C" void UpKey198(unsigned char k);
extern "C" void PressMouse199(unsigned char m,unsigned long t);
extern "C" void PressMouse200(unsigned char m);
extern "C" void DownMouse201(unsigned char m);
extern "C" void UpMouse202(unsigned char m);
extern "C" void WheelMouse203(long wl);
extern "C" void MoveMouse204(long x,long y);
extern "C" void MoveMouseAbs205(long x,long y);
extern "C" void MoveMouseWin206(long x,long y);
extern "C" void MoveMousePos207(long x,long y);
extern "C" void SendMsg208();
extern "C" bool IsNextMsg209();
extern "C" unsigned long GetNextMsg210();
extern "C" unsigned long WaitNextMsg211();
extern "C" bool IsMsg212(unsigned long uM);
extern "C" long long GetMsg213(unsigned long uM);
extern "C" long long WaitMsg214(unsigned long uM);
extern "C" bool IsKey215(unsigned long k);
extern "C" bool IsKey216();
extern "C" unsigned long GetKey217();
extern "C" unsigned long WaitKey218(unsigned long k);
extern "C" unsigned long WaitKey219();
extern "C" bool IsMouse220(unsigned long m);
extern "C" bool IsMouse221();
extern "C" unsigned long GetMouse222();
extern "C" unsigned long WaitMouse223(unsigned long m);
extern "C" unsigned long WaitMouse224();
extern "C" bool IsMouseLeft225();
extern "C" void WaitMouseLeft226();
extern "C" bool IsMouseMiddle227();
extern "C" void WaitMouseMiddle228();
extern "C" bool IsMouseRight229();
extern "C" void WaitMouseRight230();
extern "C" bool IsMouseWheel231();
extern "C" long GetMouseWheel232();
extern "C" void WaitMouseWheel233();
extern "C" bool IsMouseMove234();
extern "C" unsigned long GetMouseMove235();
extern "C" unsigned long WaitMouseMove236();
extern "C" bool IsDropFile237();
extern "C" const char* GetDropFile238();
extern "C" const char* WaitDropFile239();
extern "C" long GetMouseAbsX240();
extern "C" long GetMouseAbsY241();
extern "C" long GetMouseWinX242();
extern "C" long GetMouseWinY243();
extern "C" long GetMousePosX244();
extern "C" long GetMousePosY245();
extern "C" unsigned long LoadAudio246(const char* s);
extern "C" void PlayAudio247(unsigned long id,const char* s,bool b);
extern "C" void PlayAudio248(unsigned long id,const char* s);
extern "C" void PlayAudio249(unsigned long id,bool b);
extern "C" void PlayAudio250(unsigned long id);
extern "C" void StopAudio251(unsigned long id);
extern "C" void PauseAudio252(unsigned long id);
extern "C" void ResumeAudio253(unsigned long id);
extern "C" void ReleaseAudio254(unsigned long id);
extern "C" unsigned long GetAudioVol255(unsigned long id);
extern "C" void SetAudioVol256(unsigned long id,unsigned long v);
extern "C" unsigned long GetAudioPos257(unsigned long id);
extern "C" void SetAudioPos258(unsigned long id,unsigned long pos,bool b);
extern "C" void SetAudioPos259(unsigned long id,unsigned long pos);
extern "C" unsigned long GetAudioLen260(unsigned long id);
extern "C" bool IsFile261(const char* s);
extern "C" bool NewFile262(const char* s);
extern "C" bool NewDir263(const char* s);
extern "C" bool CopyFile264(const char* src,const char* des);
extern "C" bool MoveFile265(const char* src,const char* des);
extern "C" bool DeleteFile266(const char* s);
extern "C" void OpenFile267(const char* s);
extern "C" void CloseFile268();
extern "C" unsigned long GetFileLen269();
extern "C" unsigned long GetFilePos270();
extern "C" void SetFilePos271(unsigned long pos);
extern "C" unsigned char GetByte272();
extern "C" unsigned short GetWord273();
extern "C" unsigned long GetLongword274();
extern "C" unsigned long GetInteger275();
extern "C" const char* GetPchar276();
extern "C" const char* GetString277(unsigned long len);

double arcsin(double x){return arcsin1(x);}
double arccos(double x){return arccos2(x);}
mystring i2s(long i){return i2s3(i);}
unsigned long s2i(const char* s){return s2i4(s);}
unsigned char as2i(const char* s){return as2i5(s);}
char i2hc(unsigned char i){return i2hc6(i);}
unsigned char hc2i(char c){return hc2i7(c);}
mystring i2hs(unsigned char i){return i2hs8(i);}
unsigned char hs2i(const char* s){return hs2i9(s);}
mystring as2hs(const char* s){return as2hs10(s);}
mystring hs2as(const char* s){return hs2as11(s);}
mystring i2as(unsigned long i){return i2as12(i);}
mystring i2hs(unsigned long i){return i2hs13(i);}
unsigned long newthread(void* th){return NewThread14(th);}
void pausethread(unsigned long thi){PauseThread15(thi);}
void resumethread(unsigned long thi){ResumeThread16(thi);}
void stopthread(unsigned long thi){StopThread17(thi);}
unsigned long msgbox(const char* s,const char* title,unsigned long i){return MsgBox18(s,title,i);}
void msgbox(const char* s,const char* title){MsgBox19(s,title);}
void msgbox(const char* s){MsgBox20(s);}
void delay(unsigned long t){Delay21(t);}
void delay(){Delay22();}
void sound(unsigned long hz,unsigned long t){Sound23(hz,t);}
void sound(unsigned long hz,double t){Sound24(hz,t);}
void sound(unsigned long hz){Sound25(hz);}
void freshfps(){FreshFPS26();}
void addfps(){AddFPS27();}
unsigned long getfpsl(){return GetFPSL28();}
double getfpsr(){return GetFPSR29();}
unsigned long getfps(){return GetFPS30();}
unsigned long geterror(){return GetError31();}
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg,unsigned long style){CreateWin32(w,h,cfg,cbg,style);}
void createwin(unsigned long w,unsigned long h,unsigned long cfg,unsigned long cbg){CreateWin33(w,h,cfg,cbg);}
void createwin(unsigned long w,unsigned long h,unsigned long cbg){CreateWin34(w,h,cbg);}
void createwin(unsigned long w,unsigned long h){CreateWin35(w,h);}
void createwin(unsigned long cbg){CreateWin36(cbg);}
void createwin(){CreateWin37();}
void freshwin(){FreshWin38();}
void closewin(){CloseWin39();}
bool iswin(){return IsWin40();}
void setdrawprocedure(void* th){SetDrawProcedure41(th);}
void settitle(const char* s){SetTitle42(s);}
void setsize(unsigned long w,unsigned long h){SetSize43(w,h);}
mystring gettitle(){return GetTitle44();}
double gettimer(){return GetTimeR45();}
unsigned long gettime(){return GetTime46();}
unsigned long getwidth(){return GetWidth47();}
unsigned long getheight(){return GetHeight48();}
unsigned long getsize(){return GetSize49();}
long getscrwidth(){return GetScrWidth50();}
long getscrheight(){return GetScrHeight51();}
unsigned long getscrsize(){return GetScrSize52();}
long getbordertitle(){return GetBorderTitle53();}
long getborderwidth(){return GetBorderWidth54();}
long getborderheight(){return GetBorderHeight55();}
unsigned long getbordersize(){return GetBorderSize56();}
long getposx(){return GetPosX57();}
long getposy(){return GetPosY58();}
unsigned long gethwnd(){return GetHwnd59();}
unsigned long getdraw(){return GetDraw60();}
unsigned long getbgcolor(){return GetBGColor61();}
void setbgcolor(unsigned long c){SetBGColor62(c);}
unsigned long getfgcolor(){return GetFGColor63();}
void setfgcolor(unsigned long c){SetFGColor64(c);}
void setpencolor(pbitmap b,unsigned long c){SetPenColor65(b,c);}
void setbrushcolor(pbitmap b,unsigned long c){SetBrushColor66(b,c);}
unsigned char getblue(unsigned long c){return GetBlue67(c);}
unsigned char getgreen(unsigned long c){return GetGreen68(c);}
unsigned char getred(unsigned long c){return GetRed69(c);}
unsigned char getalpha(unsigned long c){return GetAlpha70(c);}
unsigned long getrgb(unsigned char r,unsigned char g,unsigned char b){return GetRGB71(r,g,b);}
unsigned long getrgba(unsigned char r,unsigned char g,unsigned char b,unsigned char a){return GetRGBA72(r,g,b,a);}
void setfont(pbitmap b){SetFont73(b);}
void setfont(){SetFont74();}
void setfontwidth(unsigned long w){SetFontWidth75(w);}
void setfontheight(unsigned long h){SetFontHeight76(h);}
void setfontsize(unsigned long w,unsigned long h){SetFontSize77(w,h);}
void setfontweight(unsigned long wg){SetFontWeight78(wg);}
void setfontltalic(unsigned long lt){SetFontLtalic79(lt);}
void setfontunderline(unsigned long ud){SetFontUnderLine80(ud);}
void setfontstrikeout(unsigned long sk){SetFontStrikeOut81(sk);}
void setfontcharset(unsigned long cs){SetFontCharSet82(cs);}
void setfontname(const char* s){SetFontName83(s);}
void getstringsize(const char* s){GetStringSize84(s);}
unsigned long getstringwidth(const char* s){return GetStringWidth85(s);}
unsigned long getstringheight(const char* s){return GetStringHeight86(s);}
void drawtextxy(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXY87(b,s,x,y,cfg,cbg);}
void drawtextxy(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextXY88(b,s,x,y,cfg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXY89(s,x,y,cfg,cbg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextXY90(s,x,y,cfg);}
void drawtextxy(const char* s,unsigned long x,unsigned long y){DrawTextXY91(s,x,y);}
void drawtext(const char* s,unsigned long cfg,unsigned long cbg){DrawText92(s,cfg,cbg);}
void drawtext(const char* s,unsigned long cfg){DrawText93(s,cfg);}
void drawtext(const char* s){DrawText94(s);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextlnXY95(s,x,y,cfg,cbg);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextlnXY96(s,x,y,cfg);}
void drawtextlnxy(const char* s,unsigned long x,unsigned long y){DrawTextlnXY97(s,x,y);}
void drawtextln(const char* s,unsigned long cfg,unsigned long cbg){DrawTextln98(s,cfg,cbg);}
void drawtextln(const char* s,unsigned long cfg){DrawTextln99(s,cfg);}
void drawtextln(const char* s){DrawTextln100(s);}
void drawtextln(){DrawTextln101();}
void drawtextxyw(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXYw102(b,s,x,y,cfg,cbg);}
void drawtextxyw(pbitmap b,const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextXYw103(b,s,x,y,cfg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextXYw104(s,x,y,cfg,cbg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextXYw105(s,x,y,cfg);}
void drawtextxyw(const char* s,unsigned long x,unsigned long y){DrawTextXYw106(s,x,y);}
void drawtextw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextw107(s,cfg,cbg);}
void drawtextw(const char* s,unsigned long cfg){DrawTextw108(s,cfg);}
void drawtextw(const char* s){DrawTextw109(s);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg,unsigned long cbg){DrawTextlnXYw110(s,x,y,cfg,cbg);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y,unsigned long cfg){DrawTextlnXYw111(s,x,y,cfg);}
void drawtextlnxyw(const char* s,unsigned long x,unsigned long y){DrawTextlnXYw112(s,x,y);}
void drawtextlnw(const char* s,unsigned long cfg,unsigned long cbg){DrawTextlnw113(s,cfg,cbg);}
void drawtextlnw(const char* s,unsigned long cfg){DrawTextlnw114(s,cfg);}
void drawtextlnw(const char* s){DrawTextlnw115(s);}
unsigned long getpixel(pbitmap b,unsigned long x,unsigned long y){return GetPixel116(b,x,y);}
unsigned long getpixel(unsigned long x,unsigned long y){return GetPixel117(x,y);}
void setpixel(pbitmap b,unsigned long x,unsigned long y,unsigned long c){SetPixel118(b,x,y,c);}
void setpixel(unsigned long x,unsigned long y,unsigned long c){SetPixel119(x,y,c);}
void setpixel(unsigned long x,unsigned long y){SetPixel120(x,y);}
void line(pbitmap b,long x,long y,long w,long h,unsigned long c){Line121(b,x,y,w,h,c);}
void line(pbitmap b,long x,long y,long w,long h){Line122(b,x,y,w,h);}
void line(long x,long y,long w,long h,unsigned long c){Line123(x,y,w,h,c);}
void line(long x,long y,long w,long h){Line124(x,y,w,h);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar125(b,x,y,w,h,cfg,cbg);}
void bar(pbitmap b,long x,long y,long w,long h,unsigned long cbg){Bar126(b,x,y,w,h,cbg);}
void bar(pbitmap b,long x,long y,long w,long h){Bar127(b,x,y,w,h);}
void bar(long x,long y,long w,long h,unsigned long cfg,unsigned long cbg){Bar128(x,y,w,h,cfg,cbg);}
void bar(long x,long y,long w,long h,unsigned long cbg){Bar129(x,y,w,h,cbg);}
void bar(long x,long y,long w,long h){Bar130(x,y,w,h);}
void clear(pbitmap b,unsigned long c){Clear131(b,c);}
void clear(pbitmap b){Clear132(b);}
void clear(unsigned long c){Clear133(c);}
void clear(){Clear134();}
void arc(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc135(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Arc136(x,y,rx,ry,sa,ea,cfg,cbg);}
void arc(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Arc137(x,y,rx,ry,sa,ea,c);}
void arc(long x,long y,long rx,long ry,double sa,double ea){Arc138(x,y,rx,ry,sa,ea);}
void pie(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie139(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Pie140(x,y,rx,ry,sa,ea,cfg,cbg);}
void pie(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Pie141(x,y,rx,ry,sa,ea,c);}
void pie(long x,long y,long rx,long ry,double sa,double ea){Pie142(x,y,rx,ry,sa,ea);}
void chord(pbitmap b,long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord143(b,x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long cfg,unsigned long cbg){Chord144(x,y,rx,ry,sa,ea,cfg,cbg);}
void chord(long x,long y,long rx,long ry,double sa,double ea,unsigned long c){Chord145(x,y,rx,ry,sa,ea,c);}
void chord(long x,long y,long rx,long ry,double sa,double ea){Chord146(x,y,rx,ry,sa,ea);}
void ellipse(pbitmap b,long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse147(b,x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long cfg,unsigned long cbg){Ellipse148(x,y,rx,ry,cfg,cbg);}
void ellipse(long x,long y,long rx,long ry,unsigned long c){Ellipse149(x,y,rx,ry,c);}
void ellipse(long x,long y,long rx,long ry){Ellipse150(x,y,rx,ry);}
void circle(pbitmap b,long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle151(b,x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long cfg,unsigned long cbg){Circle152(x,y,r,cfg,cbg);}
void circle(long x,long y,long r,unsigned long c){Circle153(x,y,r,c);}
void circle(long x,long y,long r){Circle154(x,y,r);}
pbitmap createbmp(pbitmap b,unsigned long w,unsigned long h,unsigned long c){return CreateBMP155(b,w,h,c);}
pbitmap createbmp(pbitmap b){return CreateBMP156(b);}
pbitmap createbmp(unsigned long w,unsigned long h,unsigned long c){return CreateBMP157(w,h,c);}
pbitmap createbmp(unsigned long w,unsigned long h){return CreateBMP158(w,h);}
pbitmap createbmp(){return CreateBMP159();}
void releasebmp(pbitmap b){ReleaseBMP160(b);}
void releasebmp(){ReleaseBMP161();}
pbitmap loadbmp(const char* s,unsigned long c){return LoadBMP162(s,c);}
pbitmap loadbmp(const char* s){return LoadBMP163(s);}
void savebmp(pbitmap b,const char* s){SaveBMP164(b,s);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP165(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP166(bs,bd,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP167(bs,bd,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP168(bs,bd,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP169(bs,bd,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP170(bs,bd,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP171(bs,bd,xd,yd,c);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long xd,unsigned long yd){DrawBMP172(bs,bd,xd,yd);}
void drawbmp(pbitmap bs,pbitmap bd,unsigned long c){DrawBMP173(bs,bd,c);}
void drawbmp(pbitmap bs,pbitmap bd){DrawBMP174(bs,bd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP175(bs,xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP176(bs,xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP177(bs,xs,ys,xd,yd,w,h,c);}
void drawbmp(pbitmap bs,unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP178(bs,xs,ys,xd,yd,w,h);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP179(bs,xd,yd,wd,hd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP180(bs,xd,yd,wd,hd);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd,unsigned long c){DrawBMP181(bs,xd,yd,c);}
void drawbmp(pbitmap bs,unsigned long xd,unsigned long yd){DrawBMP182(bs,xd,yd);}
void drawbmp(pbitmap bs,unsigned long c){DrawBMP183(bs,c);}
void drawbmp(pbitmap bs){DrawBMP184(bs);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP185(xs,ys,ws,hs,xd,yd,wd,hd,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long ws,unsigned long hs,unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP186(xs,ys,ws,hs,xd,yd,wd,hd);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h,unsigned long c){DrawBMP187(xs,ys,xd,yd,w,h,c);}
void drawbmp(unsigned long xs,unsigned long ys,unsigned long xd,unsigned long yd,unsigned long w,unsigned long h){DrawBMP188(xs,ys,xd,yd,w,h);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd,unsigned long c){DrawBMP189(xd,yd,wd,hd,c);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long wd,unsigned long hd){DrawBMP190(xd,yd,wd,hd);}
void drawbmp(unsigned long xd,unsigned long yd,unsigned long c){DrawBMP191(xd,yd,c);}
void drawbmp(unsigned long xd,unsigned long yd){DrawBMP192(xd,yd);}
void drawbmp(unsigned long c){DrawBMP193(c);}
void drawbmp(){DrawBMP194();}
void presskey(unsigned char k,unsigned long t){PressKey195(k,t);}
void presskey(unsigned char k){PressKey196(k);}
void downkey(unsigned char k){DownKey197(k);}
void upkey(unsigned char k){UpKey198(k);}
void pressmouse(unsigned char m,unsigned long t){PressMouse199(m,t);}
void pressmouse(unsigned char m){PressMouse200(m);}
void downmouse(unsigned char m){DownMouse201(m);}
void upmouse(unsigned char m){UpMouse202(m);}
void wheelmouse(long wl){WheelMouse203(wl);}
void movemouse(long x,long y){MoveMouse204(x,y);}
void movemouseabs(long x,long y){MoveMouseAbs205(x,y);}
void movemousewin(long x,long y){MoveMouseWin206(x,y);}
void movemousepos(long x,long y){MoveMousePos207(x,y);}
void sendmsg(){SendMsg208();}
bool isnextmsg(){return IsNextMsg209();}
unsigned long getnextmsg(){return GetNextMsg210();}
unsigned long waitnextmsg(){return WaitNextMsg211();}
bool ismsg(unsigned long uM){return IsMsg212(uM);}
long long getmsg(unsigned long uM){return GetMsg213(uM);}
long long waitmsg(unsigned long uM){return WaitMsg214(uM);}
bool iskey(unsigned long k){return IsKey215(k);}
bool iskey(){return IsKey216();}
unsigned long getkey(){return GetKey217();}
unsigned long waitkey(unsigned long k){return WaitKey218(k);}
unsigned long waitkey(){return WaitKey219();}
bool ismouse(unsigned long m){return IsMouse220(m);}
bool ismouse(){return IsMouse221();}
unsigned long getmouse(){return GetMouse222();}
unsigned long waitmouse(unsigned long m){return WaitMouse223(m);}
unsigned long waitmouse(){return WaitMouse224();}
bool ismouseleft(){return IsMouseLeft225();}
void waitmouseleft(){WaitMouseLeft226();}
bool ismousemiddle(){return IsMouseMiddle227();}
void waitmousemiddle(){WaitMouseMiddle228();}
bool ismouseright(){return IsMouseRight229();}
void waitmouseright(){WaitMouseRight230();}
bool ismousewheel(){return IsMouseWheel231();}
long getmousewheel(){return GetMouseWheel232();}
void waitmousewheel(){WaitMouseWheel233();}
bool ismousemove(){return IsMouseMove234();}
unsigned long getmousemove(){return GetMouseMove235();}
unsigned long waitmousemove(){return WaitMouseMove236();}
bool isdropfile(){return IsDropFile237();}
mystring getdropfile(){return GetDropFile238();}
mystring waitdropfile(){return WaitDropFile239();}
long getmouseabsx(){return GetMouseAbsX240();}
long getmouseabsy(){return GetMouseAbsY241();}
long getmousewinx(){return GetMouseWinX242();}
long getmousewiny(){return GetMouseWinY243();}
long getmouseposx(){return GetMousePosX244();}
long getmouseposy(){return GetMousePosY245();}
unsigned long loadaudio(const char* s){return LoadAudio246(s);}
void playaudio(unsigned long id,const char* s,bool b){PlayAudio247(id,s,b);}
void playaudio(unsigned long id,const char* s){PlayAudio248(id,s);}
void playaudio(unsigned long id,bool b){PlayAudio249(id,b);}
void playaudio(unsigned long id){PlayAudio250(id);}
void stopaudio(unsigned long id){StopAudio251(id);}
void pauseaudio(unsigned long id){PauseAudio252(id);}
void resumeaudio(unsigned long id){ResumeAudio253(id);}
void releaseaudio(unsigned long id){ReleaseAudio254(id);}
unsigned long getaudiovol(unsigned long id){return GetAudioVol255(id);}
void setaudiovol(unsigned long id,unsigned long v){SetAudioVol256(id,v);}
unsigned long getaudiopos(unsigned long id){return GetAudioPos257(id);}
void setaudiopos(unsigned long id,unsigned long pos,bool b){SetAudioPos258(id,pos,b);}
void setaudiopos(unsigned long id,unsigned long pos){SetAudioPos259(id,pos);}
unsigned long getaudiolen(unsigned long id){return GetAudioLen260(id);}
bool isfile(const char* s){return IsFile261(s);}
bool newfile(const char* s){return NewFile262(s);}
bool newdir(const char* s){return NewDir263(s);}
bool copyfile(const char* src,const char* des){return CopyFile264(src,des);}
bool movefile(const char* src,const char* des){return MoveFile265(src,des);}
bool deletefile(const char* s){return DeleteFile266(s);}
void openfile(const char* s){OpenFile267(s);}
void closefile(){CloseFile268();}
unsigned long getfilelen(){return GetFileLen269();}
unsigned long getfilepos(){return GetFilePos270();}
void setfilepos(unsigned long pos){SetFilePos271(pos);}
unsigned char getbyte(){return GetByte272();}
unsigned short getword(){return GetWord273();}
unsigned long getlongword(){return GetLongword274();}
unsigned long getinteger(){return GetInteger275();}
const char* getpchar(){return GetPchar276();}
mystring getstring(unsigned long len){return GetString277(len);}
