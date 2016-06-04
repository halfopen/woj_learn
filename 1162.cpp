#include <string.h>
main(){
    int t,i,l1,l2,k,f,j,p;
    char a[1001],b[1001],s[2001];
    scanf("%d",&t);
    for(i=1; i<=t; i++){               
        scanf("%s",a);
        scanf("%s",b);
        l1 = strlen(a);l2 = strlen(b);
        k = l1 < l2? l2 : l1;
        l1--;l2--;
        f =s[k] = 0;
        for(j=k-1; j>=0; j--){
            p = f;
            if(l1>=0) p+=a[l1]-'0';
            if(l2>=0) p+=b[l2]-'0';
            if(p>9){
                p-=10;
                f=1;
            }
            else f=0;
            s[j] = p+'0';
            l1--;l2--;
        }
        if(f) putchar('1');
        printf("%s\n",s);
    }
}
