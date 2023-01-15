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
const int maxN = 1e5+1;

int n,m;
vector<int> adj[maxN];
bool vis[maxN]={false};

void solve(){
	int a,b;
	for(int i=0;i<m;++i){
		read(a,b);
		adj[a].pb(b);
		adj[b].pb(a);
	}	
	vi ans;
	priority_queue<int, vector<int>, greater<int>> q;
	q.push(1);
	vis[1] = true;
	while(!q.empty()){
		int v = q.top();
		q.pop();
		ans.pb(v);
		for(auto i:adj[v])
			if(!vis[i]){
				q.push(i);
				vis[i] = 1;
			}
		
	}
	for(auto i:ans)write(i," ");
	write('\n');
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