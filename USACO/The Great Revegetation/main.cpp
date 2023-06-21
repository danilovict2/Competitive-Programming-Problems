/*
ID: danilos4
LANG: C++
TASK: revegetate
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
ofstream fout ("revegetate.out");
ifstream fin ("revegetate.in");
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

vector<int> pastures[maxN];
vector<pair<int, int>> cow_pastures(1);
int n,m;


void solve(){
	read(n,m);
	for(int i=1;i<=m;++i){
		int x,y;
		read(x,y);
		pastures[x].pb(i);
		pastures[y].pb(i);
		cow_pastures.pb({x,y});
	}
	vector<int> ans(n+1);
	for(int i=1;i<=n;++i){
		set<int> exclude;
		for(auto cow:pastures[i]){
			if(cow_pastures[cow].first != i)exclude.insert(ans[cow_pastures[cow].first]);
			else exclude.insert(ans[cow_pastures[cow].second]);
		}
		for(int j=1;j<=4;++j){
			if(!exclude.count(j)){
				ans[i] = j;
				break;
			}
		}
	}
	for(int i=1;i<ans.size();++i)write(ans[i]);
	write('\n');

}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
