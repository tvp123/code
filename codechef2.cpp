#include<iostream>
#include<math>
#include<string>
using namespace std;
int count_ov(string s) {
  int count = 0;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == 'O') count++;

  return count;
}
int count_ev(string s) {
  int count = 0;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == 'E') count++;

  return count;
}
int check_eo(string s) {
 

  for (int i = 0; i < s.size(); i++)
    if (s[i] == 'E' || s[i] == 'O') return 1;
	else return 0;


}



int main()
{
	int t;
	if(t>1000 || t<1)
	{
		return 0;
	}
	int p;
	float m;
	if(m>12 || m<0){
		return 0;
	}
	int x;
	int k;
	string s[t];
	string a[t];
	cin>>t;
	for(int i=0;i<t;i++){
		int om;
		int em;
		int ov;
		int ev;
		cin<<p<<m<<x<<k;
		cin<<s[i];
		if(s[i].length()!=k){
			break;
		}
		if(!check_eo(s[i])){
			break;
		}
		if(p>12 || p<1){
			return;
		}
		if(p>k){
			a[i]="no";
			continue;
		}
		if(p>m*x){
			a[i]="no";
			continue;
		}
		om = ceil(m/2.0); 
		em = floor(m/2.0);
		ov = count_ov(s[i]);
		ev = count_ev(s[i]);
		if((ov-om*x <=0) && (ev-em*x <=0)){
			a[i]="yes";
		}
		else a[i]="no";





	}
	for(int i=0;i<t;i++){
		
		cout<<a[i];
	}
	return 0;
}