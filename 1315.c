#include <stdio.h>
#include <stdlib.h>



long result(long a,long b,long c){
    long remainder = 1;
    while(b>=1)
	{
                if(b%2 == 1) remainder = a*remainder%c;
                a = a*a%c;
                b=b/2;
    }
    return remainder;
}

int main()
{
    long int a=0,b=0,c=0;
    scanf("%ld%ld%ld",&a,&b,&c);
    while(!(a==0&&b==0&&c==0)){
    	
            printf("%ld\n",result(a,b,c));
            scanf("%ld%ld%ld",&a,&b,&c);
            }
    return 0;
}
