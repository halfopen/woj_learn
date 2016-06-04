#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;
bool affix(char *s,char *a,int i)
{
    int ii,jj;
    for(ii=i,jj=strlen(a)-1;jj>=0;ii--,jj--)if(s[ii]!=a[jj]) break;
    return jj<0?true:false;
}
main()
{
    int ncase,n,i,j;
    char s[257],a[101][257];
    cin>>ncase;
    while(ncase--){
        fflush(stdin);
        cin>>s>>n;
        for(i=0;i<n;i++) cin>>a[i];
        int dp[256];
        dp[0]=0;
        for(i=0;i<strlen(s);i++){
            dp[i+1]=dp[i]+1;
            for(j=0;j<n;j++)
               if(strlen(a[j])<=i+1&&affix(s,a[j],i))
                     dp[i+1]=min(dp[i+1],dp[i-strlen(a[j])+1]+1);
        }
        cout<<dp[strlen(s)]<<endl;
    }
}

