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



void solve(){
	int n;
	read(n);
	vi a(n);
	int cnt[n+10];
	fill(cnt,cnt+n+10,1);
	for(auto &x:a)read(x);
	int k = 0;
	for(int i=1;i<n;++i){
		if(a[i] == a[i-1])
			cnt[k]++;
		else ++k;
	}
	int ans = 0,x;
	for(int i=1;i<=k;++i){
		if((cnt[i] == cnt[i-1]) || (cnt[i] < cnt[i-1]))x=2*cnt[i];
		else if(cnt[i] > cnt[i-1])x=2*cnt[i-1];
		ans = max(ans,x);
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
	solve();
	return 0;
}
