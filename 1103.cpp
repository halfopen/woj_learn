main()
{
    short count,i,j;
    scanf("%d",&count);
    float t;
    while(count--)
    {
        scanf("%hd%%",&j);
        t=(float)j/100;
        printf("%.2f%%\n",100*t*t/(1-2*t+2*t*t));
    }
}
