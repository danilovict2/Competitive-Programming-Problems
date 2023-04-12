/*
ID: danilos4
LANG: C++
TASK: ttwo
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
ofstream fout ("ttwo.out");
ifstream fin ("ttwo.in");
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

string s[10];

void rotate(int &pos){
	if(pos == 3)pos = 0;
	else pos++;
}

bool isValid(int i, int j){
	return i>=0 && i<10 && j>=0 && j < 10 && s[i][j] != '*';
}

void solve(){
	int fx,fy,cx,cy;
	for(int i=0;i<10;++i){
		read(s[i]);
		for(int j=0;j<10;++j){
			if(s[i][j] == 'F'){
				fx = i;
				fy = j;
			}
			if(s[i][j] == 'C'){
				cx = i;
				cy = j;
			}
		}
	}
	int cdir = 0, fdir = 0,ans = 0;
	while(1){
		if(fx == cx && fy == cy)break;
		if(ans > 1e5){ans = 0; break;}
		if(!isValid(fx+dirs2[fdir].first, fy+dirs2[fdir].second))rotate(fdir);
		else fx+=dirs2[fdir].first, fy += dirs2[fdir].second;
		if(!isValid(cx+dirs2[cdir].first, cy+dirs2[cdir].second))rotate(cdir);
		else cx+=dirs2[cdir].first, cy += dirs2[cdir].second;
		++ans;
	}
	write(ans,"\n");	
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
