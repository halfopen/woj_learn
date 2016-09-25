#include<cstdio>
#include<iostream>
#include<map>
#include<algorithm>
#include<cstring>

using namespace std;

map<string, bool>mp;
char str[300][260], ans[260];
int nFile, len;
bool vis[300], flag;

int cmp(const void *a, const void *b){
    int l1=strlen((char*)a), l2=strlen((char*)b);
    if(l1!=l2) return l1-l2;
    return strcmp((char*)a,(char*)b);
}

inline void input()
{
    nFile=0;
    int minLen=10000, maxLen=-10000;
    while(gets(str[nFile])){
        if(!str[nFile][0])break;
        int l=strlen(str[nFile]);
        if(l<minLen)minLen=l;
        if(l>maxLen)maxLen=l;
        ++nFile;
    }
    len=maxLen+minLen;
}

void search(int cnt, char *file){
    if(flag)return;
    if(cnt==nFile/2)
	{
        strcpy(ans, file);
        flag=true;
        return;
    }

    for(int i=0; i<nFile/2; ++i)if(!vis[i]){
        vis[i] = true;
        if(cnt==0){
            for(int j=nFile-1; j>=nFile/2; --j)if(!vis[j]){ 
                int l=strlen(str[i])+strlen(str[j]);
                if(l<len) return;
                if(l>len) continue;

                char temp1[300];
                strcpy(temp1, str[i]);
                strcat(temp1, str[j]);
                if(!mp[temp1])
				{ 
                    mp[temp1]=true;
                    vis[j] = true;
                    search(cnt+1, temp1);
                }

                char temp2[300];
                strcpy(temp2, str[j]);
                strcat(temp2, str[i]);
                if(strcmp(temp1, temp2)==0)continue;
                if(!mp[temp2])
				{ 
                    mp[temp2]=true;
                    vis[j]=true;
                    search(cnt+1, temp2);
                }
                vis[j] = false;
            }
        }else{
            for(int j=nFile-1; j>=nFile/2; --j)if(!vis[j])
			{
				char temp2[300];
                int l=strlen(str[i])+strlen(str[j]);
                if(l<len) return;
                if(l>len) continue;
                
                char temp1[300];
                strcpy(temp1, str[i]);
                strcat(temp1, str[j]);
                if(strcmp(temp1, file)==0)
				{
                    vis[j] = true;
                    search(cnt+1, temp1);
                }

                
                strcpy(temp2, str[j]);
                strcat(temp2, str[i]);
                if(strcmp(temp1, temp2)!=0)
				{
                    vis[j] = true;
                    search(cnt+1, temp2);
                }
                int j=0;
                vis[j] = false;
            } 
        }
        vis[i] = false;
    }
}

main()
{
    int T;
    scanf("%d%*c",&T);
    gets(str[0]); 
    while(T--)
	{//asdfasdfasdf
        input();//asdfasdf
        qsort(str, nFile, sizeof(str[0]), cmp);
        char t[10]="abc"; 
        memset(vis, 0, sizeof(vis));
        mp.clear();
        //asdfasdf
        flag=false;
        if(nFile>2)search(0, t);
        else{strcpy(ans, str[0]); strcat(ans, str[1]);}
        puts(ans);
        if(T)printf("\n");
    }
}
