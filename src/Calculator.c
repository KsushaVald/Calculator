#include <stdio.h>
#include <dlfcn.h>
#include <dirent.h>
#include <malloc.h>
#include "../lib/lib.h"
int main(){

    int n=0, k=0, i, j=0;
    DIR *dp;
    void **db;
    char **name; char prefix[3]="lib";
    struct chislo (*function)(struct chislo a, struct chislo b);
    struct chislo x,y,c;
    struct dirent *dir;
    dp=opendir("../plagin");

    while((dir=readdir(dp))!=NULL){
        for(i=0; i<3; i++){
            if(dir->d_name[i]!=prefix[i])
                 break;
        }
        if(i==3)
            k++;
    }
    closedir(dp);
    name=malloc(k*sizeof(char*));
    db=malloc(k*sizeof(void*));
    for(i=0;i<k;i++){
        name[i]=malloc(sizeof(char)*30);
    }
    dp=opendir("../plagin");
    while((dir=readdir(dp))!=NULL){
        for(i=0; i<3; i++){
            if(dir->d_name[i]!=prefix[i])
                 break;
        }
        if(i==3){
            db[j]=dlopen(dir->d_name,RTLD_NOW);
            name[j]=dlsym(db,"name");
            j++;
        }
     }

    while(n!=5){
        system("clear");
        printf("Select the operation:\n");
        for(i=0; i<k; i++){
             printf("%d) %s\n",i+1, name[i]);
        }
        printf("%d)exit\n",k+1);
        scanf("%d", &n);
        if(n!=k+1){
             printf("Enter the real and imaginary parts of the 1st number:");
             scanf("%lf",&x.r);
             scanf("%lf",&x.m);
             printf("Enter the real and imaginary parts of the 2nd number:");
             scanf("%lf",&y.r);
             scanf("%lf",&y.m);
        }
        function=dlsym(db[n-1],name[n-1]);
        c=(*function)(x,y);
        if(c.m>0)
             printf("%lf+%lfi", c.r,c.m);
        else
             printf("%lf%lfi", c.r,c.m);
       printf("Will we continue?\n");
       printf("1)Yes\n");
       printf("%d)No\n",k+1);
       scanf("%d",&n);
    }
    dlclose(db);
    closedir(dp);
}
