#include <stdio.h>
#include <math.h>
#define pi 3.141592653
double d, H, e=0.00000001;
main()
{
    scanf("%lf%lf", &d, &H);
    double a, b, c;
    while ( scanf("%lf%lf%lf",&a,&b,&c),a>e&&b>e&&c>e){
        a=tan(a/180*pi);
        b=tan(b/180*pi);
        c=tan(c/180*pi);
        int n= H+d*sqrt(2.0/(1/a/a+1/c/c-2/b/b))+0.49999999;
        printf("%d\n",n);
    }
}
