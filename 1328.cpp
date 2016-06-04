#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i,c;
    char a[47]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    
    while((c=getchar())!=EOF)
    {
        for(i=1;a[i] &&a[i]!=c;i++);
        
        if(a[i])
		{
        	putchar(a[i-1]);
        } 
		else
		{
        	putchar(c);
        } 
    }
    return 0;
}
