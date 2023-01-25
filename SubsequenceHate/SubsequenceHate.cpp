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
const int maxN = 2*1e5+1;



void solve(){
	string s;
	read(s);
	int ans = 0;
	int cnt0=0,cnt1=0;
	for(auto i:s){
		cnt0 += (i == '0');
		cnt1 += (i == '1');
	}
	ans = min(cnt1,cnt0);
	int dn0=0, dn1=0;
	for(auto i:s){
		dn0 += (i == '0'),cnt0 -= (i == '0');
		dn1 += (i == '1'),cnt1 -= (i == '1');

		ans = min(ans,dn1+cnt0);
		ans = min(ans,dn0+cnt1);
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
	int t;
	read(t);
	while(t--)solve();
	return 0;
}