/*
ID: danilos4
LANG: C++
TASK: buckets
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
ofstream fout ("buckets.out");
ifstream fin ("buckets.in");
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
	string s[10];
	forn(i,10)read(s[i]);
	int bx,by,lx,ly,rx,ry;
	forn(i,10){
		forn(j,10){
			if(s[i][j] == 'B')bx = i, by = j;
			if(s[i][j] == 'L')lx = i, ly = j;
			if(s[i][j] == 'R')rx = i, ry = j; 
		}
	}
	int dist_br = abs(bx - rx) + abs(by - ry);
  	int dist_bl = abs(bx - lx) + abs(by - ly);
  	int dist_rl = abs(rx - lx) + abs(ry - ly);
  	if ((bx==lx || by==ly) && (dist_bl == dist_br + dist_rl))
    	write(dist_bl + 1,'\n');
  	else
		write(dist_bl - 1,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
