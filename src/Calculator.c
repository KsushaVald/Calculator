#include <stdio.h>
#include <locale.h>
#include <dlfcn.h>
#include <dirent.h>
#include "lib.h"
int main(){
 setlocale(LC_ALL, "Rus");
 int n=0, k=0, dp;
 void *db;
 char **name;
 struct chislo (*function)(struct chislo a, struct chislo b);
 struct chislo x,y;
 struct dirent *dir;
 dp=opendir("../plagin");
 while((dir=readdir(dp)!=NULL)){
     k++;
 }
/* while(n!=5){
  system("clear");
  printf("Выбирете операцию:\n");
  for(){
  }
  scanf("%d", &n);
  if(n!=5){
       printf("Введите реальную и мнимую части 1-го числа: ");
       scanf("%d",&x.r);
       scanf("%d",&x.m);
       printf("Введите реальную и мнимую части 2-го числа: ");
       scanf("%d",&y.r);
       scanf("%d",&y.m);
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
 }*/
}

