#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
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
const int maxN = 1e5;

int n;

void solve(){
	map<int, vi> m;
	int x;
	for(int i=0;i<n;++i){
		read(x);
		m[x].pb(i);
	}

	vector<pii> ans;
	
	for(auto i:m){
		if(m[i.first].size() == 1)
			ans.pb({i.first, 0});	
		else{
			set<int> s;
			for(int j=1;j<m[i.first].size();++j)
				s.insert(abs(m[i.first][j] - m[i.first][j-1]));
			if(s.size() == 1)
				ans.pb({i.first, *s.begin()});			
		}
	}

	write(ans.size(),"\n");
	for(int i=0;i<ans.size();++i)
		write(ans[i].first, " ", ans[i].second,"\n");
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(n);
	solve();
	return 0;
}