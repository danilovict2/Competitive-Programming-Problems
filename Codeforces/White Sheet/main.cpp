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
const int maxN = 1000005;
#define x first
#define y second



pair<pii, pii> intersect(pii a, pii b, pii c, pii d) {
	int lf, rg, up, dn;
	lf = max(min(a.x, b.x), min(c.x, d.x));
	rg = min(max(a.x, b.x), max(c.x, d.x));
	up = min(max(a.y, b.y), max(c.y, d.y));
	dn = max(min(a.y, b.y), min(c.y, d.y));

	if (rg <= lf || up <= dn) return { {0, 0}, {0, 0} };

	return { { lf, dn }, { rg, up } };
}

ll area(pii a, pii b) {
	return 1ll * abs(a.x - b.x) * abs(a.y - b.y);
}

void solve(){
	vector<pii> p(6);

	forn(i, 6)
		cin >> p[i].x >> p[i].y;

	pair<pii, pii> wb1 = intersect(p[0], p[1], p[2], p[3]);
	pair<pii, pii> wb2 = intersect(p[0], p[1], p[4], p[5]);
	pair<pii, pii> inter = intersect(wb1.x, wb1.y, wb2.x, wb2.y);

	ll swhite = area(p[0], p[1]);
	ll swb1 = area(wb1.x, wb1.y);
	ll swb2 = area(wb2.x, wb2.y);
	ll sinter = area(inter.x, inter.y);

	if (swhite > swb1 + swb2 - sinter) write("YES\n");
	else write("NO\n");
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
