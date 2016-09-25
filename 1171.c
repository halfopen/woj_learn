int w[22][22][22];

int W(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)return 1;
    if (a > 20 || b > 20 || c > 20)return W(20, 20, 20);
    if (w[a][b][c] == -1){
        w[a][b][c] = (a < b && b < c) ?W(a, b, c-1) + W(a, b-1, c-1) - W(a, b-1, c): W(a-1, b, c) + W(a-1, b-1, c) + W(a-1, b, c-1) - W(a-1, b-1, c-1);
    }
    return w[a][b][c];
}

main(){
    int T, a, b, c, i;
    for (i = 0; i < 22 * 22 * 22; i++)
        ((int *)w)[i] = -1;
    for (scanf("%d", &T); T > 0; T--){
        scanf("%d%d%d", &a, &b, &c);
        printf("W(%d, %d, %d) = %d\n", a, b, c, W(a, b, c));
    }
}
