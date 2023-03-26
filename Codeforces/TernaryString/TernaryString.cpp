#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define FOR(i, n) for (int i = 0; i < n; ++i)
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



void solve(){
	string s;
	read(s);
	vector<pair<char,int>>v;
	for(int i=0;i<s.size();++i){
		if(v.empty() || v.back().first!=s[i])v.pb(mp(s[i],1));
		else v.back().second++;
	}
	int ans = 1e9;
	for(int i=1;i<v.size()-1;++i){
		if(v[i-1].first != v[i+1].first)ans=min(ans,v[i].second+2);
	}
	if(ans>s.size())ans=0;
	write(ans,"\n");
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	read(t);
	while(t--)solve();
	return 0;
}