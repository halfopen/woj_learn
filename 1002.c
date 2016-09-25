#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


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


int main()  
{  
    char str[1024];  
    int f = 0;      
    int cnt = 0;  
    while(scanf("%s",str)>0) {  
        if(str[0] == '1' || str[0] == '2') 
		{  
            if(f == 1) 
                printf("%d\n",cnt);  
            //cout << str << " ";  
	    printf("%s ",str);
            cnt = 0;  
            f = 1;   test();
        }  
       
        else if((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')) 
            cnt++;  
    }  
    printf("\n"); 
    return 0;  
} 
