/*
ID: danilos4
LANG: C++
TASK: ratios
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
ofstream fout("ratios.out");
ifstream fin("ratios.in");
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
const int maxN = 850;

void solve(){
	int x[4], y[4], z[4];
	for(int i=0;i<4;++i)
		read(x[i], y[i], z[i]);
	
	for(int a=0;a<100;++a) {
		for(int b=0;b<100;++b) {
			for(int c=0;c<100;++c) {
				for(int d=1;d<100;++d) {
					int curX = a * x[1] + b * x[2] + c * x[3];
					int curY = a * y[1] + b * y[2] + c * y[3];
					int curZ = a * z[1] + b * z[2] + c * z[3];
					if (curX == d*x[0] && curY == d*y[0] && curZ == d*z[0]) {
						write(a, ' ', b, ' ', c, ' ', d, '\n');
						return;
					}
				}
			}
		}
	}

	write("NONE\n");
}

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}