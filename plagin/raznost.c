#include <stdio.h>
#include "../lib/lib.h"

char f_name[12]="subtraction\0";

struct chislo subtraction(struct chislo a, struct chislo b)
{
   struct chislo c;
   c.r=a.r-b.r;
   c.m=a.m-b.m;
   return c;
}

