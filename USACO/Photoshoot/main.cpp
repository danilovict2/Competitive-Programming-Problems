/*
ID: danilos4
LANG: C++
TASK: breedflip
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
//ofstream fout ("breedflip.out");
//ifstream fin ("breedflip.in");
template <typename... T>
void read(T &...args){
	((cin >> args), ...);
}
template <typename... T>
void write(T... args){
	((cout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 1000;



void solve(){
	int n;
	read(n);
	string s;
	read(s);
	int ans = 0;
	for(int i=n-1;i>=1;i-=2){
		if(s[i] == s[i-1])continue;
		if(s[i] == 'G' && ans & 1)ans++;
		if(s[i] == 'H' && ans % 2 == 0)ans++;
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
