#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
#define sz(a) a.size() 
#define forn(i, n) for (int i = 0; i < n; ++i)
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
const int maxN = 1e5+1;



void solve(){
	string s[4];
	for(int i=0;i<4;++i)read(s[i]);
	bool ok = false;
	
	for(int top = 0; top<=2 && !ok; ++top){
		for(int left = 0;left<=2;++left){
			int dot = 0;
			for(int i=0;i<2;++i){
				for(int j=0;j<2;++j){
					if(s[top+i][left+j] == '.')++dot;
				}
			}
			if(dot != 2){
				ok = 1;
				break;
			}
		}
	}
	if(ok)write("YES\n");
	else write("NO\n");	
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	solve();
	return 0;
}