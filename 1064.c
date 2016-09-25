#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
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


using namespace std;

int main()
{
    int n=0, book=0, flag=0,books[1000] = {0};

    while(cin >> n){
        memset(books, 0, sizeof(books));
        for (int i=0;i<n;i++){
            cin >> book;
            books[book] = 1;
        }
        flag = 0;
        for (int i=0;i<1000;i++){
            if (books[i]>0)
            {
                if(flag==1)
                    cout << " ";
                cout << i;
                flag = 1;
            }
        }
        cout << endl;
    }
    return 0;
}
