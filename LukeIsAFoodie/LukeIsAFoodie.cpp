#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 300001
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

int n,x;


void solve(){
	read(n,x);
	int a[n];
	for(int i=0;i<n;++i)read(a[i]);
	int cnt = 0,l=a[0],r=a[0];
	for(int i=1;i<n;++i){
		if (a[i] > r) r = a[i];
		if (a[i] < l) l = a[i];
		if (r - l > 2 * x) {
			cnt++;
			l = r = a[i];
		}	
	}
	write(cnt,"\n");
}

int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int t;
	read(t);
	while(t--)solve();	
	return 0;
}