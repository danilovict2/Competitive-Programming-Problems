/*
ID: danilos4
LANG: C++
TASK: reststops
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
ofstream fout ("reststops.out");
ifstream fin ("reststops.in");
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
const int maxN = 201;



void solve(){
	int l,n,rf,rb;
	read(l,n,rf,rb);
	vii v(100000);
	forn(i,n)read(v[i].first, v[i].second);
	bool isMax[100000]={false};
	int mx = -1;
	for(int i=n-1;i>=0;--i){
		if(v[i].second > mx){
			mx = v[i].second;
			isMax[i] = 1;
		}
	}
	ll posf = 0, posb = 0, x = 0, ans=0;
	for(int i=0;i<n;++i){
		if(isMax[i]){
			posf += (v[i].first - x)*rf;
			posb += (v[i].first-x)*rb;
			ans += (posf-posb)*(v[i].second);
			posb = posf;
			x = v[i].first;
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
