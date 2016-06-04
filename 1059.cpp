#include <iostream>
#include <algorithm>
#include <cmath>
#include<queue>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
struct list{
    int pri,no,val;
    char name[20];
    bool operator <(const list t)const{
        if(pri==t.pri) return no > t.no;
        else return pri > t.pri;         
    }
};
priority_queue<list>Q;
main()
{
    char order[20];
    list a;
    //record the number
    int k=0;
    while(!Q.empty()) Q.pop();
    while(cin>>order){
        if(0 == strcmp(order,"PUT")){
            cin>>a.name>>a.val>>a.pri;
            a.no=++k;
            Q.push(a);
        }else{
            if(Q.empty()) cout<<"EMPTY QUEUE!"<<endl;
            else{
                cout<<Q.top().name<<" "<<Q.top().val<<endl;
                Q.pop();
            }
        }
    }
}

