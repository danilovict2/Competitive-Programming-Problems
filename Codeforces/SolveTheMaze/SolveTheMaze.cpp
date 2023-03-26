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

int n,m;

void solve(){
	read(n,m);
	string s[n];
	auto valid = [](int i, int j){
		return i>=0 && i < n && j >= 0 && j < m;
	};
	forn(i,n)read(s[i]);
	forn(i,n){
		forn(j,m){
			if(s[i][j] == 'B'){
				for(int k = 0;k < 4; ++k){
					int x = i + nc[k].first;
					int y = j + nc[k].second;
					if(valid(x,y) && s[x][y] == '.')s[x][y] = '#';
				}
			}
		}
	}
	queue<pii> q;
	bool vis[n][m];
	memset(vis,false,sizeof(vis));
	if(s[n-1][m-1] == '.'){
		q.push({n-1,m-1});
		vis[n-1][m-1] = true;
	}
	while(!q.empty()){
		pii cur = q.front();
		q.pop();
		for(int i=0;i<4;++i){
			int x = cur.first + nc[i].first;
			int y = cur.second + nc[i].second;
			if(valid(x,y) && !vis[x][y] && s[x][y] != '#'){
				q.push({x,y});
				vis[x][y] = 1;
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if((s[i][j] == 'G' && !vis[i][j]) || (s[i][j] == 'B' && vis[i][j])){
				write("No\n");
				return;
			}
		}
	}
	write("Yes\n");
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

