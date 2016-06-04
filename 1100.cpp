#include <stdio.h>
#include <string.h>
int ct[8];
char am[8][20]={"littleken","knuthocean","dongfangxu","zap","kittig","robertcui","forest","flirly"},str[1000000];
int countnum(char * str,char * am)
{
    int num=0;
    char *pt;
    pt=strstr(str,am);
    while(pt!=NULL){
        num++;
        pt=strstr(pt+1,am);
    }
    return num;
}
main()
{
    int case_num,i;
    scanf("%d",&case_num);
    while(case_num--){
        scanf("%s",str);
        for(i=0;i<8;i++){
            ct[i]=countnum(str,am[i]);
        }
        int max=0,j=0;
        for(i=0;i<8;i++){
            if(ct[i]>max){
                max=ct[i];
                j=i;
            }
        }
        printf("%s\n",am[j]);
    }
}
