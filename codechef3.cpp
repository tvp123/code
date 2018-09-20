#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s[t];
    for (int i=0;i<t;i++){
        cin>>s[i];
    }
    for(int i=0;i<t;i++){
        int ct=0;
        int ctt=0;
        int a[s[i].length()];
        for (int j = 0; j < s[i].length(); j++)
        {
            if(s[i][j] =='*')
                continue;
            
            for (int k = j+1; k <s[i].length(); k++)
            {
                if(s[i][j]==s[i][k])
                {
                    
                    s[i][j]='*';
                    s[i][k]='*';
                    a[ctt]=j;
                    a[s[i].length()-ctt-1]=k;
                    ctt++;
                    break;
            
            }


        }}
        for (int l = 0; l < s[i].length(); ++l)
        {
            if(s[i][l]!='*')
                ct++;
        }
        if(ct>1)
            cout<<"-1";
        else{
            if(ct!=1){
                for(int q=0;q<s[i].length();q++)
                    cout<<a[q]+1<<" ";
            }
            else{
                for (int l = 0; l < s[i].length(); ++l)
                {
                    if(s[i][l]!='*')
                        a[s[i].length()/2]=l;
                }
                for(int q=0;q<s[i].length();q++)
                    cout<<a[q]+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}