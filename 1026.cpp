#include<stdio.h>
#include<stdlib.h>
#define max(a,b) (((a)>(b))?(a):(b))
main()
{
    int t,n,i,j,k,b[t],a[2][1002];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n+2;j++)
        a[0][j]=a[1][j]=0;
        for(j=0;j<n;j++)
        for(k=0;k<n;k++){
            scanf("%d",&b[i]);
            a[(j+1)%2][k+1]=max(max(a[j%2][k],a[j%2][k+1]),a[j%2][k+2])+b[i];
        }
        for(j=0;j<n;j++)b[i]=max(b[i],a[n%2][j+1]);
    }
    for(i=0;i<t;i++){
        printf("Case %d:\n%d\n\n",i+1,b[i]);
        //if(i<t-1)printf("\n");
    }
}
