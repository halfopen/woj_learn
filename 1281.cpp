#include <stdio.h> 
#include <stdlib.h> 
#define Max(a,b) ((a) > (b) ? (a) : (b)) 
main() 
{ 
    int n;
    while(scanf("%d",&n) != EOF && n != 0)
    {
        int i, j, a, b, num, max, t, q, sum; 
        scanf("%d",&q);
        int *A = (int *)malloc(n*sizeof(int));
        int *B = (int *)malloc(n*sizeof(int));
        for(i = 0; i < n; i ++){
              scanf("%d",&A[i]);
              B[i] = -1;
        }          
        for(t = 0,num = 1,i = 1; i < n; i++){ 
              if(A[i] == A[i - 1]) num ++;
              else{
                  B[t++] = num;
                  num = 1;
              }
              if(i == n - 1 && A[i] == A[i - 1]){
                  B[t++] = num;
                  num = 0;
              }
        }

        for(i= 0; i < q; i++){
                scanf("%d %d",&a,&b);                
                for(sum = 0,max = -1,j = 0; j < t; j++){
                    sum += B[j];
                    if(sum >= b){
                        if(max == -1) {
                            max = b - a + 1;
                            break;
                        }else{
                            max = max > (B[j] - (sum - b)) ? max : (B[j] - (sum - b));
                            break;
                        }
                    }
                    if(sum >= a){
                        if(max == -1) max =sum- a + 1;
                        else  max = max > B[j] ? max : B[j];

                    }
                }
        printf("%d\n",max);
        }
    } 
}
