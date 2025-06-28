/*
ID: danilos4
LANG: C++
TASK: square
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
ofstream fout ("square.out");
ifstream fin ("square.in");
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

struct Rect{
	int x1,x2,y1,y2;
};


void solve(){
	Rect a, b;
	read(a.x1, a.y1, a.x2, a.y2);
	read(b.x1, b.y1, b.x2, b.y2);
	int longestX = max(a.x2, b.x2) - min(a.x1, b.x1);
	int longestY = max(a.y2, b.y2) - min(a.y1, b.y1);
	write(max(longestX, longestY) * max(longestX, longestY));
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
