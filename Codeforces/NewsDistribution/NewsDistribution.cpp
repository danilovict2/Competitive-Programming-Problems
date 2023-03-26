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
const int maxN = 5 * 1e5;

int parent[maxN+1], siz[maxN+1];

int find(int x){
	if(x == parent[x])
		return x;
	return parent[x] = find(parent[x]);
}

void unite(int a,int b){
	int x = find(a);
	int y = find(b);
	
	if (siz[x] > siz[y]){
		parent[y] = x;
		siz[x] += siz[y];
	}else{
		parent[x] = y;
		siz[y] += siz[x];
	}
}

int n,m;


void solve(){
	int k;
	int u,v;
	for(int i=1;i<=n;++i){
		parent[i] = i;
		siz[i] = 1;
	}
	for(int i=1;i<=m;++i){
		read(k);
		if(k)
			read(u);
		for(int j=1;j<k;++j){
			read(v);
			unite(u,v);
		}
	}
	
	map<int, int> m;
	for(int i=1;i<=n;++i)
		m[find(i)]++;
	for(int i=1;i<=n;++i)
		write(m[find(i)]," ");
	write("\n");
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