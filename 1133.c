#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>


using namespace std;
main()
{
    int n,i,j,k,t,s,sum,ans,min,max,c[10001][3],v[10001];;
    while(scanf("%d",&n) >0){
        for(sum=i=0; i< n; i++){
            scanf("%d%d%d",&c[i][0],&c[i][1],&c[i][2]);
            sum += (c[i][0] + c[i][1] + c[i][2]);
        }
        ans = sum;
        for(i = 0; i < 3; i ++)
            for(j = 0; j < 3; j++)
                for(k = 0; k < 3; k++){
                    if(i == j || i == k || j == k)continue;
                    int order[3] = {i,j,k};
                    memset(v,0,sizeof(v));
                    min = sum;                 
                    for(t = 0; t < 3; t++){
                        max = 0;
                        for(s = 0; s < n; s++){
                            if(v[s] == 1)continue;
                            if(c[s][order[t]] > c[max][order[t]])max = s;
                        }
                        v[max] = 1;
                        min -= c[max][order[t]];
                    }
                    if(ans>min)ans=min;
                }
        printf("%d\n",ans);
    }
}
