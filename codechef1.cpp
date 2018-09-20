#include<iostream>
#include<string>
using namespace std;
int fun(char a){
    if(a == 'c'||a == 'h'||a == 'e'||a == 'f'){
        return 1;}
    else {
        return 0;}
}
int check(char a, char b, char c,char d){
    if(a != b && a !=c && a !=d && b!=c && b!=d && c!=d  ){
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
int x;
cin>>x;
int ct;
string s[x]; 

for(int i=0;i<x;i++){
    cin>>s[i];
}
for(int i=0;i<x;i++){
    ct=0;
    for(int j=0;j<s[i].length();j++){

        if(fun(s[i][j])){

            if(fun(s[i][j+1])){

                if(fun(s[i][j+2])){

                    if(fun(s[i][j+3])){
                        if(check(s[i][j],s[i][j+1],s[i][j+2],s[i][j+3])==1){
                    
                        ct=ct+1;
                    
                    }}}}}
        
        

        

        
            
        }
        if(ct){
            cout<<"lovely ";
            cout<<ct<<"\n";
        }
        else
            cout<<"normal"<<"\n";

        
    }
return 0;
}
