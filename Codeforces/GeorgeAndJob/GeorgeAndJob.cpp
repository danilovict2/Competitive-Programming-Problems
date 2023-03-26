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
const int maxN = 5005;

int n,m,k;
int a[maxN];
ll dp[maxN][maxN];

ll call(int pair, int cnt){
	if(dp[pair][cnt] != -1)return dp[pair][cnt];
	if(pair > (n-m) || cnt >= k)return 0;
	ll opt0=0, opt1=0;
	for(int i = pair;i<pair+m;++i)
		opt0 += a[i];
	opt0 += call(pair+m,cnt+1);
	opt1 = call(pair+1,cnt);
	return dp[pair][cnt] = max(opt0,opt1);
}

void solve(){
	read(n,m,k);
	forn(i,n)read(a[i]);
	memset(dp,-1,sizeof(dp));
	write(call(0,0),"\n");
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

