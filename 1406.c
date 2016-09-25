#include<iostream> 
using namespace std; 
int main() 
{ 
    double n,k; 
    while(scanf("%lf%lf",&n,&k)!=EOF) 
    { 
        double t; 
        if(n==0) 
        { 
            t=0; 
            printf("0/n"); 
            continue; 
        } 
        else t=k/2/n; 
        t=(int)t; 
        int t1=t-1,t2=t,t3=t+1,ans1,ans2,ans3; 
        ans1=2*n*t-n-k; 
        ans2=2*n*t-k+n; 
        ans3=4*n*t-2*k; 
        if(ans1>=0) 
        { 
            if(ans3>=0) t=t1; 
            else t=t3; 
        } else 
        { 
            if(ans2>=0) t=t2; 
            else t=t3; 
        } 
        printf("%d/n",(int)t); 
    } 
} 
