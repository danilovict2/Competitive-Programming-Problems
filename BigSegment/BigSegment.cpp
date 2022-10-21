#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 10
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


int n;

void solve(){
	int l,r,mn=INT_MAX,mx=-1;
	vector<pair<int,int>> v;
	for(int i=0;i<n;++i){
		read(l,r);
		v.pb(mp(l,r));
		mn = min(mn,l);
		mx = max(mx,r);
	}
	for(int i=0;i<v.size();++i){
		if(v[i].first == mn && v[i].second==mx){write(i+1,'\n'); return;}
	}
	write(-1,"\n");
}


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	read(n);
	solve();
	return 0;
}
