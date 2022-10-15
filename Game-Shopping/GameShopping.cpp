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

int n,m;

void solve(){
	int c[n];
	int a[m],j=0,ans=0;
	for(int i=0;i<n;++i)cin>>c[i];
	for(int i=0;i<m;++i)cin>>a[i];
	for(int i=0;i<n;++i){
		if(a[j]>=c[i] && j<m){ans++;j++;}
	}
	write(ans,"\n");
}


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	read(n,m);
	solve();
	return 0;
}

