#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
#define forn(i, j, n) for (int i = (j); i < n; ++i)
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
const int maxN = 2 * 1e5;

int q,n;



void solve(){
	read(n);
	vi p(n);
	for(int i=0;i<n;++i){
		read(p[i]);
		--p[i];
	}
	bool vis[n]={false};
	vi ans(n);
	for(int i=0;i<n;++i){
		if(!vis[i]){
			vi cur;
			while(!vis[i]){
				cur.pb(i);
				vis[i]=1;
				i=p[i];
			}
			for(auto el:cur)ans[el] = cur.size();
		}
	}
	for(int i=0;i<n;++i)write(ans[i]," ");
	write("\n");
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(q);
	while(q--)solve();
	return 0;
}