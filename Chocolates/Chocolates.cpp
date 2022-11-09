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
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second);}

int n;

void solve(){
	ll a[n], ans = 0, x = 1e9 + 1;
    for(int i=0;i<n;++i)read(a[i]);
    for(int i=n-1;i>=0;--i){
        x = min(x-1,a[i]);
        if(x>0)ans+=x;
    }
    write(ans,"\n");
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