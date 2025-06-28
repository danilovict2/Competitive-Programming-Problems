/*
ID: danilos4
LANG: C++
TASK: agrinet
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
ofstream fout ("agrinet.out");
ifstream fin ("agrinet.in");
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
const int maxN = 101;

int adj[maxN][maxN];
bool inMST[maxN];
int n;

bool isValidEdge(int a, int b){
	if (a == b)
       return false;
   	if (!inMST[a] && !inMST[b])
        return false;
   	else if (inMST[a] && inMST[b])
        return false;
   	return true;

}

int mst(int src){
	int size = 0, cost = 0;
	memset(inMST,false,sizeof(inMST));
	inMST[src] = 1;
	while(size < n-1){
		int mn = (int)INF, a = -1, b = -1;
		forn(i,n)
		forn(j,n){
			if(isValidEdge(i,j) && mn > adj[i][j]){
				a = i;
				b = j;
				mn = adj[i][j];
			}
		}
		if(a != -1 && b != -1){size++; cost += mn; inMST[a] = inMST[b] = 1;}
	}
	return cost;
}

void solve(){
	read(n);
	forn(i,n)
	forn(j,n)read(adj[i][j]);
	write(mst(0),"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
