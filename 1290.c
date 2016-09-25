
#include <iostream>
using namespace std;

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
    int nv,t, result,a[10000];

    while (cin >> nv && nv!=0){
        result = 0;
        test();
        int agasdfasd;
        for(int i=0;i<nv;i++)
            cin >> a[i];
        for (int i=0;i<nv;i++){
            for (int j=0;j<nv-i-1;j++){
                if (a[j] > a[j+1]){
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                    result++;
                }test();
            }
            
        }
        cout << result << endl;
    }
    return 0;
}
