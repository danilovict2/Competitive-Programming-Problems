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
#define MOD 1000000007
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
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 1001;

int n,m;
string s[maxN];
bool vis[maxN][maxN];
int p[maxN][maxN];

bool isValid(int i, int j){
	return i >= 0 && i < n && j >= 0 && j < m && s[i][j] != '#' && !vis[i][j];
}

void bfs(int i, int j){
	queue<pii> q;
	q.push({i,j});
	vis[i][j] = 1;
	while(!q.empty()){
		int x = q.front().first, y = q.front().second;
		q.pop();
		for(int v = 0; v < 4; ++v){
			int X = x + dirs2[v].first;
			int Y = y + dirs2[v].second;
			if(!isValid(X,Y))continue;
			vis[X][Y] = 1;
			p[X][Y] = v;
			q.push({X,Y});
		}
	}
}

void solve(){
	read(n,m);
	int Ax,Ay,Bx,By;
	forn(i,n){
		read(s[i]);
		forn(j,m){
			if(s[i][j] == 'A')Ax = i, Ay = j;
			if(s[i][j] == 'B')Bx = i, By = j;
		}
	}
	memset(vis,false,sizeof(vis));
	bfs(Ax, Ay);
	if(vis[Bx][By]){
		write("YES\n");
		vector<char> steps;
		while(Ax != Bx || Ay != By){
			int step = p[Bx][By];
			if(step == 0)steps.pb('U');
			if(step == 1)steps.pb('D');
			if(step == 2)steps.pb('R');
			if(step == 3)steps.pb('L');
			Bx -= dirs2[step].first, By -= dirs2[step].second;
		}
		reverse(steps.begin(), steps.end());
		write(steps.size(),'\n');
		for(auto x:steps)write(x);
		write('\n');
	}else write("NO\n");
	
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	solve();
	return 0;
}
