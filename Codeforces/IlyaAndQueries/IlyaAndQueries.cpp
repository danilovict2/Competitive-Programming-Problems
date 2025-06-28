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
const int maxN = 5001;

string s;

void solve(){
	int m;
	read(m);
	int n = s.size();
	int k = 0;
	int pfx[n];
	pfx[0] = 0;
	for(int i=1;i<n;++i){
		if(s[i] == s[i-1])++k;
		pfx[i] = k;
	}
	int l,r;
	for(int i=0;i<m;++i){
		read(l,r);
		write(pfx[r-1]-pfx[l-1],"\n");
	}
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(s);
	solve();
	return 0;
}

