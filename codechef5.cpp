#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n[t],u[t],d[t];
	int** a = new int*[t];
	for (int i = 0; i < t; ++i)
	{
		
		cin>>n[i]>>u[i]>>d[i];
		a[i] = new int[n[i]]
		for (int j = 0; j < n[i]; ++j)
		{
			cin>>a[i][j];
		}

	}
	for (int i = 0; i < t; ++i)
	{	int flag;
		flag=0;
		for (int j = 0; j < n[i]; ++j)
		{
			if(a[i][j]+u[i]>a[i][j+1]||a[i][j]-d[i]>a[i][j+1]){
				continue;
			}
			else if(a[i][j]>a[i][j+1]|| flag==0){
				flag=1;
				continue;
			}
			else{
				cout<<j+1;
				break;

			}
		}
	}

	return 0;
}