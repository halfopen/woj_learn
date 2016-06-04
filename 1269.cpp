#include <stdio.h>
#include <stdlib.h>

void test(){
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
}

int main()
{
    int n, m, i, j, k, sum;
    while(scanf("%d%d",&n,&m)&&n!=-1&&m!=-1){
        sum = 0;
        for(i = n; i >= 1; i--){
            sum += n - i;
            if(sum >= m)
                break;
        }
        for(j = 1; j < i; j++) {
            printf("%d",j);
            if (n > j)
                printf(" ");
        }
        k = m + i - (n - i) * (n - i - 1) / 2;
        printf("%d ",k);
        
        for(j = n; j >= i; j--){
            if(j != k){
                printf("%d",j);
                if (j>i)
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
