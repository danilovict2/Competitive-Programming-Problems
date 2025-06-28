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
const int maxN = 1e5+1;

int n,m;

void solve(){
	char c;
	read(c);
	string s[n];
	forn(i,n)read(s[i]);
	int ans = 0;
	set<char> checked;
	checked.insert(c);
	checked.insert('.');
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(s[i][j] == c){
				if(i-1 >= 0 && !checked.count(s[i-1][j])){++ans;checked.insert(s[i-1][j]);}
				if(i+1 < n && !checked.count(s[i+1][j])){++ans;checked.insert(s[i+1][j]);}
				if(j-1 >= 0 && !checked.count(s[i][j-1])){++ans;checked.insert(s[i][j-1]);}
				if(j+1 < m && !checked.count(s[i][j+1])){++ans;checked.insert(s[i][j+1]);}
			}
		}
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
	read(n,m);
	solve();
	return 0;
}