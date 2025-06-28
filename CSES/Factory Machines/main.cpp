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
	ll n,t;
	read(n,t);
	ll k[n];
	forn(i,n)read(k[i]);
	ll l = 0, r = 1e18, ans = 0;
	while (l <= r) {
		ll mid = (r + l) / 2;
		ll total = 0;
		forn(i,n) {
			total += (mid / k[i]);
			if (total >= t)break;
		}

		if (total >= t) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}

	write(ans, '\n');
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