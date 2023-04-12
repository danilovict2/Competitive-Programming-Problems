/*
ID: danilos4
LANG: C++
TASK: cowtour
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define MOD 9901
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
ofstream fout ("cowtour.out");
ifstream fin ("cowtour.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 151;

int n,x[maxN],y[maxN];
double adj[maxN][maxN];

double dist(int i, int j){
	double dx = (double)(x[i] - x[j]);
	double dy = (double)(y[i] - y[j]);
	return sqrt(dx*dx + dy*dy);
}

void sp(){
	for(int k=0;k<n;++k){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
			}
		}
	}
}

void solve(){
	read(n);
	string s;
	forn(i,n)read(x[i],y[i]);
	forn(i,n){
		read(s);
		forn(j,n){
			if(s[j] == '1')adj[i][j] = dist(i,j);
			else adj[i][j] = (double)INF;
			if(i == j)adj[i][j] = 0;
		}
	}
	sp();
	double max_dist[n]={0},diam = (double)INF;
	forn(i,n){
		max_dist[i] = -1;
		forn(j,n){
			if(adj[i][j] != (double)INF){
				max_dist[i] = max(max_dist[i], adj[i][j]);
			}
		}
		for(int j=0;j<i;++j){
			if(adj[i][j] != (double)INF)continue;
			diam = min(diam, max_dist[i] + dist(i,j) + max_dist[j]);
		}	
	}
	for(int i=0;i<n;++i)diam = max(diam,max_dist[i]);
	write(fixed,setprecision(6),diam,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
