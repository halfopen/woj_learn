#include <algorithm>
#include <iostream>
using namespace std;
struct N{
    int s, f;
} node[10005];
int d[300005], n;
int my_cmp(N a, N b);
int dp_search();

main(){
    int i;
    while(cin>>n){
        for(i=1;i<= n;i++)cin >> node[i].s >> node[i].f;
        sort(node + 1, node+n+1,my_cmp);
        cout << dp_search() << endl;
    }
}

int my_cmp(N a, N b){
    return (a.s == b.s)?a.f < b.f:a.s < b.s;
}
int dp_search(){
    int i,j;
    for(i = 1; i<= n; i++)d[i] = node[i].f - node[i].s + 1;
    for(i = 1; i<= n; i++)
        for(j = 1;j<i; j++)
            if(node[j].f < node[i].s)
                d[i] = max(d[i], d[j] + node[i].f - node[i].s + 1);

    for(i=1;i<=n;i++)j=max(j,d[i]);
    return j;
}
