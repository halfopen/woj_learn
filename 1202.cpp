#include <stdio.h>

main()
{
    int in,b=0,n,i;
    scanf("%d",&n); 
    
    for(i=0;i<2*n+1;i++)
    {
	    scanf("%d",&in);
	    b=in^b;		//����ͬ������������֮��͵����� 
	    
	    //printf("\t%d\n", b);
    }
    printf("%d\n",b);      
}
