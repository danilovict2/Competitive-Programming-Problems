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
const int maxN = 2 * 1e5 + 10;

int n,x;


void solve(){
	read(n,x);
	vii a;
	int c;
	forn(i,n){
		read(c);
		a.pb({c,i+1});
	}
	sort(a.begin(),a.end());
	forn(i,n){
		int j = 0, k = n-1;
		while(j<k){
			if(j!=i && k!= i && a[i].first + a[j].first + a[k].first == x){
				write(a[i].second," ",a[j].second," ",a[k].second,'\n');
				return;
			}else if(a[i].first + a[j].first + a[k].first > x)k--;
			else j++;
		}
	}
	write("IMPOSSIBLE\n");
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
