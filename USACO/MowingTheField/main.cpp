/*
ID: danilos4
LANG: C++
TASK: mowing
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
ofstream fout ("mowing.out");
ifstream fin ("mowing.in");
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


void solve(){
	int n;
	read(n);
	char directions[n];
	int steps[n];
	short lastTime[2001][2001];
	forn(i,n)read(directions[i], steps[i]);
	int x = 1000, y = 1000, ans = 1001, t = 0;
	memset(lastTime, -1, sizeof(lastTime));
	lastTime[x][y] = 0;
	forn(i,n){
		int dirX = 0, dirY = 0;
		if(directions[i] == 'N')dirX = 1;
		if(directions[i] == 'S')dirX = -1;
		if(directions[i] == 'E')dirY = 1;
		if(directions[i] == 'W')dirY = -1;
		forn(j, steps[i]){
			x += dirX;
			y += dirY;
			t++;
			if(lastTime[x][y] >= 0 && t - lastTime[x][y] < ans) {
				ans = t - lastTime[x][y];
			}
			lastTime[x][y] = t;
		}
	}
	if(ans == 1001)ans = -1;
	write(ans,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
