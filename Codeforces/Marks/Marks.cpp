#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define FOR(i, n) for (int i = 0; i < n; ++i)
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
const int maxN = 1e5;

int n, m;

void solve(){
	string a[n];
	for(int i=0;i<n;++i)read(a[i]);
	int ans = 0;
	for (int i = 0; i < n; ++i){
		bool wasBest = false;
		for (int j = 0; j < m; ++j){
			bool isBest = true;
			for (int k = 0; k < n; ++k)
				if (a[k][j] > a[i][j])
					isBest = false;
			if (isBest)
				wasBest = true;
		}
		if (wasBest)
			ans++;
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
	read(n, m);
	solve();
	return 0;
}