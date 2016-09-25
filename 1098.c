#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

main(){
	char* ss[2] = {"dongfangxu", "zap"};
	int next[2] = {10, 3},k;
	cin >> k;
	for (int h = 0; h < k; h++){
		string t;
		cin >> t;
		int max = 0,flag = 0,ans[2] = { 0 },count = 0;
		string::size_type pos = 0,post=0,source=0;
		for (int i = 0; i < 2;i++){
			count = 0;
			pos = 0;
			if (t.find(ss[0], pos) == string::npos&&t.find(ss[1], pos) == string::npos)
				break;
			while ((post = t.find(ss[i], pos))
				!= string::npos)
			{
				if (count == 0){
					count++;
					pos = post+next[i];
				}
				else if (post==pos)
				{
					count++;
					pos = post + next[i];
				}
				else
				{
					if (ans[i] < count)
						ans[i] = count;
					count = 0;
				}
			}
			if (ans[i] < count)
				ans[i] = count;
		}
		flag=ans[0] < ans[1]?1:0;
		printf("%s!\n", ss[flag]);
	}
}
