#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		int pos;
		int s;
		cin>>n>>x>>s;
		bool p[n];
		memset(p,false,sizeof(p));
		p[pos-1]=true;
		for(int i =0;i<s;i++){
			int x,y;
			cin>>x;
			cin>>y;
			if(p[x-1]==true){
				p[y-1]=true;
				p[x-1]=false;
			}
			else if(p[y-1]==true){
				p[x-1]=false;
				p[y-1]=true;
			}


		}
		for(int i =0;i<n;i++){
			if(p[i]==true)
				cout<<i+1<<endl;
		}
	}
	return 0;
}
