#include <stdio.h>
#include <math.h>
main()
{
    double a[3],b[128];char str[3][12];
    b['t']=100; b['n']=1; b['c']=2.54; b['b']=45.72; b['e']=30.48;
    while (scanf("%lf %s\n%lf %s\n%lf %s\n\n", a, str[0], &a[1], str[1], &a[2], str[2])!=-1){
        a[0] = a[0]*b[str[0][2]];
        a[1] = a[1]*b[str[1][2]];
        printf(fabs(a[0]-a[1]*6)<0.000000001?"Excellent\n\n":fabs(a[0]-a[1])<0.000000001?"Spin\n\n":"Neither\n\n");
    }
}
