#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vii vector<int>
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
const int maxN = 101;

int t,n;

void solve(){
	read(n);
	string s;
	read(s);
	map<pii,int> vis;
	int l = -1,r=n;
	pii curr = {0,0};
	vis[curr] = 0;
	for(int i=0;i<n;++i){
		if(s[i]=='L')--curr.first;
		if(s[i]=='R')++curr.first;
		if(s[i]=='U')--curr.second;
		if(s[i]=='D')++curr.second;
		if(vis.count(curr)){
			if(i-vis[curr]+1<r-l+1){
				l=vis[curr];
				r=i;
			}
		}
		vis[curr] = i+1;
	}
	if(l==-1)write(-1,"\n");
	else write(l+1," ",r+1,"\n");
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(t);
	while(t--)solve();
	return 0;
}