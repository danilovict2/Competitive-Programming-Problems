/*
ID: danilos4
LANG: C++
TASK: feast
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define MOD 9901
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
ofstream fout ("feast.out");
ifstream fin ("feast.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 5000010;

bool dp[2][maxN];

void solve(){
	int t,a,b;
	read(t,a,b);
	dp[0][0] = 1;
	for(int i=0;i<=t;++i){
		if(i - a >= 0)dp[0][i] |= dp[0][i-a];
		if(i - b >= 0)dp[0][i] |= dp[0][i-b];
		dp[1][i/2] |= dp[0][i];
	}
	for(int i=0;i<=t;++i){
		if(i - a >= 0)dp[1][i] |= dp[1][i-a];
		if(i - b >= 0)dp[1][i] |= dp[1][i-b];
	}
	for(int i=t;i>=0;--i){
		if(dp[1][i]){
			write(i,'\n');
			return;
		}
	}
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
