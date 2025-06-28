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
const int maxN = 1001;

string board[8];
int ans;
bool column[8]={false};
bool diag1[16]={false};
bool diag2[16]={false};

void search(int row) {
	if (row == 8) {
		ans++;
		return;
	} else {
		for(int col=0;col<8;++col) {
			if(column[col] || diag1[col+row] || diag2[col-row+7] || board[row][col] == '*')continue;
			column[col] = diag1[col+row] = diag2[col-row+7] = 1;
			search(row+1);
			column[col] = diag1[col+row] = diag2[col-row+7] = 0;
		}
	}
}

void solve(){
	for(int i=0;i<8;++i)read(board[i]);
	search(0);
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
