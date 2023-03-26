#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
string s,s2;
ll t,n;


void solve(){
	cin>>n>>s>>s2;
	ll ans=0;
	for(ll i=0;i<n;++i){
		if(s2[i]=='0')continue;
		
		if(i>0 && s[i-1]=='1'){	ans++;s[i-1]='x';}
		else if(s[i]=='0'){ans++;s[i]='x';}
		else if(i+1<n && s[i+1]=='1'){ans++;s[i+1]=='x';}
		
	}
	cout<<ans<<endl;
}

int main(void){
	cin>>t;
	while(t--)solve();
  	return 0;
}