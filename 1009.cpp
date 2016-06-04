#include<iostream>
using namespace std;
//asddfasdf
const int INF = 53356;
char str[105][105]; 
int tmp =0; 

int fun (int x,int y,int z);
//asdfasdfsdf
void DisplayPath(int A[][100],int path[][100],int n);

void  Ppath(int path[][100],int i,int j);

int main()
{
    int citys,rodes;  
    
    while(cin >> citys >> rodes)
    { 
        int a[4000][5],pl,sl,p,q;
        char b[4000];    
    
        for(int i=0;i<rodes;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin >> a[i][j];
            } 
            cin >> b[i];
        }              
        cin >> pl >> sl;

        int G[100][100];
        int A[100][100],path[100][100];
        for(int i=0;i<citys;i++)
            for(int j=0;j<citys;j++)
            { 
                A[i][j]=INF; 
                G[i][j]=INF; 
            } 
        for(int n=0;n<rodes;n++){      
            
            p=a[n][0];
            q=a[n][1]; 
            G[p][q]=a[n][4]; 
            str[p][q]=b[n]; 
        }                        
        for(int i=0;i<citys;i++)
            for(int j=0;j<citys;j++){
                A[i][j]=G[i][j];
                path[i][j]=-1;
            }
        for(int n=0;n<rodes;n++){                    
            p=a[n][0];
            q=a[n][1]; 
            if(a[n][2]>pl||a[n][3]>sl){
                A[p][q]=INF;
            }
        }
        for(int k=0;k<citys;k++){
            for(int i=0;i<citys;i++)
                for(int j=0;j<citys;j++)
                    if(A[i][j]>A[i][k]+A[k][j]){                                                              
                        A[i][j]=A[i][k]+A[k][j];
                        path[i][j]=k;                                                            
                    }
        }
        DisplayPath(A,path,citys); 
    } 
    return 0;
} 

int fun (int x,int y,int z)
{ 
  return z; 
  
}
//asdfasdfsdf
void DisplayPath(int A[][100],int path[][100],int n)
{

    Ppath(path,0,n-1);
    cout << str[tmp][n-1];

}

void  Ppath(int path[][100],int i,int j)
{
    int k;
    k=path[i][j];

    if(k==-1)
        return;
    
    Ppath(path,i,k);
    cout << str[tmp][k];
    tmp = k; 
    Ppath(path,k,j);
}
