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
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 2 * 1e5 + 1;

vector<int> cpr[1001];

void solve(){
	int n;
	read(n);
	int x;
	vector<int> idx[1001];
	for(int i=1;i<=n;++i){
		int x;
		read(x);
		idx[x].pb(i);
	}
	int ans = -1;
	for(int i=1;i<=1000;++i){
		for(auto j:cpr[i]){
			if(!idx[i].empty() && !idx[j].empty())
				ans = max(ans,idx[i].back() + idx[j].back());
		}
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
	for(int i=1;i<=1000;++i){
		for(int j=1;j<=1000;++j){
			if(gcd(i,j) == 1){
				cpr[i].pb(j);
			}
		}
	}
	int t;
	read(t);
	while(t--)solve();
	return 0;
}
