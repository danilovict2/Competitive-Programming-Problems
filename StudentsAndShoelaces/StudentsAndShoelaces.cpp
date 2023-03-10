#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
template <typename... T>
void read(T &...args){
	((cin >> args), ...);
}
template <typename... T>
void write(T... args){
	((cout << args), ...);
}
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 2 * 1e5 + 1;




void solve(){
	int n,m;
	read(n,m);
	map<int, pii> adj;
	map<pii,bool> del;
	int deg[n+1]={0};
	for(int i=0;i<m;++i){
		int u,v;
		read(u,v);
		adj[i] = {u,v};
		++deg[u];
		++deg[v];
	}
	int ans = 0;
	
	while(1){
		vii v;
		for(int i=0;i<m;++i){
			pii p = adj[i];
			if((deg[p.first] == 1 || deg[p.second] == 1) && !del[p])
				v.pb(p);
		}
		for(auto i:v){
			deg[i.first]--;
			deg[i.second]--;
			del[i] = 1;
		}
		if(v.empty())break;
		else ++ans;
	}
	write(ans,"\n");
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	solve();
	return 0;
}
