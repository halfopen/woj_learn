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
	int i=0;
	i++;
	
}


int main(void){
    char str1[60],str2[60];
    int i,j,l,num;
    gets(str1);
    gets(str2);
    test();
    while(str1[0]!='#'){
        num=0;
        i=0;
        test();
        l=strlen(str1);
        do{
          if((str1[i]=='A'&& str2[i]=='T')||(str1[i]=='C'&& str2[i]=='G')||(str1[i]=='G'&& str2[i]=='C')||(str1[i]=='T'&& str2[i]=='A')){
          }else{
              num++;
          }
          i++;
        }while(i<l);
        
        printf("%d\n",num);
        gets(str1);
        if(str1[0]=='#'){
            break;
        }
        test();
        gets(str2);
    }
    return 0;
}
