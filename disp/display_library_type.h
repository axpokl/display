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