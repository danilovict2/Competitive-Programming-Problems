/*
ID: danilos4
LANG: C++
TASK: holstein
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
ofstream fout ("holstein.out");
ifstream fin ("holstein.in");
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
	int v;
	read(v);
	int vitamins[v];
	forn(i,v)read(vitamins[i]);
	int g;
	read(g);
	int scoops[g][v];
	forn(i,g){
		forn(j,v)read(scoops[i][j]);
	}
	int fullSum = (int)INF;
	vector<int> ans;
	int currLen = (int)INF;
	for(int i=1;i<(1<<g);++i){
		int cur[v] = {0}, sum = 0, len=0;
		for(int j=0;j<g;++j){
			if(i & (1<<j)){
				++len;
				for(int k=0;k<v;++k){
					cur[k] += scoops[j][k];
					sum += scoops[j][k];
				}
			}
		}
		if((sum < fullSum && len <= currLen) || len < currLen){
			bool ok = true;
			for(int i=0;i<v;++i)
				if(cur[i] < vitamins[i]){ok = false; break;}
			if(!ok)continue;
			fullSum = sum;
			ans.clear();
			for(int j=0;j<g;++j){
				if(i & (1<<j)){
					ans.pb(j+1);
				}
			}
		}
		currLen = ans.size();
	}
	write(ans.size()," ");
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();++i){
		write(ans[i]);
		if(i != ans.size() - 1)write(" ");
	}
	write('\n');
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
