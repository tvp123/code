#include<iostream>
using namespace std;
int main()
{
	/* code */
	int t;
	cin>>t;
	int n[t];
	int m[t];
	int a[t][n];
	for (int i = 0; i < t; ++i)
	{
		cin>>n[i];
		cin>>m[i];
		for (int j = 0; j < n[i]; ++j)
		{
			cin>>a[i][j];
		}
	}
	for (int i = 0; i < t; ++i)
	{	
		int count=0;
		for (int j = 0; j <n[i]; ++j)
		{
			int sum=0;
			for (int k = j; k < n[i]; ++k)
			{
				if(j==0 && k==n[i]-1){
					continue;
				}
				sum=sum+a[j][k];
				if(sum%m[i]==0){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}