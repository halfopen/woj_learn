#include <iostream>
#include <cstdio>
#define getMin(a,b) ((a)<(b)?(a):(b))
using namespace std;
const int aaa=1000000000;    

int node,edge,src,dest,ver[6666],flow[6666],next[6666],head[1111],work[1111],dis[1111],q[1111],score[1111];

void init(int _node,int _src,int _dest)  
{  
    int i;
    node=_node,src=_src,dest=_dest;  
    for(i=0;i<node;++i)head[i]=-1;  
    edge=0;  
}  

void addedge(int u,int v,int c)  
{  
    ver[edge]=v,flow[edge]=c,next[edge]=head[u],head[u]=edge++;  
    ver[edge]=u,flow[edge]=0,next[edge]=head[v],head[v]=edge++;  
}  
int Dinic_bfs()  
{  
    int i,u,v,l,r=0;  
    for(i=0;i<node;++i)dis[i]=-1;  
    dis[q[r++]=src]=0;  
    for(l=0;l<r;++l)  
        for(i=head[u=q[l]];i>=0;i=next[i])  
            if(flow[i]&&dis[v=ver[i]]<0)  
            {  
                dis[q[r++]=v]=dis[u]+1;  
                if(v==dest)return 1;  
            }  
            return 0;  
}  
int Dinic_dfs(int u,int exp)  
{  
    int i,v,tmp;
    if(u==dest)return exp;  
    for(i=work[u];i>=0;i=next[i])  
        if(flow[i]&&dis[v=ver[i]]==dis[u]+1&&(tmp=Dinic_dfs(v,getMin(exp,flow[i])))>0)  
        {  
            flow[i]-=tmp;  
            flow[i^1]+=tmp;  
            return tmp;  
        }  
        return 0;  
}  
int Dinic_flow()  
{  
    int i,ret=0,delta;  
    while(Dinic_bfs())  
    {  
        for(i=0;i<node;++i)work[i]=head[i];  
        if(delta=Dinic_dfs(src,aaa))ret+=delta;  
    }  
    return ret;  
}  
int main()  
{  
    int i,u,v,m,n,sum;  
    while(cin >> n >> m)  
    {  
        for(i=1;i<=n;++i)
            cin >> score[i];  
        init(n+m+2,0,n+m+1);  
        sum=0;  
        for(i=1;i<=m;++i)  
        {  
            cin >> u >> v;
            if(u==n||v==n)score[n]+=2;  
            else  
            {  
                sum+=2;  
                addedge(src,i,2);  
                addedge(i,m+u,2);  
                addedge(i,m+v,2);  
            }  
        }  
        for(i=1;i<n;++i)  
        {  
            if(score[i]>=score[n]-1)break;  
            addedge(m+i,dest,score[n]-1-score[i]);  
        }  
        printf( i==n&&Dinic_flow()==sum? "YES\n" : "NO\n");
    }  
    return 0;  
}
