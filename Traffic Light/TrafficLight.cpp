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
	int n;
    char c;
	read(n,c);
    string s;
    read(s);
    int ans = -1;
    ll mn = 1e18, mx = -1;
    vector<int> g;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'g') {
            g.pb(i);
        }
    }
    g.pb(g[0] + n);
    for (int i = 0; i < n; ++i) {
        if (s[i] == c) {
            int val = *lower_bound(g.begin(), g.end(), i);
            ans = max(ans, val - i);
        }
    }
	write(ans,"\n");
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
