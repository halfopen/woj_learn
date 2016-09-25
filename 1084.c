#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;

    while (cin >> num){
        num = (int)sqrt((float)num);
        cout << num << endl;
    }
    return 0;
}
