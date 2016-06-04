#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<iostream>
using namespace std;
int h1[65537],h2[65537],a[5001],b[5001];
bool sign[5001];
main()
{
    int n, i, k, tp, cost, q,min;
    while (scanf("%d", &n) != EOF && n != 0){
        min = 65538;
        cost = 0;
        memset(sign, 0, sizeof(sign));       
        for (i = 1; i <= n; i++){
            scanf("%d", &a[i]);
            if (a[i] < min) min = a[i];
            cost += a[i];
            h1[a[i]] = i;
        }
        for (i = 1; i <= n; i++){
            scanf("%d", &b[i]);
            h2[b[i]] = i;
        }
        for (i = 1; i <= n; i++)
            if (0 ==sign[i]){
                tp = 65538;
                q = i;
                k = 0;
                do{
                    sign[q] = true;
                    if (b[q] < tp)tp = b[q];
                    q = h1[b[q]];
                    k++;
                }while (q != i);
                cost += (k - 2) * tp < tp + (k + 1) * min ? (k - 2) * tp : tp + (k + 1) * min;
            }
        printf("%d\n", cost);
    }
}

