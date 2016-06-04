#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{int n,i,j,k,a[520][521],b[521];a[1][520]=1;a[2][520]=2;a[3][520]=4;for(i=4;i<501;i++){j=521;while(j--){a[i][j]=(a[i-3][j]+a[i-2][j]+a[i-1][j]+b[j+1])%10;b[j]=(a[i-3][j]+a[i-2][j]+a[i-1][j]+b[j+1])/10;}}while(scanf("%d",&n)&&n!= 0){k=0;while(!a[n][k])k++;for(i=k;i<521;i++)printf("%d",a[n][i]);puts("");}}
