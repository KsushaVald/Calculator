#include <stdio.h>
#include "../lib/lib.h"

struct chislo summa( struct chislo a, struct chislo b)
{
  struct chislo c;
  c.r=a.r+b.r;
  c.m=a.m+b.m;
  return c;
}

