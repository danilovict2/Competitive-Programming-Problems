#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
#define forn(j, n) for (int i = (j); i < n; ++i)
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

int n;
vii v, sx[1001],sy[1001];
bool vis[1001][1001]={false};

void bfs(int x,int y){
	queue<pii> q;
	q.push(mp(x,y));
	vis[x][y] = 1;

	while(!q.empty()){
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for(auto v:sx[x]){
			int cx = v.first;
			int cy = v.second;

			if(!vis[cx][cy]){
				vis[cx][cy] = 1;
				q.push(mp(cx,cy));
			}
		}
		for(auto v:sy[y]){
			int cx = v.first;
			int cy = v.second;

			if(!vis[cx][cy]){
				vis[cx][cy] = 1;
				q.push(mp(cx,cy));
			}
		}
	}
}

void solve(){
	int x,y;
	for(int i=0;i<n;++i){
		read(x,y);
		v.pb(mp(x,y));
		sx[x].pb(mp(x,y));
		sy[y].pb(mp(x,y));
	}
	int ans = 0;
	forn(0,v.size()){
		x = v[i].first;
		y = v[i].second;

		if(!vis[x][y]){
			++ans;
			bfs(x,y);
		}
	}
	write(ans-1,"\n");
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