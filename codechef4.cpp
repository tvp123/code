#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	int c[t];
	int d[t];
	int s[t];
	int a[t][n];

	for (int i = 0; i < t; ++i)
	{	
		cin>>n;
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j]
		}
	}
	for (int i = 0; i < t; ++i)
	{
		int max = a[i][0];
		for (int j = 1; j < a[i].length; ++j)
		{
			if(a[i][j]>max){
				max = a[i][j];
			}
		}
		cout<<max*(c[t]-1)
	}
;	return 0;
}