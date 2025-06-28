/*
ID: danilos4
LANG: C++
TASK: lineup
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
ofstream fout ("lineup.out");
ifstream fin ("lineup.in");
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

map<string, vector<string>> m;
bool check(string s[]){
	for(int i=0;i<8;++i){
		for(auto x:m[s[i]]){
			if(!(i > 0 && s[i-1] == x || i < 7 && s[i+1] == x))return false;
		}
	}
	return true;
}

void solve(){
	int n;
	read(n);
	string s[] = {"Beatrice", "Sue", "Belinda", "Bessie", "Betsy", "Blue", "Bella", "Buttercup"};
	sort(s, s+8);
	string t,k;
	forn(i,n){
		read(t, k, k, k, k, k);
		m[t].pb(k);
	}
	do{
		if(check(s)){
			for(auto x:s)write(x,'\n');
			return;
		}
	}while(next_permutation(s, s+8));
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
