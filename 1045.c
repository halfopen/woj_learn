#include<stdio.h>
#include<ctype.h>
main(){
    int i=0,t,m;
    char s[10000],n;
    scanf("%d\n",&t);
    for(;i<t;i++){  
        gets(s);
        if(islower(*s)) *s=toupper(*s);
        for(m=1;(n=*(s+m))!=0;m++)
          if(isupper(n)&&*(s+m-1)!=' ')
              *(s+m)=tolower(n);
        puts(s);
    }
}
