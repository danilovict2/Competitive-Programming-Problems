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
vector<int> adj[maxN];
bool vis[maxN]={false};

void dfs(int v, ll &edg, ll &nodes){
	vis[v] = true;
	++nodes;
	edg += adj[v].size();
	for(auto i:adj[v])
		if(!vis[i])
			dfs(i, edg, nodes);
}

void solve(){
	int a,b;
	for(int i=0;i<m;++i){
		read(a,b);
		adj[a].pb(b);
		adj[b].pb(a);
	}
	for(int i=1;i<=n;++i){
		if(!vis[i]){
			ll edg = 0, nodes = 0;
			dfs(i,edg,nodes);
			if(edg != (nodes*(nodes-1))){write("NO\n"); return;}
		}
	}
	write("YES\n");
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