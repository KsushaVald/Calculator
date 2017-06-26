#include <stdio.h>
#include "../lib/lib.h"

char f_name[9]="division\0";

struct chislo division (struct chislo a, struct chislo b)
{
    struct chislo c;
    struct chislo ch;
    struct chislo zn;
    zn.r=b.r*b.r+b.m*b.m;
    zn.m=0;
    ch.m=a.r*b.m+a.m*b.r;
    if(a.m*(-1)*b.m<0)
         ch.r=a.r*b.r+(-1)*a.m*b.m;
    else
         ch.r=a.r*b.r-(-1)*a.m*b.m;
   c.r=ch.r/zn.r; c.m=ch.m/zn.r;
   return c;
}
