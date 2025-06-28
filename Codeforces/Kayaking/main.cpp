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


void solve(){
	int n;
	read(n);
	n*=2;
	int a[n];
	forn(i,n)read(a[i]);
	int ans = (int)INF;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			vector<int> v;
			for(int k=0;k<n;++k){
				if(k != i && k != j)
					v.pb(a[k]);
			}
			sort(v.begin(), v.end());
			int sum = 0;
			for(int k=0;k<v.size();k+=2)
				sum += (v[k+1] - v[k]);
			ans = min(ans, sum);
		}
	}
	write(ans,'\n');
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
