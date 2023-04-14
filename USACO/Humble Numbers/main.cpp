/*
ID: danilos4
LANG: C++
TASK: humble
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
ofstream fout ("humble.out");
ifstream fin ("humble.in");
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
const int maxN = 100001;

ll hum[maxN];
int last[maxN]={0};

void solve(){
	int k,n;
	read(k,n);
	int s[k];
	forn(i,k)read(s[i]);
	int nhum = 1;
	hum[0] = 1;
	while(nhum<=n){
		ll mn = INF;
		int minp = -1;
		for(int i=0;i<k;++i){
			while(s[i] * hum[last[i]] <= hum[nhum-1])last[i]++;
			if(s[i]*hum[last[i]] < mn){
				mn = s[i]*hum[last[i]];
				minp = i;
			}
		}

		hum[nhum++] = mn;
		last[minp]++;
	}
	write(hum[n],"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
