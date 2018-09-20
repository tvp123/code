#include<iostream>
#include<string>
using namespace std;

int main() {
	int a;
    cin>>a;
    int c[a],t[a];
    int mint1,mint2,mint3;
    int flag1=0,flag2=0,flag3=0;
    
    for (int i = 0; i < a; ++i)
    {
    	cin>>c[i];
    	if(c[i]<1 || c[i]>1000){
    		cout<<"error";
    		return 0;
    	}
    }
    for (int i = 0; i < a; ++i)
    {	

    	cin>>t[i];
    	if(t[i]<1 || t[i]>3){
    		cout<<"error";
    		return 0;
    	}
    }
    for (int i = 0; i < a; ++i)
    {
    	if(t[i]==1)
    	{
    		if(flag1==0){
    			mint1=c[i];
    			flag1=1;
    		}
    		if(c[i]<mint1){
    			mint1=c[i];
    		}
    	}
    	if(t[i]==2)
    	{
    		if(flag2==0){
    			mint2=c[i];
    			flag2=1;
    		}
    		if(c[i]<mint2){
    			mint2=c[i];
    		}
    	}if(t[i]==3)
    	{
    		if(flag3==0){
    			mint3=c[i];
    			flag3=1;
    		}
    		if(c[i]<mint3){
    			mint3=c[i];
    		}
    	}
    }
    if(mint1+mint2<mint3)
    	cout<<(mint1+mint2);
    else
    cout<<mint3;
	return 0;
}
