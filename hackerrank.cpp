#include <cmath>
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n;
    cin>>q;
    string s[n];
    string t[q];
            
    vector<string> v;

    unordered_map<string, string> umap;
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
        
    }
    for(int i=0;)
    


    for(int i=0;i<q;i++){
         getline(cin,t[i]);
    }
    string b;
    char c;
    for(int i=0;i<n;i++){
        stringstream ss(s[i]);
        while(ss){
            ss>>b;
            
            cout<<b<<endl;
            v.push_back(b);
            
        }
        
    }
    
    
   
    
    return 0;
}
