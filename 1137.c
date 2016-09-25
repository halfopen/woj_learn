#include <stdio.h>
main(){
int n,m,a,t,i;
while(scanf("%d%d",&n,&m)>1){
  scanf("%d",&t);
  for(i=1;i<n;i++){
  scanf("%d",&a);
  t=(t>=a)?a:t;
  }printf("%d\n",m/t);
}  
}
