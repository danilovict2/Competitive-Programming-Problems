/*
ID: danilos4
LANG: C++
TASK: tttt
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
ofstream fout ("tttt.out");
ifstream fin ("tttt.in");
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

string game[3];

int cowWins(char c) {
	if (game[0][0] == c && game[1][1] == c && game[2][2] == c) return 1;
	if (game[0][2] == c && game[1][1] == c && game[2][0] == c) return 1;
 
	
	for (int i=0; i<3; i++) {
		if (game[0][i] == c && game[1][i] == c && game[2][i] == c) return 1;
		if (game[i][0] == c && game[i][1] == c && game[i][2] == c) return 1;
	}
	
	return 0; 
}
 

bool check3(char c1, char c2, char a, char b, char c) {
	if (a != c1 && a != c2) return false;
	if (b != c1 && b != c2) return false;
	if (c != c1 && c != c2) return false;
	
	
	if (a != c1 && b != c1 && c != c1) return false;
	if (a != c2 && b != c2 && c != c2) return false;
  
  	return true;
}
 

int teamWins(char c1, char c2) {
  	if (check3(c1, c2, game[0][0], game[1][1], game[2][2])) return 1;
  	if (check3(c1, c2, game[0][2], game[1][1], game[2][0])) return 1;
 
  	for (int i=0; i<3; i++) {
    	if (check3(c1, c2, game[0][i], game[1][i], game[2][i])) return 1;
    	if (check3(c1, c2, game[i][0], game[i][1], game[i][2])) return 1;
  	}
  
  	return 0; 
}

void solve(){
	read(game[0], game[1], game[2]);
	int ans = 0;
	for(char c='A'; c<='Z'; ++c)
		ans += cowWins(c);
	write(ans, '\n');
	ans = 0;
	for (char c1 = 'A'; c1 <= 'Z'; ++c1) 
    	for (char c2 = c1+1; c2 <= 'Z'; ++c2) 
      		ans += teamWins(c1, c2);
	write(ans, '\n');
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
