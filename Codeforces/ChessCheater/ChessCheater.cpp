#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
template <typename... T>
void read(T &...args){
	((cin >> args), ...);
}
template <typename... T>
void write(T... args){
	((cout << args), ...);
}
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 2 * 1e5 + 1;



void solve(){
	int n,k;
	read(n,k);
	string s;
	read(s);
	int w=0,l=0,w_streaks=0;	
	vi l_streaks;
	for(int i=0;i<n;++i){
		if(s[i] == 'W'){
			++w;
			if(!i || s[i-1] == 'L')++w_streaks;
		}else{
			++l;
			if(!i || s[i-1] == 'W')l_streaks.pb(0);
			++l_streaks.back();
		}
	}
	if(k >= l){
		write(2*n-1,"\n");
		return;
	}
	if(w == 0){
		write(max(0,2*k-1),"\n");
		return;
	}
	if(s[0] == 'L')l_streaks[0] = 1e8;
	if(s[n-1] == 'L')l_streaks.back() = 1e8;
	sort(l_streaks.begin(),l_streaks.end());
	w+=k;
	for(auto x:l_streaks){
		if(x > k)break;
		k-=x;
		--w_streaks;
	}
	write(2*w - w_streaks,"\n");
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
