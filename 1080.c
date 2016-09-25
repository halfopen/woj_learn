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
    int i,n;
    test();
    long int m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&m);
        if(m%14==0){
            printf("snoopy wins the game!\n");
        }else{
            printf("flymouse wins the game!\n");
        }
    }
    return 0;
}
