#include <stdio.h>
main(){char l[1024];int i,t;while(scanf("%s",l),'$'!=l[0] ){for(i=0;l[i];i++){t=(l[i]-'B'-i)%26;if(t<0)t=26+t%26;l[i]='A'+t;}       printf("%s\n", l);}}
