/*
ID: danilos4
LANG: C++
TASK: cownomics
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
ofstream fout("cownomics.out");
ifstream fin("cownomics.in");
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
const int maxN = 501;

string p[maxN],s[maxN];
int n,m;

bool check(int j1, int j2, int j3){
	set<tuple<char,char,char>> checked;
	forn(i,n)checked.insert({p[i][j1], p[i][j2], p[i][j3]});
	forn(i,n) {
		if(checked.count({s[i][j1], s[i][j2], s[i][j3]}))return false;
	}
	return true;
}

void solve(){
	read(n,m);
	forn(i,n)read(s[i]);
	forn(i,n)read(p[i]);
	int ans = 0;
	forn(j1,m){
		for(int j2=j1+1;j2<m;++j2){
			for(int j3=j2+1;j3<m;++j3) {
				if(check(j1,j2,j3))ans++;
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
