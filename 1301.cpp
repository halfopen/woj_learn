#define max 100000
int answer(int array[], int n, int sum)
{
    int temp = 0,i = 0,j = i,len = n;

    while (j < n){
        while (temp < sum){
            temp += array[j++];
            if (j >= n)break;
        }
        if (temp < sum)return len;
        while (temp >= sum)temp -= array[i++];
        if (len > j - i + 1)len = j - i + 1;
    }
    return len;
}

main()
{
    int T,n, i,array[max], sum,sum_array = 0;
    scanf("%d", &T);
    while (T-- > 0){
        scanf("%d%d", &n, &sum);
        for (i = 0; i < n; ++i){
            scanf("%d", &array[i]);
            sum_array += array[i];
        }
        if (sum_array < sum)printf("0\n");
        else printf("%d\n", answer(array, n, sum));
        sum_array = 0;
    }
}
