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
const int maxN = 2 * 1e5;

void solve(){
	int n;
	read(n);
	string s[n];
	forn(i,n)read(s[i]);
	ll dp[n][n];
	memset(dp, 0, sizeof(dp));
	int fr = n-1, fc = n-1;
	for(int i=0;i<n;++i) {
		if (s[i][0] == '*' && fc == n-1)fc = i;
		if (s[0][i] == '*' && fr == n-1)fr = i;
	}

	dp[0][0] = s[0][0] == '.';
	for(int i=1;i<=fc;++i)dp[i][0] = 1;
	for(int i=1;i<=fr;++i)dp[0][i] = 1;
	
	for(int i=1;i<n;++i) {
		for(int j=1;j<n;++j) {
			if (s[i-1][j] != '*')dp[i][j] += dp[i-1][j];
			if (s[i][j-1] != '*')dp[i][j] += dp[i][j-1];
			if (s[i][j] == '*')dp[i][j] = 0;
			dp[i][j] %= MOD;
		}
	}

	//for(int i=0;i<n;++i)
	write(dp[n-1][n-1],'\n');
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