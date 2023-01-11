#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define mp make_pair
#define forn(i, j, n) for (int i = (j); i < n; ++i)
#define INF 0x3f3f3f3f
template <typename... T>
void read(T &...args)
{
	((cin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((cout << args), ...);
}
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 101;


int solve(string s, char c){	
	if(s.size() == 1){
		return s[0] != c;
	}
	int mid = s.size() / 2;
	int cntl = solve(string(s.begin(), s.begin()+mid), c+1);
	cntl += mid - count(s.begin()+mid, s.end(), c);
	int cntr = solve(string(s.begin()+mid, s.end()),c+1);
	cntr += mid-count(s.begin(),s.begin()+mid,c);
	return min(cntl,cntr);
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	read(t);
	while(t--){
		int n;
		string s;
		read(n,s);
		write(solve(s, 'a'),"\n");
	}
	return 0;
}