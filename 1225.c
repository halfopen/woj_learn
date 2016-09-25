#include<cstdio>  
#define M 100005  
 
main(){ 
	int u=0,v=0,x=0,f[M]={0},q[M*2]={0},h=0,t=0;  
    scanf("%d%d",&u,&v);  
    q[t++]=u;  
    while(h<t){  
        u=q[h++];  
        if(u==v){  
            printf("%d\n",f[u]);  
            break;  
        }x=f[u]+1;  
        if(u>0&&!f[u-1])f[q[t++]=u-1]=x;  
        if(u<=M&&!f[u+1])f[q[t++]=u+1]=x;  
        if(u*2<=M&&!f[u*2])f[q[t++]=u*2]=x;  
    }  
}
