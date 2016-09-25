#include <stdio.h>

void Helloworld()
{
    printf("Helloworld!\n");
}

int shulian(int n);

int main()
{
    int n, count = 1, a[10000];
    while (scanf("%d", &n) && n != -1){
        int i, f = 0, t = 0;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        while (f == 0){
            f = 1;
            for (i = 0; i < n - 1; i++)
            if (a[i] == 1 && a[i + 1] == -1){
                f = 0;
                a[i] = -1;
                a[i + 1] = 1;
                t++;
                i++;
            }
        }
        printf("Case %d: %d\n", count, t);
        count++;
    }
    return 0;
}

int shulian(int n)
{
    if (n == 1)
        return 1;
    else if (n % 2 == 1)
        return 1 + shulian(3 * n + 1);
    else
        return 1 + shulian(n / 2);
}
