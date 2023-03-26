#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define FOR(i, n) for (int i = 0; i < n; ++i)
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
const int maxN = 3000;

int n;
ll s[maxN],c[maxN];

void solve(){
	for(int i=0;i<n;++i)read(s[i]);
	for(int i=0;i<n;++i)read(c[i]);
	ll ans = LONG_LONG_MAX;
	for(int i=0;i<n;++i){
		ll b = -1,cost = c[i];
		for(int j=0;j<i;++j){
			if(s[j]>=s[i])continue;
			if(b==-1||c[j]<c[b])b=j;
		}
		if(b==-1)continue;
		cost+=c[b];
		b=-1;
		for(int j=i+1;j<n;++j){
			if(s[j]<=s[i])continue;
			if(b==-1||c[j]<c[b])b=j;
		}
		if(b==-1)continue;
		cost+=c[b];
		ans = min(ans,cost);
	}
	if(ans == LONG_LONG_MAX)ans = -1;
	write(ans,"\n");
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(n);
	solve();
	return 0;
}