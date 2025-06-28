/*
ID: danilos4
LANG: C++
TASK: butter
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
ofstream fout("butter.out");
ifstream fin("butter.in");
template <typename... T>
void read(T &...args)
{
	((fin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 850;

int N, P, C;
int cows[maxN];
vector<pair<int,int>> g[maxN];

int bfs(int start) {
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	vector<int> dist(maxN, INF);
	pq.push({0, start});
	dist[start] = 0;

	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();

		for (auto x:g[u]) {
			int v = x.first, w = x.second;
			if (dist[u] + w < dist[v]) {
				dist[v] = dist[u] + w;
				pq.push({dist[v], v});
			}
		}
	}

	int ret = 0;
	for (int i=0;i<N;++i)
		ret += dist[cows[i]];
	return ret;
}

void solve(){
	read(N, P, C);
	forn(i,N)read(cows[i]);
	forn(i, C) {
		int v,u,w;
		read(v,u,w);
		g[v].pb({u, w});
		g[u].pb({v, w});
	}

	int ans = INT_MAX;
	for(int i=1;i<=P;++i)
		ans = min(ans, bfs(i));
	write(ans, '\n');
}

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}