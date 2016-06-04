#include<iostream>
#include<cstdio>

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



int have(int a, int b) 
{
	if(0 == b)
		return a;
	else 
		return have(b, a%b);
    
}
int main() {
    int a,b,n;
    
    while(cin>>a>>b>>n) {
        if((0 == a && 0 == b)) {
            if(n) {
                cout<<"Impossible!"<<endl;
            } else {
                cout<<"Possible!"<<endl;
            }
        }
        else {
            if(0 == n % have(a,b)) {
                cout<<"Possible!"<<endl;
            } else {
                cout<<"Impossible!"<<endl;
            }
        }
    }
    return 0;
}
