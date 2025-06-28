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
ofstream fout("billboard.out");
ifstream fin("billboard.in");
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


bool covered(int x, int y, int x1, int y1, int x2, int y2){
	return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}

void solve(){
	int x1, y1, x2, y2, x3, y3, x4, y4;
	read(x1, y1, x2, y2, x3, y3, x4, y4);
	int cornersCovered = 0;
	if(covered(x1, y1, x3, y3, x4, y4))cornersCovered++;
	if(covered(x2, y2, x3, y3, x4, y4))cornersCovered++;
	if(covered(x1, y2, x3, y3, x4, y4))cornersCovered++;
	if(covered(x2, y1, x3, y3, x4, y4))cornersCovered++;
	if(cornersCovered < 2)write((x2 - x1) * (y2 - y1), '\n');
	else if(cornersCovered == 4)write(0, '\n');
	else {
		int coveredX = max(0, min(x4, x2) - max(x1, x3));
		int coveredY = max(0, min(y4, y2) - max(y1, y3));
		write((x2 - x1) * (y2 - y1) - (coveredX * coveredY), '\n');
	}
}

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
