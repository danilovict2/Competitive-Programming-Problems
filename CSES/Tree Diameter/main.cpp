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
#define MOD 1000000007
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
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 2 * 1e5 + 10;

int n;
vector<int> adj[maxN];
int node = 0,max_dist = 0;

void dfs(int s, int d, int dist){
	for(auto x:adj[s]){
		if(d != x){
			dfs(x, s, dist + 1);
		}
	}
	if(dist > max_dist)max_dist = dist, node = s;
}

void solve(){
	read(n);
	forn(i,n-1){
		int a,b;
		read(a,b);
		adj[a].pb(b);
		adj[b].pb(a);
	}
	dfs(1,0,0);
	dfs(node,0,0);
	write(max_dist,'\n');
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	solve();
	return 0;
}
