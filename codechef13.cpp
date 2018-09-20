#include <bits/stdc++.h>
using namespace std;

bool multiple(long x, long n){

    if(n<0)return false;
    if(n%x==0)
        return true;
    else 
        return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m,x,y;
        cin>>n>>m>>x>>y;
        bool flag1,flag2;
        flag1=false;
        flag2=false;
        
        if(multiple(x,n-1)){
            flag1=true;
        }
        if(multiple(y,m-1)){
            flag2=true;
        }
        
        if(flag1==false || flag2==false){
            if(multiple(x,n-2) && multiple(y,m-2)){
                flag1=true;
                flag2=true;
        
            }
            
         }
        if(flag1==true && flag2==true){
            cout<<"Chefirnemo"<<endl;

        }
        else
            cout<<"Pofik"<<endl;
        
    }
#include <bits/stdc++.h>
using namespace std;

bool multiple(long x, long n){

    if(n<0)return false;
    if(n%x==0)
        return true;
    else 
        return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m,x,y;
        cin>>n>>m>>x>>y;
        bool flag1,flag2;
        flag1=false;
        flag2=false;
        
        if(multiple(x,n-1)){
            flag1=true;
        }
        if(multiple(y,m-1)){
            flag2=true;
        }
        
        if(flag1==false || flag2==false){
            if(multiple(x,n-2) && multiple(y,m-2)){
                flag1=true;
                flag2=true;
        
            }
            
         }
        if(flag1==true && flag2==true){
            cout<<"Chefirnemo"<<endl;

        }
        else
            cout<<"Pofik"<<endl;
        
    }
}