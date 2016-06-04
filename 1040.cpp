#include <algorithm>
#include<cstdio>
using namespace std;
main(){int t,m,n,i,len,a[10001];scanf("%d",&t);for(m=0;m<t;m++){scanf("%d",&n);for(i=0;i<n;++i)scanf("%d",a+i);sort(a,a+n);for(i=len=1;i<n;++i)if(a[i]==a[i-len])len++;printf("%d\n",len);}}
