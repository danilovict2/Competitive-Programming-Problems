#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 10000
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

int n,s,t;


void solve(){
	int a[n+10];
	for(int i=1;i<=n;++i)read(a[i]);
	int cur = s,ans = 0;
	while(1){
		if(a[cur]==-1){write("-1","\n"); return;}
		if(cur == t)break;
		int tmp = cur;
		cur = a[cur];
		a[tmp] = -1;
		++ans;
	}
	write(ans,"\n");
}

int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	read(n,s,t);
	solve();
	return 0;
}