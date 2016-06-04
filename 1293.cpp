#include<stdio.h>
main()
{
    int i,j,m,n;
    while(scanf("%d %d",&m,&n),n!=0){
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++)
                printf("%2d ",(n-1-i+j)*(n-i+j)/2+j+m);
            printf("\n");
        }
        printf("\n");
    }
}
