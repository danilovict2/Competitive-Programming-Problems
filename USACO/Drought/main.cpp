/*
ID: danilos4
LANG: C++
TASK: evolution
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
//ofstream fout ("evolution.out");
//ifstream fin ("evolution.in");
template <typename... T>
void read(T &...args){
	((cin >> args), ...);
}
template <typename... T>
void write(T... args){
	((cout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 101;


void solve(){
	int n;
	read(n);
	vector<ll> h(n);
	forn(i,n)read(h[i]);
	if(n == 1){write(0,'\n'); return;}
	ll ans = 0;
	forn(j,2){
		for(int i=1;i<n-1;++i){
			if(h[i] > h[i-1]){
				ll diff = h[i] - h[i-1];
				ans += 2*diff, h[i+1] -= diff, h[i] = h[i-1];
			}
		}
		if(h[n-1] > h[n-2]){
			write(-1,'\n');
			return;
		}
		reverse(h.begin(), h.end());
	}
	if(h[0] < 0)write(-1,'\n');
	else write(ans,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	//fin.tie(0);
	//fout.tie(0);
	int t;
	read(t);
	while(t--)solve();
	return 0;
}
