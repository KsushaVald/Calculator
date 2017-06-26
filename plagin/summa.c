#include <stdio.h>
#include "../lib/lib.h"

char f_name[4]="sum\0";

struct chislo sum( struct chislo a, struct chislo b)
{
  struct chislo c;
  c.r=a.r+b.r;
  c.m=a.m+b.m;
  return c;
}

