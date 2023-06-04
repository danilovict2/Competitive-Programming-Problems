/*
ID: danilos4
LANG: C++
TASK: cbarn
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
ofstream fout ("cbarn.out");
ifstream fin ("cbarn.in");
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
const int maxN = 1001;

int r[maxN], n;

int calc(int idx, int sum){
	int ret = 0;
	sum -= r[idx], idx++;
	while(sum > 0){
		ret += sum;
		sum -= r[idx%n];
		idx++;
	}
	return ret;
}

void solve(){
	read(n);
	int sum = 0;
	forn(i,n){
		read(r[i]);
		sum += r[i];
	}
	int ans = (int)INF;
	forn(i,n){
		ans = min(ans, calc(i, sum));
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
