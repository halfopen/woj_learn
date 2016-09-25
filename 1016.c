#include <stdio.h>
main(){int i,j,n,p[1001][2],M,N,F;while(scanf("%d",&n)!=EOF){M=65535;N=-65536;F=1;for(i=0;i<n;i++){scanf("%d %d",&p[i][0],&p[i][1]);M=M<p[i][1]?M:p[i][1];N=N>p[i][1]?N:p[i][1];}for(i=0;i<n;i++){for(j=0;j<n;j++){if(p[j][1]+p[i][1]==M+N&&p[j][0]==p[i][0])break;}if(j==n){F=0;break;}}printf(F?"YES\n":"NO\n");}}
