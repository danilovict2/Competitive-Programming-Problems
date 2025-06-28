/*
ID: danilos4
LANG: C++
TASK: swap
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
ofstream fout ("swap.out");
ifstream fin ("swap.in");
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


void rev(int *l, int a, int b){
	while(a < b) {
      	int t = l[a];
      	l[a] = l[b];
      	l[b] = t;
      	a++;
      	b--;
    }
}

void solve(){
	int n,k,a1,a2,b1,b2;
	read(n,k,a1,a2,b1,b2);
	a1--,a2--,b1--,b2--;
	int cursteps = 0;
	int ans[n];
	for(int i=0;i<n;++i)ans[i] = i;
	bool sorted = true;
	do{
		cursteps++;
		rev(ans, a1, a2);
		rev(ans, b1, b2);
		sorted = true;
		for(int i=0;sorted && i<n;++i)sorted = ans[i] == i;
	}while(!sorted);

	k %= cursteps;
	for(int i=0;i<n;++i)ans[i] = i+1;
	for(int i=0;i<k;++i){
		rev(ans, a1, a2);
		rev(ans, b1, b2);
	} 
	forn(i,n)write(ans[i],'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
