#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int s[a];
	int d[a-1][2];
	for (int i = 0; i < a; ++i)
	{
		cin>>s[i];
	}
	for (int i = 0; i < a-1; ++i)
	{
		cin>>d[i][0];
		cin>>d[i][1];
	}
	return 0;
}