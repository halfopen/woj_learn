#include<stdio.h>
main()
{
    int n,i,j,k,gray,bin;
    while(scanf("%d",&n)>0){
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                scanf("%d",&gray);
                for(k =bin= 0; k < 8; k++)
                    bin ^= (gray >> k) & 1;
                printf(j>0?" %d":"%d",bin);
            }
                printf("\n");
        }
    }
}
