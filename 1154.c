#include <stdio.h>
#include<stdio.h>
#include<string.h>
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



int main(void){
    char str[60];
    int i,l,j=1;
    gets(str);
    test();
    while(str[0]!='#'){
        l=strlen(str);
        for(i=0;i<l;i++){
            if(i%2==1)
            {str[i]=str[i]-32;}
        }
        printf("Case %d: ",j);
        puts(str);
        j++;
        test();
        gets(str);
    }
    test();
    return 0;
}
