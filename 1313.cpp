main()
{
    int k ,m,j ,sum[1000] = {0},temp ;
    while(scanf("%d",&k) >0){
        if (k == 0) break;
        for(temp=1,m = 0 ; temp < 1000 ; ++m )temp *= k;
        temp = temp%1000;
        sum[temp] = m ;      
        for (k = k%1000, j = m+1 ; sum[(temp*k%1000)] == 0 ; ++j)
        {
            temp = temp*k%1000;
            sum[temp] = j ;
        }
        printf("%d\n",sum[(temp*k%1000)]+j);
        for(int i = 0 ; i < 1000 ; ++i)sum[i] = 0 ;
    }
}
