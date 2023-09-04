/*
ID: danilos4
LANG: C++
TASK: shell
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
ofstream fout ("shell.out");
ifstream fin ("shell.in");
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

int n;
int a[maxN], b[maxN], g[maxN];

int playGame(int initial){
	int score = 0;
	forn(i,n){
		if(a[i] == initial)initial = b[i];
		else if(b[i] == initial)initial = a[i];
		if(g[i] == initial)score++;
	}
	return score;
}

void solve(){
	read(n);
	int ans = 0;
	forn(i,n){
		read(a[i], b[i], g[i]);
	}
	for(int initial=1;initial<=3;++initial){
		ans = max(ans, playGame(initial));
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
