#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
#define sz(a) a.size() 
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
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
const int maxN = 2*1e5+1;



void solve(){
	int idx[257] = {0}, c[3][9] = {0}, ans = 2;
	idx['m'] = 1;
	idx['p'] = 2;
	idx['s'] = 3;
	for(int i = 0; i < 3; ++i) {
		string s;
		read(s);
		++c[idx[s[1]] - 1][s[0] - '1'];
	}
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 9; ++j) {
			ans = min(ans, 3 - c[i][j]);
			if(j + 2 < 9)
				ans = min(ans, 3 - !!c[i][j] - !!c[i][j + 1] - !!c[i][j + 2]);
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

