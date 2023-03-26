#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
string s;
int t;
void solve(){
	cin>>s;
	vector<int>a;
	a.push_back(0);
	for(int i=0;i<s.size();++i){
		if(s[i]=='R')a.push_back(i+1);
	}
	a.push_back(s.size()+1);
	int mx=0;
	for(int i=0;i<a.size()-1;++i){
		mx=max(mx,a[i+1]-a[i]);
	}
	cout<<mx<<endl;
}

int main(void){
	cin>>t;
	while(t--)solve();
  	return 0;
}