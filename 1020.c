#include <cstdio>
#include<cstdlib>
#include <algorithm>
using namespace std ;
int a[1010],n,cas=0 ;
main(){
    getchar();
    while(scanf("%d" , &n) >0) {
        for (int i = 0 ; i < n ; ++i) scanf("%d" , &a[i]) ;
        for (int i = n - 1 ; i > 0 ; --i) a[i] -= a[i - 1] ;
        sort (a , a + n) ;
        if(cas)puts("");
        printf("Case %d:\n" , ++ cas) ;
        for(int i = 0 ; i < n ; ++i) {
            if(i) printf(" ") ;
            printf("%d" , a[i]) ;
        }
        puts("");
    }
}
