#include <stdio.h>

int s(int);
int S(int);

main()
{
    int num;
    while(scanf("%d", &num) != EOF && num != 0){
            printf(s(num) == S(num)?"Yes\n":"No\n");
    }
}
int s(int a)
{
    int res = 0;
    while(a > 0) {
        res += (a % 10);
        a /= 10;
    }
    return res;
}

int S(int a)
{
    int res = 0, flag = 0;
    if(a == 2)
        return -1;
    while((a&1) == 0) {
        res += 2;
        a >>= 1;
        flag = 1;
    }

    int i;
    for(i = 3; i*i <= a; i += 2) {
        while(a % i == 0) {
            res += s(i);
            a /= i;
            flag = 1;
        }
    }

    if(!flag)
        return -1;
    if(a != 1)
        res += s(a);
    return res;
    
}
