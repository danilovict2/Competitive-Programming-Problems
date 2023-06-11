/*
ID: danilos4
LANG: C++
TASK: balancing
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
//ofstream fout ("balancing.out");
//ifstream fin ("balancing.in");
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
const int maxN = 20;

int n,m, s[maxN], t[maxN], c[maxN], a[maxN], b[maxN], cost[maxN], p[maxN];

bool check(vector<int> &conditioners){
	vector<int> cold(101);
	for(int i=1;i<=100;++i){
		for(auto x:conditioners){
			if(a[x] <= i && b[x] >= i)
				cold[i] += p[x];
		}
	}

	for(int i=0;i<n;++i){
		for(int j=s[i];j<=t[i];++j){
			if(cold[j] < c[i])return false;
		}
	}
	return true;
}

void solve(){
	read(n,m);
	forn(i,n)
		read(s[i], t[i], c[i]);
	forn(i,m)
		read(a[i], b[i], p[i], cost[i]);
	ll ans = INF;
	for(int i=0;i<(1<<m);++i){
		
		vector<int> conditioners;
		for(int j=0;j<m;++j)if(i & (1<<j))conditioners.pb(j);
		
		if(check(conditioners)){
			ll sum = 0;
			for(auto x:conditioners)sum += cost[x];
			ans = min(ans, sum);
		}
	}

	write(ans,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	//fin.tie(0);
	//fout.tie(0);
	solve();
	return 0;
}
