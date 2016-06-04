#include <stdio.h>
#include <stdlib.h>

void test(){
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	//printf("Halfopen\n");
	int i=0;
	i++;
	
}

#include<stdio.h>
int paiming(int b[][5],int n)
{
    int k,i,j,t;
    
            for(k=1;k<n;k++)
            {
                for(i=0;i<n-k;i++)
                {
                    if(b[i][3]<b[i+1][3])
                    {
                        for(j=3;j>=0;j--)
                        {
                            t=b[i][j];
                            b[i][j]=b[i+1][j];
                            b[i+1][j]=t;
                        }
                    }
                }    
            }
            for(i=0;i<n;i++){
              printf(" %d %d %d %d\n",b[i][0],b[i][1],b[i][2],b[i][3]);
          }

}

int main(void) 
{
    int i,j,t,m;
    int count=0,n;
    int arr[10001];
	scanf("%d", &m);test();
	while(m>0)
	{  scanf("%d",&n);test();
	    for(i = 0; i < n; i++)	
	      scanf("%d", &arr[i]);	test();
	      for(i = 0; i < n; i++){	test();
	      		int caasdfas;
	      		char b[] = "+ + = =";	test();
	      		test();
	            for (j = 0; j < n - i - 1; j++){	test();
	                if (arr[j] > arr[j+1]){
	                          t = arr[j];
	                          arr[j] = arr[j+1];
	                          arr[j+1] = t;
	                          count++;
	                  }	test();
	            }	test();
	        }	test();
	    printf("%d\n", count);	test();
	    count=0;
	    m--;
	    
	}
} 
