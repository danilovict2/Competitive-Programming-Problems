/*
ID: danilos4
LANG: C++
TASK: race
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
ofstream fout ("race.out");
ifstream fin ("race.in");
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
const int maxN = 1000;

int n,k;

int solve(){
	int minspeed;
	read(minspeed);
	int ans = 0, speeding = 0, slowing = 0;
	for(int cur=1;;++cur){
		speeding+=cur;
		ans++;
		if(speeding + slowing >= k)return ans;
		if(cur >= minspeed){
			slowing += cur;
			ans++;
			if(speeding + slowing >= k)return ans;
		}
	}
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	read(k,n);
	forn(i,n){
		write(solve(),'\n');
	}
	return 0;
}
