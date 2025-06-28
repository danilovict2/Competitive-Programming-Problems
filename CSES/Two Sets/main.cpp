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
const int maxN = 1001;


void solve(){
	ll n;
	read(n);
	ll sum = (n*(n+1))/2;
	if (sum % 2 != 0) {
		write("NO\n");
		return;
	}

	vector<ll> f;
	vector<ll> s;
	write("YES\n");
	if (n % 2 == 0) {
		for (int i=0;i<n/2;++i) {
			if (i%2 == 0) {
				f.pb(i + 1LL);
				f.pb(n - i);
			} else {
				s.pb(i + 1LL);
				s.pb(n - i);
			}
		}
	} else {
		for (int i=0;i<(n-1)/2;++i) {
			if (i%2 == 0) {
				f.pb(i + 1LL);
				f.pb(n - i - 1);
			} else {
				s.pb(i + 1LL);
				s.pb(n - i - 1);
			}
		}

		if (f.size() > s.size()) {
			s.pb(n);
		} else {
			f.pb(n);
		}
	}

	write(f.size(), '\n');
	for(auto x:f)write(x,' ');
	write('\n', s.size(), '\n');
	for(auto x:s)write(x,' ');
	write('\n');
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
