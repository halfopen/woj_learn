#include<stdio.h>
int a[500001],b[4000000]={1},i=1;
int main()
{
    for(;i<500001;i++){
        if(a[i-1]-i>0&&b[a[i-1]-i]==0){
            a[i]=a[i-1]-i;
            b[a[i-1]-i]=1;
        }else{
            a[i]=a[i-1]+i;
            b[a[i-1]+i]=1;
        }
    }
    while(scanf("%d",&i)==1&&i!=-1)
        printf("%d\n",a[i]);
	return 0;
}
