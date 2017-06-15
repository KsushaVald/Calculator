#include <stdio.h>
#include "lib.h"

struct chislo summa( struct chislo a, struct chislo b)
{
  struct chislo c;
  c.r=a.r+b.r;
  c.m=a.m+b.m;
  return c;
}

struct chislo raznost(struct chislo a, struct chislo b)
{
   struct chislo c;
   c.r=a.r-b.r;
   c.m=a.m-b.m;
   return c;
}

struct chislo umnozhenie(struct chislo a, struct chislo b)
{
  struct chislo c;
  if( (a.r==b.r) && (a.m*(-1)==b.m) ){
    c.r=a.r*b.r+a.m*b.m;
    c.m=0;
    return c;
 }
 else{
      c.m=a.r*b.m+a.m*b.r;
      if(a.m*b.m<0)
         c.r=a.r*b.r+a.m*b.m;
      else
         c.r=a.r*b.r-a.m*b.m;
   return c;
 }
}

