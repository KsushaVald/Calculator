#include <stdio.h>
#include <locale.h>
struct chislo{
 int r;
 int m;
};

struct chislo * summa( struct chislo a, struct chislo b)
{
 a.r=+b.r;
 a.m=+b.m;
 return (a);
}

struct chislo *raznost(struct chislo a, struct chislo b)
{
 a.r=-b.r;
 a.m=-b.m;
 return (a);
}

struct chislo *umnozhenie(struct chislo a, struct chislo b)
{
 if( (a.r==b.r) && (a.m*(-1)==b.m) ){
    a.r=a.r*b.r+a.m*b.m;
    a.m=0;
    return(a);
 }
 else{
      a.m=a.r*b.m+a.m*b.r;
      if(m1*m2<0)
         a.r=a.r*b.r+a.m*b.m;
      else
         a.r=a.r*b.r-a.m*b.m;
   return(a);
 }
}

/*struct chislo  delenie(struct chislo a, struct chislo b){
  int znam, chis;
  struct c;
  c.r=b.r;
  c.m=-1*b.m;
  chis=umnozhenie(a,c);
  znam=umnozhenie(b,c);

}*/

int main(){
 setlocale(LC_ALL, "Rus");
 int n=0;
 struct chislo a,b;
 while(n!=5){
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
       scanf("%d", a.r);
       scanf("%d", a.m);
       printf("Введите реальную и мнимую части 2-го числа: "); 
       scanf("%d", b.r);
       scanf("%d", b.m);
  }
  if(n==1){
    summa(a,b);
  }
  if(n==2){
   raznost(a,b);
  }
  if(n==3){
   umnozhenie(a,b);
  }
  if(n==4)
     umnozhenie(a,b);
     stract chislo c;
     c.r=b.r; c.m=-1*b*.m;
     umnozhenie(b,c);
 }
}
