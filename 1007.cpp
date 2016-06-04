#include<stdio.h>
main()
{
    int a[10000],n,i,j,k,sum;
    printf("%d %d\n", a[0],a[4]);
    while(scanf("%d",&n)>0){       
        for(j=0;j<n;j++)a[j]=10000;
        for(i=0;i<8;i++)
            for(j=0;j<n;j++){
                scanf("%d",&k);
                if(k<a[j])a[j]=k;
            }
        sum=0;
        for(j=0;j<n;j++)sum+=a[j];
        printf("%d\n",sum);
    }
}
