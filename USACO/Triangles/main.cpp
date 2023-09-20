/*
ID: danilos4
LANG: C++
TASK: triangles
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
ofstream fout("triangles.out");
ifstream fin("triangles.in");
template <typename... T>
void read(T &...args)
{
	((fin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 101;


void solve(){
	int n;
	read(n);
	int x[n], y[n];
	forn(i,n)read(x[i], y[i]);
	int ans = 0;
	for (int i=0;i<n;++i) {
		for (int j=0;j<n;++j) {
			for(int k=0;k<n;++k) {
				if (y[i] == y[j] && x[i] == x[k]) {
					int area = abs((y[i] - y[k]) * (x[i] - x[j]));
					ans = max(ans, area);
				}
			}
		}
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
