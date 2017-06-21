#include <stdio.h>
#include <dlfcn.h>
#include <dirent.h>
#include "lib.h"
int main(){

    int n=0, k=0, dp, i, j=0;
    void **db;
    char **name; char prefix[3]="lib";
    struct chislo (*function)(struct chislo a, struct chislo b);
    struct chislo x,y;
    struct dirent *dir;
    dp=opendir("../plagin");

    while((dir=readdir(dp)!=NULL)){
        for(i=0; i<3; i++){
            if(dir->name[i]!=prefix[i])
                 break;
        }
        if(i==3)
            k++;
    }
    closedir(dir);
    name=malloc(k*sizeof(char*));
    db=malloc(k*sizeof(void*));
    for(i=0;i<k;i++){
        name[i]=malloc(sizeof(char)*20);
    }
    dp=opendir("../plagin");
    while((dir=readdir(dp)!=NULL)){
        for(i=0; i<3; i++){
            if(dir->name[i]!=prefix[i])
                 break;
        }
        if(i==3){
            dp[j]=dlopen(dir->name,RTLD_NOW);
            name[j]=dlsym(db,"name");
            j++;
        }
     }

    while(n!=5){
        system("clear");
        printf("Select the operation:\n");
        for(i=0; i<k; i++){
             printf("%d) %s\n",i, name[i]);
        }
        printf("%d)exit\n",k);
        scanf("%d", &n);
        if(n!=5){
             printf("Enter the real and imaginary parts of the 1st number:");
             scanf("%d",&x.r);
             scanf("%d",&x.m);
             printf("Enter the real and imaginary parts of the 2nd number:");
             scanf("%d",&y.r);
             scanf("%d",&y.m);
        }
/*  if(n==1){
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

