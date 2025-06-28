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
const int maxN = 2 * 1e3;

int n,m;
string s;

void solve(){
	vector<int> v[26];
	FOR(i,n)v[s[i]-'a'].pb(i+1);
	string q;
	
	FOR(i,m){
		read(q);
		int ans = -1;
		vector<int> cnt(26);
		for(auto j:q)cnt[j-'a']++;
		FOR(j,26){
			if(cnt[j]>0)
				ans=max(ans,v[j][cnt[j]-1]);
		}
		write(ans,"\n");
	}
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(n,s,m);
	solve();
	return 0;
}