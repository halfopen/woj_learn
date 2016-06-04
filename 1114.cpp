#include <stdio.h>

int score(double x,double y)
{
    int s=0;double r;
    r=x*x+y*y;
    if(r<=9)s=100;else if(r<=36)s=80;else if(r<=81)s=60;else if(r<=144)s=40;else if(r<=225)s=20;
    return s;
        
}
main()
{
    double x,y;   
    while(scanf("%lf %lf",&x,&y),x!=-100){
    	int a=0,b=0;
        a=score(x,y);
        int c=2;
        while(c--){
        	scanf("%lf %lf",&x,&y);
        	a+=score(x,y);
        }        
        c=3;
        while(c--){
        	scanf("%lf %lf",&x,&y);
        	b+=score(x,y);
        }
        if (a>b)printf("SCORE: %d to %d, PLAYER 1 WINS.\n",a,b);
        else if (a<b)printf("SCORE: %d to %d, PLAYER 2 WINS.\n",a,b);
        else printf("SCORE: %d to %d, TIE.\n",a,b);
    }
}
