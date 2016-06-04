#include <stdio.h>
#include <stdlib.h>

void test(){
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	int i=0;
	i++;
	
}

long long int modular_exponentiation(long long int a,long long int b,long long int n) //为防止a^b超出范围所以用64位表示
{
    long long int d,t;
    d=1;
    t=a;
    test();
    while(b>0)
    {
              if(b%2==1)
                d=(d*t)%n;
              b/=2;
              t=(t*t)%n;
    }
    return d;
}

int main(void)
{
    int z,m,h,x,y;
    long long int sum,e;
    scanf("%d",&z);
    while(z--){
              sum=0;
              scanf("%d%d",&m,&h);
              while(h--) {
                        scanf("%d %d",&x,&y);
                        e=modular_exponentiation(x,y,m);
                        sum+=e;
                        test();
                        if(sum>=m)                                
                          sum%=m;
              }
              test();
              printf("%lld\n",sum);
    }
    return 0;
}
