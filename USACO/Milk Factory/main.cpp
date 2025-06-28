/*
ID: danilos4
LANG: C++
TASK: factory
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
ofstream fout ("factory.out");
ifstream fin ("factory.in");
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
const int maxN = 101;

vector<int> adj[maxN];
bool vis[maxN];

void dfs(int src){
	vis[src] = 1;
	for(auto x:adj[src]){
		if(!vis[x]){
			dfs(x);
		}
	}
}

void solve(){
	int n;
	read(n);
	for(int i=1;i<n;++i){
		int x,y;
		read(x,y);
		adj[x].pb(y);
	}
	for(int i=1;i<=n;++i){
		bool ok = true;
		for(int j=1;j<=n;++j){
			memset(vis,false,sizeof(vis));
			dfs(j);
			if(!vis[i]){
				ok = false;
				break;
			}
		}
		if(ok){
			write(i,'\n');
			return;
		}
	}
	write("-1\n");
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
