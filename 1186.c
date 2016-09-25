#include<stdio.h>

#include<string.h>

main()
{
    char s[100];
    for(;;){
        scanf("%s",s);
        int l[10]={0},n[100],i,f=1,a=0;
        if((int)(s[0]-48)==0)
            break;
        for(i=0;i<strlen(s);i++){
            n[i]=(int)(s[i]-48);
            if(l[n[i]]==0)
                l[n[i]]=1;
            else f=0;
        }
        if(f){
            for(i=0;i<9;i++)
                if(l[i]!=l[i+1])
                    a++;
                puts(a>2?"NO":"YES");
        }else printf("NO");
    }
}
