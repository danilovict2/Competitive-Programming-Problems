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
const int maxN = 1e5;


void solve(){
	int n, q;
	read(n, q);
	int m[n+1][19];
	int log[n+1];
	log[1] = 0;
	for(int i=2;i<=n;++i)
		log[i] = log[i/2] + 1;
	
	forn(i,n)read(m[i][0]);

	for(int j=1;j<19;++j) {
		for(int i=0;i <= n-(1<<j); ++i) 
			m[i][j] = min(m[i][j-1], m[i+(1<<(j-1))][j-1]);
	}

	while(q--) {
		int l, r;
		read(l, r);
		l--, r--;
		int len = r - l + 1;
		int k = log[len];
		write(min(m[l][k], m[r-(1<<k)+1][k]),'\n');
	}
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