/*
ID: danilos4
LANG: C++
TASK: herding
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
ofstream fout ("herding.out");
ifstream fin ("herding.in");
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


void solve(){
	vi a(3);
	read(a[0],a[1],a[2]);
	sort(a.begin(),a.end());
	if(a[0]+1 == a[1] && a[1]+1 == a[2]){
		write("0\n");
	}else if((a[1]-a[0] == 2) || (a[2] - a[1] == 2)){
		write("1\n");
	}else{
		write("2\n");
	}
	write(max(a[2]-a[1],a[1]-a[0])-1,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
