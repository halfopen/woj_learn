#include<stdio.h>
#include<algorithm> 
using namespace std;
main(){ 
int m,n,i=0;
  while(scanf("%d %d",&m,&n)!=EOF){
  	int a[m];
    for(i=0;i<m;i++)scanf("%d",&a[i]);      
    sort(a,a+i);    
    printf("%d\n",a[n-1]); 
  }  
}
