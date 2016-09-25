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
#include<string.h>
int main(void){
    char start[20];
    test();
    char c,end[20],str[1000],A[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int i,j,l;
    gets(start);
    gets(str);
    gets(end);
    while(strcmp(start,"ENDOFINPUT")>0){
        i=0;
        l=strlen(str);
        while(i<l){
            if(str[i]>='A'&&str[i]<='Z'){
                j=str[i]-'A';
                j=(j+26-5)%26;
                str[i]=A[j];
            }
            i++;
        }
        puts(str);
        gets(start);
        if(strcmp(start,"ENDOFINPUT")==0)
        {break;}
        gets(str);
        gets(end);
    }
    return 0;
}
