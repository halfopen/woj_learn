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


int main(void)
{
    int m,n;
    test();
    scanf("%d",&n);
    while(n!=0){
    	test();
        if(n==2)
    		m=1;
        else if(n==3)
        	m=3;
        else
        	m=(n-2)*2;
        printf("%d\n",m);
        test();
        scanf("%d",&n);
    }
    return 0;
}
