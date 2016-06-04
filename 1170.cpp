#include <algorithm>
#include <cstdlib>
#include <cstdio>
int a[1000000];
main(){
    int b,i = 0,j;
    while(scanf("%d",&b)>0&&b){
        a[i++] = b;
    }
    std::sort(a,a+i);
    printf("%d ",a[0]);
    for(j=1;j<i;j++){
        if(a[j] == a[j-1])continue;
        printf("%d ",a[j]);
    }
    printf("\n");
}
