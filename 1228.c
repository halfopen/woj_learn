#include<stdio.h>
#include<stdlib.h>
void DisplayPath(int A[][100],int path[][100],int n)
{
    //

}
int main()
{
    int f, k;
    while (scanf("%d %d", &f, &k) != EOF && (f || k)){
        int F[10001] = { 0, 0 };
        for (int i = 0; i < k; i++){
            int L, I;
            scanf("%d %d", &L, &I);
            for (int j = 1; j <= f; j++){
                if (j % I == L % I && j >= L)
                    F[j]++;
            }
        }
        for (int i = 1; i <= f; i++){
            if (F[i] == 0)
                F[0]++;
        }
        printf("%d\n", F[0]);
    }
    return 0;
}
