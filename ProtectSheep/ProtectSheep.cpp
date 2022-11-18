#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 100001
#define FOR(i, n) for (int i = 0; i < n; ++i)
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

int r,c;

void solve(){
	string s[r];
	for(int i=0;i<r;++i)read(s[i]);
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			if(s[i][j]=='S'){
				if(i+1<r){
					if(s[i+1][j]=='W'){write("No\n"); return;}
					if(s[i+1][j]!='S')s[i+1][j]='D';
				}
				if(j+1<c){
					if(s[i][j+1]=='W'){write("No\n"); return;}
					if(s[i][j+1]!='S')s[i][j+1]='D';
				}
				if(j-1>=0){
					if(s[i][j-1]=='W'){write("No\n"); return;}
					if(s[i][j-1]!='S')s[i][j-1]='D';
				}
				if(i-1>=0){
					if(s[i-1][j]=='W'){write("No\n"); return;}
					if(s[i-1][j]!='S')s[i-1][j]='D';
				}
				
			}
		}
	}
	write("Yes\n");
	for(int i=0;i<r;++i)write(s[i],"\n");
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(r,c);
	solve();
	return 0;
}