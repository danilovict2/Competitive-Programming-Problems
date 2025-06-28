/*
ID: danilos4
LANG: C++
TASK: mixmilk
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
ofstream fout ("mixmilk.out");
ifstream fin ("mixmilk.in");
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
	int c[3], m[3];
	forn(i,3)read(c[i], m[i]);
	int i=0;
	while(i<100){
		int b1 = i%3;
		int b2 = (i+1)%3;
		int amt = min(m[b1], c[b2] - m[b2]);
		
		m[b1] -= amt;
		m[b2] += amt;
		i++;
	}

	write(m[0],'\n',m[1],'\n',m[2],'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
