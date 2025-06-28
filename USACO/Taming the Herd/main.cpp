/*
ID: danilos4
LANG: C++
TASK: taming
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
ofstream fout ("taming.out");
ifstream fin ("taming.in");
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
	int n;
	read(n);
	int a[n];
	forn(i,n)read(a[i]);
	a[0] = 0;
	forn(i,n){
		if(a[i] != -1){
			int day = 0;
			for(int j=(i-a[i]);j<i;++j,++day){
				if(a[j] != day && a[j] != -1){
					write("-1\n");
					return;
				}
				a[j] = day;
			}
		}
	}
	int outbreaks = 0, potential_outbreaks = 0;
	forn(i,n){
		if(a[i] == 0)outbreaks++;
		if(a[i] == -1)potential_outbreaks++;
	}
	write(outbreaks,' ',outbreaks+potential_outbreaks,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
