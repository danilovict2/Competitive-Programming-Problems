/*
ID: danilos4
LANG: C++
TASK: stamps
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
ofstream fout ("stamps.out");
ifstream fin ("stamps.in");
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
const int maxN = 100001;

int k,n;
int dp[10000 * 203 + 3];

void solve(){
	read(k,n);
	int mx = -1;
	vector<int> a(n);
	forn(i,n){
		read(a[i]);
		mx = max(mx, a[i]);
	}
	for(int i=0;i<=k*mx+3;++i)dp[i] = (int)INF;
	dp[0] = 0;
	for(auto c:a){
		for(int i=0;i<=mx*k;++i){
			if(dp[i] < k){
				dp[i+c] = min(dp[i+c], dp[i]+1);
			}
		}
	}
	int ans = 0;
	while(dp[ans+1] <= k){
		++ans;
	}
	write(ans,"\n");
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
