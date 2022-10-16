#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define N 10001
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
bool vis[N]={false};

int n;


void solve(){
	int a[n];
	int s1=0,s2=0;
	for(int i=0;i<n;++i){cin>>a[i]; s1+=a[i];}
	for(int i=0;i<n;++i){
		s2+=a[i];
		if(s2>(s1/2) && s1%2!=0){cout<<i+1<<endl; return;}
		else if(s2>=(s1/2) && s1%2==0){cout<<i+1<<endl; return;}
	}
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
