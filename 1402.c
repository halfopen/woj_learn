#include<iostream>
#include<stdio.h>
#include   <stdlib.h>
using namespace std;
int area(float num[][2],int no);
main(){
	int k=1;
	while (k)
	{
		float num[100][2];
		for (int i = 0; i < k; i++)
		{
			if (i == 0)
			{
				scanf("%d", &k);
				if (k == 0)  return 0;
				scanf("%f%f", &num[i][0], &num[i][1]);
			}
		if(i) scanf("%f%f", &num[i][0], &num[i][1]);
		}
		cout << area(num, k) << endl;
	}
	return 0;
}


int area(float num[][2], int no){
	float area_s=0;
	for (int i = 0; i < no; i++)
	{
		area_s += (num[(i + 1) % no][0] - num[i][0])*(num[(i + 1) % no][1] + num[i][1]) / 2;
	}
	area_s = abs(area_s);

	int change = int(area_s);
	if ((area_s - change)>0.5)
		change++;
	return change;
}
