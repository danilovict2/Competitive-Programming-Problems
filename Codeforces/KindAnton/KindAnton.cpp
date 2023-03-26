#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define mp make_pair
#define FOR(i, n) for (int i = 0; i < n; ++i)
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
const int maxN = 1e5;

int n;

void solve(){
	read(n);
	int a[n],b[n];
	FOR(i,n)read(a[i]);
	FOR(i,n)read(b[i]);
	bool hasOne=false, hasMinusOne=false;
	for(int i=0;i<n;++i){
		if(b[i] < a[i] && !hasMinusOne){
			write("NO\n");
			return;
		}
		if(b[i] > a[i] && !hasOne){
			write("NO\n");
			return;
		}

		if(a[i] == -1)hasMinusOne = 1;
		if(a[i] == 1)hasOne = 1;
	}

	write("YES\n");
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
	while(t--)solve();
	return 0;
}