/*
ID: danilos4
LANG: C++
TASK: traffic
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
ofstream fout ("traffic.out");
ifstream fin ("traffic.in");
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
	int a[maxN], b[maxN], n;
	string t[maxN];
	read(n);
	forn(i,n)read(t[i], a[i], b[i]);
	int currA = -1e9, currB = 1e9;
	for(int i=n-1; i>= 0; --i) {
		if(t[i] == "none"){currA = max(currA, a[i]); currB = min(currB, b[i]);}
		if(t[i] == "off"){currA += a[i]; currB += b[i];}
		if(t[i] == "on"){currA -= b[i]; currB -= a[i]; currA = max(0, currA);}
	}
	write(currA, ' ', currB, '\n');
	currA = -1e9, currB = 1e9;
	for(int i=0; i<n; ++i) {
		if(t[i] == "none"){currA = max(currA, a[i]); currB = min(currB, b[i]);}
		if(t[i] == "on"){currA += a[i]; currB += b[i];}
		if(t[i] == "off"){currA -= b[i]; currB -= a[i]; currA = max(0, currA);}
	}
	write(currA, ' ', currB, '\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
