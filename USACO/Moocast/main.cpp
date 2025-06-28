/*
ID: danilos4
LANG: C++
TASK: moocast
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
ofstream fout ("moocast.out");
ifstream fin ("moocast.in");
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
const int maxN = 201;

int n;
int adj[maxN][maxN];
bool vis[maxN];

int dfs(int u){
	vis[u] = 1;
	int ans = 1;
	for(int i=0;i<n;++i){
		if(!vis[i] && adj[u][i]){
			vis[i] = 1;
			ans += dfs(i);
		}
	}
	return ans;
}

void solve(){
	read(n);
	vector<int> x(n), y(n), power(n);
	forn(i,n)read(x[i], y[i], power[i]);
	forn(i,n){
		forn(j,n){
			int dist = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
			adj[i][j] = dist <= power[i] * power[i];
		}
	}
	int ans = 0;
	for(int i=0;i<n;++i){
		memset(vis,false,sizeof(vis));
		ans = max(ans, dfs(i));
	}
	write(ans,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
