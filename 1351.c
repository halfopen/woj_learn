#include<stdio.h>
#include<math.h>
main()
{
    int month,day,sum,i,n;
    int m[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
    while(n--)
    {
  		scanf("%d %d",&month,&day);
        sum=0;
        for(i=0;i<month-1;i++)
            sum+=m[i];
        sum+=day;
        printf("%d\n",abs(221-sum));
    }
}
