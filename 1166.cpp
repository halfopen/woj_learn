#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;
int cmp (char *a, char *b) {  
    return strcmp(a, b);  
}  
char str[1010];
string s[1010];
main() {
    int N, i, j;
    while (scanf("%d", &N) == 1 && N > 0) {
        for (i = 0; i < N; i++) {
            scanf("%s", str);
            s[i] = str;
        }
        sort(s, s + N);
        for (i = 1; --j,i < N; i++) {
            if (strncmp(s[i].c_str(), s[j].c_str(),min(s[i].size(), s[j].size())) == 0&& s[i].size() != s[j].size())break;
        }
        printf(i == N?"None!\n":"Exist!\n");
    }
}

