/*
ID: danilos4
LANG: C++
TASK: time
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
ofstream fout ("time.out");
ifstream fin ("time.in");
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
const int maxN = 1010;

vector<int> adj[maxN];

void solve(){
	int n,m,c;
	read(n,m,c);
	int cost[maxN];
	for(int i=1;i<=n;++i)read(cost[i]);
	forn(i,m){
		int x,y;
		read(x,y);
		adj[x].pb(y);
	}
	int dp[maxN][maxN];
	int ans = 0;
	memset(dp, -1, sizeof(dp));
	dp[1][1] = 0;
	for(int d=1;d<=1000;++d){
		for(int i=1;i<=n;++i){
			if(dp[d][i] != -1){
				for(auto x:adj[i]){
					dp[d+1][x] = max(dp[d+1][x], dp[d][i] + cost[x]);
				}
			}
		}
		ans = max(ans, (dp[d][1] - (c * (d-1) * (d-1))));	
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
