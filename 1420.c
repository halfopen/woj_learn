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
int solve(int n,int r)
{
    int primer[5133]={0},size=0;
    for(int i=2;i*i<=n;i++)
            if(n%i == 0)
            {
                  primer[size++]=i;
                  while(n%i==0)
                                n/=i;
            }
    if(n>1)
          primer[size++]=n;
    int sum = 0;
    for(int msk=1;msk<(1<<size);msk++){
            int mult = 1;
            int bits = 0;
            for(int i=0;i<size;i++)
                    if(msk & (1<<i))
                    {
                          bits++;
                          mult *= primer[i];
                    }
            int cur = r/mult;
            if(bits%2==1)
                        sum += cur;
            else
                sum -= cur;
    }
    return r-sum;
}

int main()
{
    int t=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
            int m,n,result=0;
            scanf("%d%d",&m,&n);
            for(int j=1;j<=m;j++)
                    result += solve(j,n);
            printf("%d\n",result);
    }
    return 0;
}
