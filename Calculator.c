#include <stdio.h>
#include <locale.h>
#include "lib.h"
int main(){
 setlocale(LC_ALL, "Rus");
 int n=0;
 struct chislo a,b;
 while(n!=5){
  system("clear");
  printf("Введите реальную и мнимую части 1-го слагаемого: ");
  printf("Выбирете операцию:\n");
  printf("1)сложение\n");
  printf("2)вычитание\n");
  printf("3)умножение\n");
  printf("4)деление\n");
  printf("5)выход\n");
  scanf("%d", &n);
  if(n!=5){
       printf("Введите реальную и мнимую части 1-го числа: ");
       scanf("%d",&a.r);
       scanf("%d",&a.m);
       printf("Введите реальную и мнимую части 2-го числа: "); 
       scanf("%d",&b.r);
       scanf("%d",&b.m);
  }
  if(n==1){
   struct chislo c;
    c=summa(a,b);
  if(c.m>0)
    printf("%d+%di", c.r,c.m);
  else
    printf("%d%di", c.r,c.m);
  }
  if(n==2){
   struct chislo c;
   c=raznost(a,b);
  if(c.m>0)
    printf("%d+%di", c.r,c.m);
  else
    printf("%d%di", c.r,c.m);

  }
  if(n==3){
   struct chislo c;
   c=umnozhenie(a,b);
  if(c.m>0)
    printf("%d+%di", c.r,c.m);
  else
    printf("%d%di", c.r,c.m);
  }
  if(n==4){
   struct chislo c;
   struct chislo ch;
   struct chislo zn;
    c.r=b.r; c.m=-1*b.m;
    ch=umnozhenie(a,c);
    zn=umnozhenie(b,c);
  if(ch.m>0)
    printf("(%d+%di)/%d", ch.r,ch.m,zn.r);
  else
    printf("(%d%di)", ch.r,ch.m, zn.r);
  }
 }
}

