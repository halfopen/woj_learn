#include <stdio.h>
#include <stdlib.h>

void test(){
	printf("Halfopen\n");
}

int shulian(int n)
{
    if (n == 1)
        return 1;
    else if(n%2==1)
        return 1 + shulian(3*n+1);
    else
        return 1 + shulian(n/2);    
}

int main()
{
    int i=0, j=0, max=0;

    while (scanf("%d%d",&i,&j)&&i!=0&&j!=0){
        max = 0;
        for (int k=i;k<=j;k++){
            if (shulian(k) > max)
                max = shulian(k);
        }
        printf("%d\n",max);
    }
    return 0;
}
