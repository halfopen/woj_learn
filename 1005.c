#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long i, j,Points[100000],Ark_size,size[100], point[100];
    int n;

    while (scanf("%d", &n) != -1) {
        for (i = 0; i < n; i++)
            scanf("%ld%ld", &size[i], &point[i]);
        scanf("%ld", &Ark_size);

        memset(Points, 0, sizeof(Points) );
        
        for (i = 0; i < n; i++){
        	for (j = Ark_size; j >= size[i]; j--){
        		if (Points[j] <= (Points[j - size[i]] + point[i]))
                    Points[j] = Points[j - size[i]] + point[i];
        	}              
        }
            
        printf("%ld\n", Points[Ark_size]);
    }

    return 0;
}
