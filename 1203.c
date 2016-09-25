#include<stdio.h>
#include<iostream>
using namespace std;

int list[400000];
int main()
{
    int i,m,t,top;
    while(scanf("%d",&m)!=EOF)
    {                     
        scanf("%d",&t);
		top=0;                       
        list[top++]=t;
        for(i=1;i<m;i++)
        {
            scanf("%d",&t);
            if(t!=list[top-1]){
                top--;
            } 
            else list[top++]=t; 
            
            if(top==0) 
            {
                i++;      
                scanf("%d",&list[top++]);                      
            }
        }
        printf("%d\n",list[0]);
    }
    return 0;
}
