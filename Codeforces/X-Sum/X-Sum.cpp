#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
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
const int maxN = 1e9;

int n,m;


void solve(){
	read(n,m);
	int a[n][m];
	FOR(i,n){
		FOR(j,m){
			read(a[i][j]);
		}
	}

	int ans = 0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			int ci=i,cj=j,tmp = 0;
			while(ci>=0&&ci<n&&cj>=0&&cj<m){
				tmp+=a[ci][cj];
				ci++;
				cj++;
			}
			ci = i, cj = j;
			while(ci>=0&&ci<n&&cj>=0&&cj<m){
				tmp+=a[ci][cj];
				ci--;
				cj++;
			}
			ci = i,cj = j;
			while(ci>=0&&ci<n&&cj>=0&&cj<m){
				tmp+=a[ci][cj];
				ci++;
				cj--;
			}
			ci = i, cj = j;
			while(ci>=0&&ci<n&&cj>=0&&cj<m){
				tmp+=a[ci][cj];
				ci--;
				cj--;
			}
			tmp-=a[i][j]*3;
			ans = max(ans,tmp);
		}
	}
	write(ans,"\n");
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
	while(t--)solve();
	return 0;
}