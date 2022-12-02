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
const int maxN = 101;

int n,m;

void solve(){
	read(n,m);
	string s;
	int a[n][m],sum=0;
	for(int i=0;i<n;++i){
		read(s);
		for(int j=0;j<m;++j){
			a[i][j] = s[j]-'0';
			sum+=a[i][j];
		}
	}
	int mn = INF;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			int cnt = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
			if(cnt==0)continue;
			mn = min(mn,max(1,cnt-1));
		}
	}
	if(sum==0)write("0\n");
	else write(1+sum-mn,"\n");
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;read(t);
	while(t--)solve();
	return 0;
}