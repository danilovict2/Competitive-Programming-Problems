/*
ID: danilos4
LANG: C++
TASK: blist
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
ofstream fout ("blist.out");
ifstream fin ("blist.in");
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
	int s[n], t[n], b[n];
	forn(i,n)read(s[i], t[i], b[i]);
	int ans = 0;
	for(int time=1; time<=1000; ++time) {
		int buckets = 0;
		forn(i,n){
			if(s[i] <= time)buckets+=b[i];
			if(t[i] <= time)buckets-=b[i];
		}
		ans = max(ans, buckets);
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
