/*
ID: danilos4
LANG: C++
TASK: gymnastics
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
ofstream fout ("gymnastics.out");
ifstream fin ("gymnastics.in");
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
const int maxN = 1001;


void solve(){
	int k,n;
	read(k,n);
	int a[k][n];
	forn(i,k)
	forn(j,n)
	read(a[i][j]);
	int ans = 0;
	for(int i=1;i<=n;++i){
		bool betterThan[n+1] = {false};
		for(int j=0;j<k;++j){
			for(int t=0;t<n;++t){
				if(a[j][t] == i)break;
				betterThan[a[j][t]] = true;
			}
		}
		for(int j=1;j<=n;++j)if(!betterThan[j] && j!=i)ans++;
	}
	write(ans,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
