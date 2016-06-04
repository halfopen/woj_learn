#include <iostream> 
 
#include <cstdio>  
#include <string> 


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

 

using namespace std;  

int main()  
{  
    string str;  
    bool f = false;      
    int cnt = 0;  
    while(cin >> str) {  
        if(str[0] == '1' || str[0] == '2') 
		{  
            if(f == true) 
                cout << cnt << endl;  
            cout << str << " ";  
            cnt = 0;  
            f = true;   test();
        }  
       
        else if((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')) 
            cnt++;  
    }  
    cout << cnt << endl;  
    return 0;  
} 
