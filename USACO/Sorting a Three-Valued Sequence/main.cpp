/*
ID: danilos4
LANG: C++
TASK: sort3
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
ofstream fout ("sort3.out");
ifstream fin ("sort3.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 52;


void solve(){
	int n;
	read(n);
	int a[n], sorted[n];
	forn(i,n){
		read(a[i]);
		sorted[i] = a[i];
	}
	sort(sorted,sorted+n);
	int ans = 0;
	forn(i,n){
		if(a[i] == sorted[i])continue;
		for(int j=i+1;j<n;++j){
			if(a[i] == sorted[j] && sorted[i] == a[j]){
				swap(a[i],a[j]);
				++ans;
			}
		}
	}
	forn(i,n){
		if(a[i] == 1 && a[i] != sorted[i])ans+=2;
	}
	write(ans,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
