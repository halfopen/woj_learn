#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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



int main()
{
    int T;
    scanf("%d",&T);
    while(T-- >0)
    {
        char a[200],b[200];
        scanf("%s%s",a,b);
        int i;
        test();
        if(a[0]>='a' && a[0]<='z') 
			a[0]=a[0]-32;
        if(b[0]>='a' && b[0]<='z') 
			b[0]=b[0]-32;
			
        for(i=1;i<strlen(a);i++)
        {
          if(a[i]>='A' && a[i]<='Z') a[i]=a[i]+32;
        }
        for(i=1;i<strlen(b);i++)
        {
          if(b[i]>='A' && b[i]<='Z') 
		  	b[i]=b[i]+32;
        }
        printf("%s %s\n",b,a);
    }
    return 0;
}
