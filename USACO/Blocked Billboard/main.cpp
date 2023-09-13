/*
ID: danilos4
LANG: C++
TASK: billboard
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
ofstream fout ("billboard.out");
ifstream fin ("billboard.in");
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

int area(Rect r){
	return (r.x2 - r.x1) * (r.y2 - r.y1);
}

int intersect(Rect a, Rect b){
	int intersectX = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
	int intersectY = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
	return intersectX * intersectY;
}

void solve(){
	Rect a, b, t;
	read(a.x1, a.y1, a.x2, a.y2);
	read(b.x1, b.y1, b.x2, b.y2);
	read(t.x1, t.y1, t.x2, t.y2);
	write(area(a) + area(b) - intersect(a, t) - intersect(b, t),'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
