#define __STDC_WANT_LIB_EXT1__ 1
#include<string.h> 
#include<windows.h>
#include<math.h>
#include<time.h>
#ifndef max  
#define max(a,b)            (((a) > (b)) ? (a) : (b))  
#endif  
#ifndef min  
#define min(a,b)            (((a) < (b)) ? (a) : (b))  
#endif 
struct bitmap {
	unsigned long handle;
	unsigned long dc;
	unsigned long width;
	unsigned long height;
	unsigned long color;
};
typedef bitmap* pbitmap;
struct bitbuf {
	BITMAPINFO bmi;
	unsigned long len;
	void* buf;
	pbitmap bmp;
};
typedef bitbuf* pbitbuf;
class mystring
{
public:
	char s[256];
	char s0[256];
#ifdef __STDC_LIB_EXT1__
	mystring(const char* d) { strcpy_s(s, d); }
	mystring operator+(const char* d) { strcpy_s(s0, s); strcat_s(s0, d); return s0; }
#else
	mystring(const char* d) { strcpy(s, d); }
	mystring operator+(const char* d) { strcpy(s0, s); strcat(s0, d); return s0; }
#endif
	operator const char*() { return s; }
};
long random(long r){return ((rand()<<16)+(rand()<<1)+rand()%2)%r;}
void randomize(){srand(time(NULL));}