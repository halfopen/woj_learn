#include<stdio.h>
#include<stdlib.h>    

int main()
{
    int a,b,c,d,e,f,g,h,i;
	float result;
    while( EOF != scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i) )
    {
        result=0;
        result = a*e*i+d*h*c+g*b*f-c*e*g-h*f*a-i*d*b;
        if(result < 0)
            result = -1*result;
        printf("%.2f\n",result);
    }
    return 0;
}
