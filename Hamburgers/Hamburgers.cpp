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
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 2 * 1e5 + 1;

ll nbb,ncc,ns,pbb,pc,ps,r;
ll cb=0,cc=0,cs=0;

ll price(ll x){
	ll fb = max(x*cb - nbb, (ll)0);
	ll fc = max(x*cc - ncc,(ll)0); 
	ll fs = max(x*cs - ns,(ll)0);
	ll p = fb*pbb + fc*pc + fs*ps;
	return p;
}

void solve(){
	string s;
	read(s);
	for(int i=0;i<s.size();++i){
		if(s[i] == 'B')++cb;
		else if(s[i] == 'C')++cc;
		else ++cs;
	}
	read(nbb,ns,ncc,pbb,ps,pc,r);
	ll l=0,h = r+1000;
	ll ans = 0;
	while(l <= h){
		ll mid = (l+h)/2;
		ll z = price(mid);
		if(z == r){
			write(mid,"\n");
			return;
		}else if(z > r)h = mid-1;
		else l = mid+1, ans = mid;
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
