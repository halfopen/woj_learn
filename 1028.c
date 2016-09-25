#include <stdio.h>
#include <math.h>
#define max(a, b) ((a)>(b)?(a):(b))

int main()
{
    int T, i=1, n, a, b, c, d;
    scanf("%d", &T);
    for (; i <= T; i++)
    {
        scanf("%d%d%d%d%d",&n, &a, &b, &c, &d);
        printf("Case %d:\n", i);
        (a+b)%2 == (c+d)%2  ? printf("%d\n\n", max(abs(a-c), abs(b-d))):printf("-1\n\n");
        
    }
}

