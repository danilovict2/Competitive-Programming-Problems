/*
ID: danilos4
LANG: C++
TASK: stamps
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
ofstream fout("stamps.out");
ifstream fin("stamps.in");
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
const int maxN = 101;

void solve(){
	ll N, K;
	read(K, N);
	vector<ll> coins;
	forn(i, N) {
		ll c;read(c);
		coins.pb(c);
	}

	int dp[10000 * (200 + 3) + 3];
	dp[0] = 0;

	for (ll i=1;;++i) {
		dp[i] = INF;
		for (auto c:coins) {
			if (i - c >= 0)
				dp[i] = min(dp[i], dp[i-c] + 1);
		}

		if (dp[i] > K) {
			write(i-1,'\n');
			return;
		}
	}
}

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}