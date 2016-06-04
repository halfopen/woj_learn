#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;
int list[500001]; 											//全局变量自动初始化为0 
void test(){
	int i=0;
	i++;
	return ;
}
int main()
{
        int T,result;

        while ( scanf("%d",&T) != EOF)
        {
        	for (int i = T - 1;i >= 0;i--)
            	scanf("%d",&list[i]);

	        sort(list,list + T); 							//STL中的排序 
	        if (T % 2 == 1){
	            result = T / 2;
	            result = list[result];
	        }else{
	            result = T / 2;
	            if (list[result - 1] == list[result])
	                result = list[result];
	            else if (list[0] == list[result - 1])
	                result = list[result - 1];
	            else if (list[result] == list[T - 1])
	                result = list[result];
	        }
	
	        printf("%d\n",result);
        }

        return 0;
}
