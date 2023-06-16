/*
ID: danilos4
LANG: C++
TASK: hoofball
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
ofstream fout ("hoofball.out");
ifstream fin ("hoofball.in");
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
const int maxN = 1000;

int n, x[maxN], passto[maxN];

int target(int i){
	int l = -1, r = -1, ldist = 1000, rdist = 1000;
	forn(j,n)
		if(x[j] < x[i] && x[i] - x[j] < ldist)l = j, ldist = x[i] - x[j];
	forn(j,n)
		if(x[j] > x[i] && x[j] - x[i] < rdist)r = j, rdist = x[j] - x[i];

	if(ldist <= rdist)return l;
	return r;
}

void solve(){
	read(n);
	forn(i,n)read(x[i]);
	forn(i,n)passto[target(i)]++;
	int ans = 0;
	forn(i,n){
		if(passto[i] == 0)ans++;
		if(i < target(i) && target(target(i)) == i && passto[i] == 1 && passto[target(i)] == 1)ans++;
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
