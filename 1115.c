#include <stdio.h>
main()
{
    int r,c,s[200],top;
    char R,C;
    while(scanf("\n%c%d%c%d",&R,&r,&C,&c), r&&c){
        top=0;
        do{
            s[top++] =--c %26;
            c /= 26;
        }while (c>0);
        while(top)putchar(s[--top] + 'A');
        printf("%d\n", r);
    }
}
