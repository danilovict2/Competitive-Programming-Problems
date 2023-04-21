/*
ID: danilos4
LANG: C++
TASK: cowtip
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
ofstream fout ("cowtip.out");
ifstream fin ("cowtip.in");
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

int n;

void solve(){
	read(n);
	string s[n];
	forn(i,n)read(s[i]);
	int ans = 0;
	for(int i=n-1;i>=0;--i){
		for(int j=n-1;j>=0;--j){
			if(s[i][j] == '1'){
				++ans;
				for(int a=0;a<=i;++a){
					for(int b=0;b<=j;++b){
						s[a][b] = s[a][b] == '1' ? '0' : '1';
					}
				}
			}
		}
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
