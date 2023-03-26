#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
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

int n;

void solve(){	
	read(n);
	int a;
	int min_dist = INF;
	map<int, pair<int,vector<int>>> m;
	for(int i=1;i<=n;++i){
		read(a);
		m[a].first++;
		m[a].second.pb(i);
		if(m[a].first > 1)
			min_dist = min(min_dist, m[a].second[m[a].second.size()-1] - m[a].second[m[a].second.size()-2]);
	}
	if(min_dist == INF)min_dist = -1;
	else min_dist++;
	write(min_dist,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	read(t);
	while(t--){
		solve();
	}
	return 0;
}