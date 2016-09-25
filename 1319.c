main(){
    int n, T, len;
    char s[34];
    scanf("%d", &T);
    while (T--){
        scanf("%d", &n);
        len = 32;
        s[33] = '\0';
        if (!n)s[len--] = '0';
        while (n){
            if (n>0){
                switch (n % 3){
                case 0: s[len--]= '0'; n /= 3; break;
                case 1: s[len--]= '1'; n = (n - 1) / 3; break;
                case 2: s[len--]= '-'; n = (n + 1) / 3; 
                }
            }else{
                switch (-n % 3){
                case 0: s[len--]= '0'; n /= 3; break;
                case 1: s[len--]= '-'; n = (n + 1) / 3; break;
                case 2: s[len--]= '1'; n = (n - 1) / 3; 
                }
            }
        }
        puts(s+len+1);
    }
}
