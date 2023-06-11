/*
ID: danilos4
LANG: C++
TASK: notlast
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
ofstream fout ("notlast.out");
ifstream fin ("notlast.in");
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
const int maxN = 20;

int findIndex(string s){
	string cows[] = {"Bessie","Elsie","Daisy","Gertie","Annabelle","Maggie","Henrietta"};
	for(int i=0;i<7;++i){
		if(s == cows[i])return i;
	}
	return -1;
}

void solve(){
	int n;
	read(n);
	vector<pair<string,int>> v(7);
	string s;
	int t;
	forn(i,n){
		read(s,t);
		v[findIndex(s)].second += t;
		v[findIndex(s)].first = s;
	}
	sort(v.begin(), v.end(), [](const pair<string, int> &a, const pair<string, int> &b) { return (a.second < b.second); });
	int mn = v[0].second;
	for(int i=0;i<n;++i){
		if(v[i].second != 0 && mn == 0)mn = v[i].second;
		else if(v[i].second != mn){
			write(v[i].first,'\n');
			return;
		}
	}
	if(n == 1)write(s,'\n');
	else write("Tie\n");
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
