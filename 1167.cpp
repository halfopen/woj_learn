#include<iostream>
#include<stdio.h>
char arr[128][128];
int r , c ;

void sarch(int m , int n)
{
    if (m < r && m >=0 && n < c && n >= 0){
        if (arr[m][n] == 'O'){
            arr[m][n] = 'X' ;
            sarch(m+1,n);
            sarch(m+1,n+1);
            sarch(m+1,n-1);
            sarch(m,n+1);
            sarch(m,n-1);
            sarch(m-1,n);
            sarch(m-1,n-1);
            sarch(m-1,n+1);
        }
        else return;
    }
    else return;
}

main ()
{
    int count ;
    while (scanf("%d%d",&r,&c) == 2 && r*c != 0)
    {
        count = 0 ;
        for (int i = 0 ; i < r ; ++i)
            std::cin >> arr[i];

        for (int i = 0 ; i < r ; ++i)
            for (int j = 0 ; j < c ; ++j){
                if (arr[i][j] == 'O'){
                    count ++ ;
                    sarch(i,j);
                }
            }
        std::cout << count << std::endl;
    }
}
