#include<stdio.h>
main(){
    int t,k,i,a[35];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&k);
    a[1]=1;a[0]=1;
    for(i=2;i<=35;i++)
    a[i]=a[i-1]+2*a[i-2];
    printf("%d\n",a[2*k]);
	}
}
