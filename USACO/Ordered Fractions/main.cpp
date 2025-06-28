/*
ID: danilos4
LANG: C++
TASK: frac1
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
ofstream fout ("frac1.out");
ifstream fin ("frac1.in");
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
	vector<pair<float,string>> ans;
	ans.pb({0,"0/1"});
	ans.pb({1,"1/1"});
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(i<j && gcd(i,j)==1){
				ans.pb({(float)i/j,to_string(i)+"/"+to_string(j)});
			}
		}
	}
	sort(ans.begin(),ans.end());
	for(auto x:ans)write(x.second,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
