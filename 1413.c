#include <stdio.h>

int main(void)
{
	double A,B,H;
    int T; 

    scanf("%d",&T);
    while (T-- >0){
      scanf("%lf%lf%lf",&A,&B,&H);
      printf("%.2lf\n", (B*H)/A);
    }
    return 0;
}
