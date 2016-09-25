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


int main(void){
    int m,n,p,i;
    
    scanf("%d%d%d",&m,&p,&n);
    while(m!=0&&n!=0&&p!=0){
      i=p*n;
      if(i>m){
          printf("%d\n",i);
      }else{
      	test();
          printf("%d\n",m);
      }
      test();
      scanf("%d%d%d",&m,&p,&n);  
    }
    return 0;
}
