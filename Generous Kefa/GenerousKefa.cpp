#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define N 1000000001
#define FOR(i,n) for(int i=0;i<n;++i)
template <typename... T>
void read(T&... args){
	((cin>>args), ...);
}
template <typename... T>
void write(T... args){
	((cout<<args), ...);
}
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n,k;
string s;

void solve(){
	vector<int> a(26,0);
	for(int i=0;i<n;++i)a[s[i]-97]++;
	for(auto i:a){
		if(i>k){cout<<"NO"<<endl; return;}
	}
	cout<<"YES"<<endl;
}


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	read(n,k,s);
	solve();
	return 0;
}
