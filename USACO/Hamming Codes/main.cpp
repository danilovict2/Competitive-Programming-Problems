/*
ID: danilos4
LANG: C++
TASK: hamming
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
ofstream fout ("hamming.out");
ifstream fin ("hamming.in");
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

int n,b,d;
vector<int> nums;

bool hamDist(int n){
	for(auto x:nums){
		if(__builtin_popcount(n^x) < d)return false;
	}
	return true;
}

void solve(){
	read(n,b,d);
	int num = 0;
	while(nums.size() < n){
		if(hamDist(num) || num == 0){
			nums.pb(num);
			if (nums.size() % 10 == 0 || nums.size() == n) write(num,"\n");
            else write(num," ");    
		}
		++num;
	}	
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
