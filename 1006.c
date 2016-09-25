#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
using namespace std;
int flag[210000],deep[210000],b[210000];
int n,m,i,x,y,s,e,ans,k,r,f,v;
vector <int> l[210000];
main(){
  while (scanf("%d%d",&n,&m)>1){
    memset(l, 0, sizeof(l));
    for (i=1;i<=m;i++){
      scanf("%d%d",&x,&y);
      l[x].push_back(y);l[y].push_back(x);
    }
    scanf("%d",&k);
    while (k--){
      scanf("%d%d",&s,&e);
      if (s==e){
        printf("%d\n",0);
        continue;
      }
	  memset(flag,0,sizeof(flag));
      r=f=flag[s]=1;b[1]=s;ans=deep[1]=-1;
      while (f<=r){
        for (i=0;i<l[b[f]].size();i++){
          v=l[b[f]][i];
          if (flag[v]==1) continue;
          b[++r]=v;
          flag[v]=1;
          deep[r]=deep[f]+1;
          if (v==e){
            ans=deep[r];
            break;
          }
        }
        if(ans!=-1) break;
        ++f;
      }
      printf("%d\n",ans);
    }
  }
}
