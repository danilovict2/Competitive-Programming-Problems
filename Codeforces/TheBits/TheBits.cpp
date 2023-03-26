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
	int n;
	read(n);
	string a,b;
	read(a,b);
	ll cnt00=0,cnt10=0,cnt11=0,cnt01=0;
	forn(i,sz(a)){
		if(a[i] == '0' && b[i] == '0')++cnt00;
		if(a[i] == '1' && b[i] == '1')++cnt11;
		if(a[i] == '1' && b[i] == '0')++cnt10;
		if(a[i] == '0' && b[i] == '1')++cnt01;
	}
	ll ans = (cnt00*cnt11)+(cnt00*cnt10)+(cnt10*cnt01);
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

