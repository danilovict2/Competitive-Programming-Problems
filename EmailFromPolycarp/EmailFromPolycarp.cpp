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

vector<pair<char,int>> split(string s){
	char c = s[0];
	int cnt = 1;
	vector<pair<char,int>> res;
	for(int i=1;i<=s.size();++i){
		if(s[i] != c){
			res.pb({c,cnt});
			c = s[i];
			cnt = 1;
		}else ++cnt;
	}
	return res;
}

void solve(){
	string s,h;
	read(s,h);
	auto ss = split(s), sh = split(h);
	forn(i,ss.size()){
		if(ss[i].first != sh[i].first || ss[i].second > sh[i].second || ss.size() != sh.size()){
			write("NO\n");
			return;
		}
	}
	write("YES\n");
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

