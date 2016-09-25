#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n;
int camp(long int y){
  for(long int j=2;j<=(int)(sqrt(y));j++)if(y%j==0) return 0;
  if(y>1)  return 1;
  return 0;
}

void search(int j,long int k){
  long int i;
  if(j==n+1){
  	printf("%ld\n",k);return;
  }
  for(i=1;i<=9;i++){
      if(i==4||i==6||i==8)continue;
      if(camp(k*10+i))search(j+1,k*10+i);
  }
}
main(){
  while(scanf("%d",&n)>0){
    if(n>=1&&n<=8)search(1,0);
  }
}

