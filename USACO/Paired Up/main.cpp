/*
ID: danilos4
LANG: C++
TASK: pairup
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
ofstream fout ("pairup.out");
ifstream fin ("pairup.in");
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
	int n,x,y;
	read(n);
	vii cows;
	forn(i,n){
		read(x,y);
		cows.pb({y,x});
	}
	sort(cows.begin(),cows.end());
	int ans = 0, i = 0, j = n-1;
	while(i <= j){
		int x = min(cows[i].second, cows[j].second);
		if(i == j)x/=2;
		ans = max(ans, cows[i].first + cows[j].first);
		cows[i].second -= x;
		cows[j].second -= x;
		if(cows[i].second == 0)i++;
		if(cows[j].second == 0)j--;
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
