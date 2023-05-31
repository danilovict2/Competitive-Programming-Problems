/*
ID: danilos4
LANG: C++
TASK: speeding
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
ofstream fout ("speeding.out");
ifstream fin ("speeding.in");
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
const int maxN = 5000010;



void solve(){
	int n,m, ans = 0;
	read(n,m);
	int limit[100]={0}, speed[100]={0};
	int cur = 0;
	forn(i,n){
		int x,y;
		read(x,y);
		for(int j=cur;j<cur+x;++j)limit[j] = y;
		cur += x;
	}
	cur = 0;
	forn(i,m){
		int x,y;
		read(x,y);
		for(int j=cur;j<cur+x;++j)speed[j] = y;
		cur += x;
	}
	forn(i,100){
		ans = max(ans, speed[i] - limit[i]);
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
