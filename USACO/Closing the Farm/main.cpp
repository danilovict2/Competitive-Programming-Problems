/*
ID: danilos4
LANG: C++
TASK: closing
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define MOD 9901
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
ofstream fout ("closing.out");
ifstream fin ("closing.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 3500;

vector<int> adj[maxN];
bool vis[maxN]={false};
bool ignored[maxN]={false};
int ok = 0;

void dfs(int u){
	vis[u] = 1;
	ok++;
	for(auto x:adj[u])
		if(!vis[x] && !ignored[x])
			dfs(x);
}

void solve(){
	int n,m;
	read(n,m);
	forn(i,m){
		int x,y;
		read(x,y);
		adj[x].pb(y);
		adj[y].pb(x);
	}	
	dfs(1);
	if(ok == n)write("YES\n");
	else write("NO\n");
	int ord[n];
	forn(i,n)read(ord[i]);
	for(int i=0;i<n-1;++i){
		ok = 0;
		ignored[ord[i]] = 1;
		memset(vis,false,sizeof(vis));
		dfs(ord[n-1]);
		if(ok == n-1-i)write("YES\n");
		else write("NO\n");
	}
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
