/*
ID: danilos4
LANG: C++
TASK: guess
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
ofstream fout("guess.out");
ifstream fin("guess.in");
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

vector<string> characteristics[maxN];

int common(int i, int j){
	int cnt = 0;
	for(auto c1:characteristics[i]) {
		for(auto c2:characteristics[j]) {
			cnt += c1 == c2;
		}
	}
	return cnt;
}

void solve(){
	int n;
	read(n);
	forn(i,n){
		string s;
		int k;
		read(s,k);
		forn(j,k){
			read(s);
			characteristics[i].pb(s);
		}
	}
	int ans = 0;
	forn(i,n){
		for(int j=i+1;j<n;++j){
			ans = max(ans, common(i,j));
		}
	}
	write(ans + 1,'\n');
}

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
