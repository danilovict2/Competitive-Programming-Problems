/*
ID: danilos4
LANG: C++
TASK: lifeguards
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
ofstream fout("lifeguards.out");
ifstream fin("lifeguards.in");
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


void solve(){
	int n;
	read(n);
	int l[n], r[n], covered[1000] = {0};
	forn(i,n) {
		read(l[i], r[i]);
		for(int j=l[i];j<r[i];++j)covered[j]++;
	}
	int ans = -1;
	forn(i,n) {
		int cur = 0;
		for(int j=l[i];j<r[i];++j)covered[j]--;
		forn(j,1000) {
			if(covered[j])cur++;
		}
		ans = max(ans, cur);
		for(int j=l[i];j<r[i];++j)covered[j]++;
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