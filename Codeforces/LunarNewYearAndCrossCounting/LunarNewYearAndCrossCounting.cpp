#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vii vector<int>
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
const int maxN = 510;

int n;


void solve(){
	string a[n];
	for (int i = 0; i < n; ++i)
		read(a[i]);
		
	int ans = 0;
	if (n >= 3)
		for (int i = 1; i < n - 1; ++i)
			for (int j = 1; j < n - 1; ++j)
				if (a[i][j] == a[i - 1][j - 1] && a[i][j] == a[i - 1][j + 1] && a[i][j] == a[i + 1][j - 1] && a[i][j] == a[i + 1][j + 1] && a[i][j] == 'X')
					++ans;

	write(ans, "\n");
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