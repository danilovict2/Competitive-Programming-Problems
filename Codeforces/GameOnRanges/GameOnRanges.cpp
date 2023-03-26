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
const int maxN = 101;

int n;

void solve(){	
	read(n);
	vector<pii> rng;
	set<pii> s;
	int l,r;
	for(int i=0;i<n;++i){
		read(l,r);
		rng.pb(mp(l,r));
		s.insert(mp(l,r));
	}
	for(int i=0;i<n;++i){
		for(int d=rng[i].first;d<=rng[i].second;++d){
			if((d==rng[i].first || s.count({rng[i].first, d-1}))&&(d==rng[i].second || s.count({d+1,rng[i].second}))){
				write(rng[i].first, " ", rng[i].second," ",d,"\n");
				break;
			}
		}
	}
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
	while (t--)
		solve();
	return 0;
}