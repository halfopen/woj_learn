#include <stdio.h>
#include <stdlib.h>

void test(){
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
}

int max(int x,int y)
{
	int z=0;
	if (x>y) z=x;
	else x=y;
	return (z);
}

int main()
{
    int n=0,a[3][10001]={0};
    a[1][2]=1,a[2][3]=1;
    for(int i=1;i<10001;i++){
            if(i<=3){
                      a[0][i]=i;
            }
            else{
                if((a[0][i-2]*2)>=(a[0][i-3]*3)){
                                            a[0][i]=a[0][i-2]*2;
                                            a[1][i]=a[1][i-2]+1;
                                            a[2][i]=a[2][i-2];
                }
                else{
                    a[0][i]=a[0][i-3]*3;
                    a[1][i]=a[1][i-3];
                    a[2][i]=a[2][i-3]+1;
                }
            }
            if(a[1][i]>=3)
            {
                          a[1][i]=a[1][i]-3;
                          a[2][i]=a[2][i]+2;
            }
    }
    scanf("%d",&n);
    while(n){
            for(int i=0;i<a[1][n];i++){
                   printf("2");
                    if(a[2][n]==0&&i==a[1][n]-1)
                    continue;
                    printf(" ");
            }
            for(int i=0;i<a[2][n];i++){
                    printf("3");
                    if(i==a[2][n]-1)
                    continue;
                    printf(" ");
            }
            if(n==1)
            printf("1");
            printf("\n");
            scanf("%d",&n);
    }
}
