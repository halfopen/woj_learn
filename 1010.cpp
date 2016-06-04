#include <stdio.h>
#include <stdlib.h>
int main()  
{  
    int n;
    while(scanf("%d",&n)&&n!=0)
    {  
        int max, var;
        scanf("%d",&max);

        for(int i = 0; i < n - 1; i++) { 
            scanf("%d",&var);
            max = max > var ? max : var;
        }
        max %= 2006;  
        if(max < 0)
            max += 2006;  
        for(int i = 0; i < n - 1; i++) {  
            max *= 2;  
            max %= 2006;  
        }  
        printf("%d\n",max);
      
    }
    return 0;  
}
