#include <iostream>
#include <string>


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
    long long n, roads;
	test();
    while ((cin >> n) && n != 0)
    {
        roads = 0;
        for(long long i=n/3;i>=0;i--){
            roads += (n - 3 * i)/2 + 1;
        }
        cout << roads << endl;
    }
    return 0;
}
