#include<iostream>
#include<stdio.h>
#include<algorithm>
struct point
{
    int x;
    int y;
};
int cmp(point a,point b)
{
    if(a.x!=b.x)return a.x<b.x;
    return a.y<b.y;
}
main()
{
    int n,i,count;
    point a[400];
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        for(i=0;i<n;i++)std::cin>>a[i].x>>a[i].y;

        std::sort(a,a+n,cmp);
        for(i=0;i<n;i++)
        {
            while(i<n-1 && a[i].x==a[i+1].x &&a[i].y==a[i+1].y)i++;
            count++;
        }
        printf("%d\n", count);
    }
}
