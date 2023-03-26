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
#define INF 1e18
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
const int maxN = 2*1e5+1;



void solve(){
	int n;
	read(n);
	set<string> st;
	string s;
	for(int i=0;i<n;++i){
		read(s);
		st.insert(s);
	}
	vector<string> a;
	if(!st.count("purple")){
		a.pb("Power");
	}
	if(!st.count("green")){
		a.pb("Time");
	}
	if(!st.count("blue")){
		a.pb("Space");
	}
	if(!st.count("orange")){
		a.pb("Soul");
	}
	if(!st.count("red")){
		a.pb("Reality");
	}
	if(!st.count("yellow")){
		a.pb("Mind");
	}
	write(sz(a),"\n");
	for(auto i:a)write(i,"\n");
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

