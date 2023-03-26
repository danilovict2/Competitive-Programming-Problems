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



void solve(){
	int n,q;
	read(n,q);
	string s;
	read(s);
	int cnt = 0;
	for(int i=0;i<n-2;++i){
		if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c')++cnt;
	}
	while(q--){
		int pos;
		char c;
		read(pos,c);
		pos--;
		for(int i=max(0,pos-2);i<=pos;++i)
			if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c')--cnt;
		s[pos] = c;
		for(int i=max(0,pos-2);i<=pos;++i)
			if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c')++cnt;
		write(cnt,"\n");
	}
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

