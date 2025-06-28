/*
ID: danilos4
LANG: C++
TASK: fact4
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
ofstream fout ("fact4.out");
ifstream fin ("fact4.in");
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
const int maxN = 100001;


void solve(){
	int n;
	read(n);
	int d=1, tw = 0, fv = 0;
	for(int i=2;i<=n;++i){
		int t = i;
		while(t % 2 == 0)
			++tw,t/=2;
		while(t % 5 == 0)
			t/=5,++fv;
		
		d = (d*t) % 10;
	}
	tw = tw - fv;
	for(;tw > 0; tw--)d = (d*2) % 10;
	write(d,"\n");	
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
