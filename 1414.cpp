#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef Urls::const_iterator UrlsIter;

typedef multimap<int ,string , greater<int> > Urlrank;
typedef Urlrank::const_iterator RankIter;

Urls url;
Urlrank urlrank;


int main()
{
    string prompt,str;
    int n,m;
    string visit("Visit");
    //string display("Display");    typedef map<string ,int> Urls;
    
    cin>>n;

    while( n-- ){
        cin>>m;

        url.clear();
        urlrank.clear();

        while( m--){
            cin >> prompt >> str;

            if ( visit.compare(prompt)==0){
                url[str]++;
            }else{
                for(UrlsIter iter = url.begin(); iter != url.end(); iter++ ){
                    string tmp(iter->first);
                    if ( tmp.find(str) == 0 ){
                        urlrank.insert( make_pair( iter->second,iter->first ) );
                    }
                }

                for( RankIter iter = urlrank.begin(); iter != urlrank.end(); iter++)
                    cout << iter->second <<endl;

                cout <<endl;
                urlrank.clear();
            }
        }
    }
    return 0;
}
