#include <stdio.h>
#include <stdlib.h>

void test(){
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
	printf("Halfopen\n");
}

int havefun(){
	puts("have fun");
}


int myname[1000]={0};
int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){ //
            int n,a[100]={0},xay=0,amr=0,temp=0,index=0;
            scanf("%d",&n);
            for(int j=0;j<n;j++){
                    scanf("%d",&temp);
                    a[index]=temp; //
                    for(int k=0;k<index;k++){
                            if(a[k]==temp){
                                          if(j%2)
                                                amr+=(index-k+1);
                                          else
                                              xay+=(index-k+1);
                                          index=k-1;
                                          break;
                            }
                    }
                    index++;
            }
            if(xay>amr)
                      printf("xay\n");
            else
                printf("amr\n");
    }//
    return 0;
}
