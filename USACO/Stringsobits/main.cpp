/*
ID: danilos4
LANG: C++
TASK: kimbits
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
ofstream fout ("kimbits.out");
ifstream fin ("kimbits.in");
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
const int maxN = 32;

ll N,L,I;
int dp[maxN][maxN];

void precalc(){
	for(int j=0;j<=31;++j)dp[0][j] = 1;
	for(int i=1;i<=31;++i)
	for(int j=0;j<=31;++j){
		if(j == 0)dp[i][j] = 1;
		else dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
	}
}

void print(int nbits, int nones, int idx){
	if(nbits == 0)return;
	int s = dp[nbits-1][nones];
	if(s <= idx){
		write('1');
		print(nbits-1, nones-1, idx-s);
	}else{
		write('0');
		print(nbits-1,nones,idx);
	}
}

void solve(){
	read(N,L,I);
	precalc();
	print(N,L,I-1);
	write('\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
