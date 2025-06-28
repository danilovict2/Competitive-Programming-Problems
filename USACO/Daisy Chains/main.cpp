/*
ID: danilos4
LANG: C++
TASK: 
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
//ofstream fout("diamond.out");
//ifstream fin("diamond.in");
template <typename... T>
void read(T &...args)
{
	((cin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((cout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 101;


void solve(){
	int n;
	int ans = 0;
	read(n);
	int a[maxN];
	forn(i,n)read(a[i]);
	forn(i,n){
		for(int j=i;j<n;++j){
			int total = 0;
			for(int k=i;k<=j;++k) {
				total += a[k];
			}
			for(int k=i;k<=j;++k) {
				if(a[k] * (j-i+1) == total) {
					ans++;
					break;
				}
			}
		}
	}
	write(ans,'\n');
}

int main(void){
	ios::sync_with_stdio(0);
	//fin.tie(0);
	//fout.tie(0);
	solve();
	return 0;
}
