#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int T,n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		int s[n], i, j,C;
		bool flag= false;
		for(i=0;i<n;i++)cin>>s[i];
		sort(s, s+n);
		//for(i=0;i<n;i++)cout<<s[i]<<endl;
		for(i=0;i<n && !flag;i++)						//±éÀúÊý×é 
		{
			for(j=n-1;j>i && !flag ;j--)
			{
				for(int k=n-1;k>j;k--)
				{
					if(s[k] == s[i]+s[j]){
						cout<<s[k]<<endl;
						flag = true;
						break;
					}
				}
				
			}
			
		}
		if(!flag)cout<<-1<<endl;
	}
	return 0;
}
