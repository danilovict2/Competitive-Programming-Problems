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
map<string, int> m;

int getS(string a, string b){
	if(!m.count(a) || !m.count(b))
		return INF;
	return m[a] + m[b];
}

void solve(){
	int c;
	string s;
	for(int i=0;i<n;++i){
		read(c,s);
		sort(s.begin(),s.end());
		if(!m.count(s))
			m[s] = c;
		else
			m[s] = min(c,m[s]);
	}

	int ans = INF;
	if(m.count("A") && m.count("B") && m.count("C"))
		ans = m["A"] + m["B"] + m["C"];
	if(m.count("ABC"))
		ans = min(ans,m["ABC"]);
	ans = min(ans, getS("A", "BC"));
	ans = min(ans, getS("B", "AC"));
	ans = min(ans, getS("C", "AB"));
	ans = min(ans, getS("AB", "BC"));
	ans = min(ans, getS("AC", "BC"));
	ans = min(ans, getS("AC", "AB"));
	if(ans == INF)write("-1\n");
	else write(ans,"\n");
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