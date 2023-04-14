/*
ID: danilos4
LANG: C++
TASK: comehome
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
ofstream fout ("comehome.out");
ifstream fin ("comehome.in");
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
const int maxN = 53;

int dist[maxN][maxN];

int code(char a){
	if(isupper(a))return a - 'A';
	else return a - 'a' + 26;
}

void solve(){
	int p;
	read(p);
	char x,y;
	int d;
	for(int i=0; i<52; i++)
    for(int j=0; j<52; j++)dist[i][j] = 60000;
    for(int i=0; i<26; i++)dist[i][i] = 0;
	
	forn(i,p){
		read(x,y,d);
		int X = code(x), Y = code(y);
		dist[X][Y] = dist[Y][X] = min(dist[X][Y], d);
	}
	for(int k=0;k<52;++k){
		for(int i=0;i<52;++i){
			for(int j=0;j<52;++j){
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	char ans; int len = 60001;
	for(int i = 'A'; i<='Y'; ++i){
		if(dist[code(i)][code('Z')] < len){
			len = dist[code(i)][code('Z')];
			ans = i;
		}
	}
	write(ans," ",len,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
