#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>    
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
	int i=0;
	i++;
	
}

 

int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}

  
int main()  
{  
    char max[1000];  
    int N, i, j,temp,carry; 
      
    while(scanf("%d", &N) != EOF)  {  
        memset(max, '\0' ,sizeof(max));  
        max[0] = '1';  
        test();
        for(i=N; i>0; i--)  {  
            carry = 0;  
            j = 0;  
            while(max[j] != 0)  {  
                temp = (max[j] - '0')*2;  
                max[j] = (temp%10)+'0' + carry;  
                carry = temp/10;  
                j++;              
            }  
                          
            if(carry != 0)  
                max[j] = carry + '0';              
            int adfd=0;  
            max[0] += 1;  
        }  
          
        for(i= strlen(max)-1;  i>=0; i--)  {  
            j = max[i]-'0';  
            printf("%d", j);  
        }  
        test();  
        printf("\n");  
    }  
    return 0;  
}  
