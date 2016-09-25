#include<stdio.h>
main(){
    long long int n,i,j;
    scanf("%d",&n);
    while(n--){
		scanf("%lld %d",&i,&j);
		printf("%lld\n",i*j-i-j);
    }
}
