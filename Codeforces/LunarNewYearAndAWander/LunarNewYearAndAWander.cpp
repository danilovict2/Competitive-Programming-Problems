#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
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
const int maxN = 51;

int n,m;
char s[maxN][maxN];
bool vis[maxN][maxN]={false};
bool ok = false;

void dfs(int i,int j,int frmi,int frmj,char co){
    if(i<1||j<1||i>n||j>m) return;

    if(s[i][j]!=co)return;

    if(vis[i][j]){ok=true;return;}

    vis[i][j]=true;
    for(int y=0;y<4;y++){
        int nxti=i+nc[y].first;
        int nxtj=j+nc[y].second;

        if(nxti==frmi && nxtj==frmj)continue;

        dfs(nxti,nxtj,i,j,co);
    }
}

void solve(){
	for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            read(s[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
           char z=s[i][j];
           if(!vis[i][j]){
               	dfs(i,j,-1,-1,z);
               	if(ok){
                   	write("Yes\n");
                  	return;
               	}
           }
       }
    }
	write("No\n");
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(n,m);
	solve();
	return 0;
}