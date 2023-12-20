/*
ID: danilos4
LANG: C++
TASK: backforth
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
ofstream fout("backforth.out");
ifstream fin("backforth.in");
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

bool possibleAnswers[2000];

void friday(int b1milk, vector<int> b1, vector<int> b2) {
	for(int i=0;i<b2.size();++i) {
		possibleAnswers[b1milk + b2[i]] = 1;
	}
}

void thursday(int b1milk, vector<int> b1, vector<int> b2) {
	for(int i=0;i<b1.size();++i) {
		vector<int> newB2 = b2; newB2.pb(b1[i]);
		vector<int> newB1 = b1; newB1.erase(newB1.begin() + i);
		friday(b1milk - b1[i], newB1, newB2);
	}
}

void wednesday(int b1milk, vector<int> b1, vector<int> b2) {
	for(int i=0;i<b2.size();++i) {
		vector<int> newB2 = b2; newB2.erase(newB2.begin() + i);
		vector<int> newB1 = b1; newB1.pb(b2[i]);
		thursday(b1milk + b2[i], newB1, newB2);
	}
}

void tuesday(int b1milk, vector<int> b1, vector<int> b2) {
	for(int i=0;i<b1.size();++i) {
		vector<int> newB2 = b2; newB2.pb(b1[i]);
		vector<int> newB1 = b1; newB1.erase(newB1.begin() + i);
		wednesday(b1milk - b1[i], newB1, newB2);
	}
}

void solve(){
	int n, ans = 0;
	vector<int> b1, b2;
	forn(i,10){read(n); b1.pb(n);}
	forn(i,10){read(n); b2.pb(n);}

	tuesday(1000, b1, b2);

	for(int i=0;i<2000;++i)ans += possibleAnswers[i];
	write(ans,'\n');
}

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
