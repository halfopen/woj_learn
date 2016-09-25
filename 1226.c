#include<cstdio>
#include<iostream>
#include<cstring>
#include<queue>
#include<stack>
#include<algorithm>
#include<vector>

using namespace std;
const int maxn = 20 + 5;
const int INF = 2000000000;
typedef  pair<int, int> P;
typedef long long LL;
const int dx[5] = {0,-1,1,0,0};
const int dy[5] = {0,0,0,-1,1};

int m,n;
int M[maxn][maxn];
int ans[maxn][maxn];
int tem[maxn][maxn];

int get(int x,int y){
    int c = M[x][y],x2,y2,i;
    for(i = 0;i < 5;i++)
	{
        x2 = x + dx[i];
        y2 = y + dy[i];
        if(0 <= x2 && x2 < m && 0 <= y2 && y2 < n)
            c += tem[x2][y2];
    }
    return c%2;
}

int calc(){
	int res = 0;
    for(int i = 1;i < m;i++)
        for(int j = 0;j < n;j++)
            if(get(i-1,j) != 0)tem[i][j] = 1;

    for(int j = 0;j < n;j++)
        if(get(m-1,j) != 0)
            return -1;

    
    for(int i = 0;i < m;i++)
        for(int j = 0;j < n;j++)
            res += tem[i][j];

    return res;
}


int solve(){
    int res = -1,i=0,j=0;
    for(i = 0;i < 1 << n;i++)
	{
        memset(tem,0,sizeof(tem));
        for(j = 0;j < n;j++)
            tem[0][n-j-1] = i >> j & 1;
            
        int num = calc();
        if(num >= 0 && (res < 0 || res > num)){
            res = num;
            memcpy(ans,tem,sizeof(tem));
        }
    }
    if(res < 0){
        printf("IMPOSSIBLE\n");
    }
    else{
        for(int i = 0;i < m;i++)
            for(int j = 0;j < n;j++)
                printf("%d%c",ans[i][j],j+1==n?'\n':' ');
    }
    return 0;
}

main(void)
{
    while(scanf("%d%d",&m,&n) != EOF)
	{
        for(int i = 0;i < m;i++)
            for(int j = 0;j < n;j++)
                scanf("%d",&M[i][j]);
        solve();
    }
}
