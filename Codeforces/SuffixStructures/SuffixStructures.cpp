#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
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

string s,t;


void solve(){
    int n = s.size(),m = t.size(),j=0;
	int cnt[30]={0};
	bool aut=0,arr=1,both=1;
	for(int i=0;i<n;++i){
		if(j<m && s[i]==t[j])++j;
		if(j==m)aut=1;
	}

	for(int i=0;i<n;++i)cnt[s[i]-'a']++;
	for(int i=0;i<m;++i)cnt[t[i]-'a']--;

	for(int i=0;i<26;++i){
		arr&=cnt[i]==0;
		both&=cnt[i]>=0;
	}
	if(aut)write("automaton\n");
	else if(arr)write("array\n");
	else if(both)write("both\n");
	else write("need tree");
}	

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(s,t);
	solve();
	return 0;
}