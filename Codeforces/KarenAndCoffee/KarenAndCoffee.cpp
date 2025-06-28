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
const int maxN = 200005;



void solve(){
	int n,k,q;
	read(n,k,q);
	int l,r;
	vi f(maxN);
	while(n--){
		read(l,r);
		f[l]++;
		f[r+1]--;
	}
	int cnt = 0;
	for(int i=0;i<f.size();++i){
		cnt+=f[i];
		f[i] = cnt>=k;
	}
	vi pfx(maxN);
	for(int i=1;i<pfx.size();++i){
		pfx[i] = f[i-1] + pfx[i-1];
	}
	while(q--){
		read(l,r);
		write(pfx[r+1] - pfx[l],"\n");
	}
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

