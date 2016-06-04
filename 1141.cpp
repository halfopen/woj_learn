#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void test(){
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	int j = 0;
	j++;
	
}

int a[10];
int paitition(int A, int p, int r)  
{  
    int i, j, t;  
  
    i = p - 1;  
    //¿ªÊ¼ÅÅÐò  
    for(j = p; j < r; j++)  {  
        if(a[j] <= a[r])  {  
            i++;  
            t = a[j];  
            a[j] = a[i];  
            a[i] = t;  
        }  
    }  
  
    t = a[i + 1];  
    a[i + 1] = a[r];  
    a[r] = t;  
  
    return i + 1;  
}  
void qSort(int N, int p, int r)  
{  
    int q;  
  
    if(p < r)  {  
        q = paitition(N, p, r);  
        qSort (N, p, q - 1);  
        qSort (N, q + 1, r);  
    }  
}
int main(void)
{
    char keyword[27],ch1[10000],ch;
    test();
    int flag[26],len;
    char up[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char low[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    gets(keyword);
    len = strlen(keyword);
    
    memset(flag,0,sizeof(flag));
    for (int i=0;i<len;i++){
        ch=keyword[i];
        if(ch >= 'a'){
            up[ch-97] = 'A' + i;
            low[ch-97] = 'a' + i;
            flag[ch - 'a'] = 1;
        }else{
            up[ch-65] = 'A' + i;
            low[ch-65] = 'a' + i;
            flag[ch - 'A'] = 1;
        }
    }
    for(int i=len,j=25;i<26;i++,j--){
        while (flag[j]!=0)
            j--;
        up[j] = 'A' + i;
        low[j] = 'a' + i;
    }
    
    while(gets(ch1)){
        int i=0;
        while(ch1[i]!='\0'){
            ch = ch1[i];
            if (ch >= 'a' && ch <= 'z')
                ch1[i]=low[ch-'a'];
            else if (ch >= 'A' && ch <='Z')
                ch1[i]=up[ch-'A'];
            i++;
        }
        puts(ch1);
    }
    return 0;
}
