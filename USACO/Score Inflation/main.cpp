/*
ID: danilos4
LANG: C++
TASK: inflate
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
ofstream fout ("inflate.out");
ifstream fin ("inflate.in");
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
const int maxN = 10010;

vii values;
int dp[maxN];

void solve(){
	int n,m;
	read(m,n);
	int a,b;
	forn(i,n){
		read(a,b);
		values.pb({a,b});
	}
	dp[0] = 0;
	for(int i=1;i<=m;++i){
		int mx = 0;
		for(auto x:values){
			if(i - x.second >= 0){
				int t = dp[i - x.second] + x.first;
				mx = max(mx, t);
			}
		}
		dp[i] = mx;
	}
	write(dp[m],"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
