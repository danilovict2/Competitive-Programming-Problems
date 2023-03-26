#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
#define forn(i, j, n) for (int i = (j); i < n; ++i)
#define INF 0x3f3f3f3f
template <typename... T>
void read(T &...args)
{
	((cin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((cout << args), ...);
}
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 2 * 1e5;

int n,m;
map<int,vector<int>>adj;
vector<int> comp;
bool vis[maxN];

void dfs(int v){
	vis[v]=1;
	comp.pb(v);
	for(auto i:adj[v])
		if(!vis[i])
			dfs(i);
}

void solve(){
	int x,y;
	map<int,int> deg;
	for(int i=0;i<m;++i){
		read(x,y);
		adj[x].pb(y);
		adj[y].pb(x);
		deg[x]++;
		deg[y]++;
	}
	ll ans = 0;
	memset(vis,false,sizeof(vis));
	for(int i=1;i<=n;++i){
		if(!vis[i]){
			comp.clear();
			dfs(i);
			bool ok = true;
			for(auto i:comp)ok&=(deg[i]==2);
			if(ok)++ans;
		}
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
	read(n,m);
	solve();
	return 0;
}