#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n,m,k;
string grid[501];
bool vis[501][501];

void dfs(int x,int y){
	if(x>=0 && x<n && y>=0 && y<m && grid[x][y]!='#' && !vis[x][y]){
		vis[x][y] = true;
		if(k>0)k--;
		else grid[x][y]='X';
		for(int i=0;i<4;++i)
			dfs(x+nc[i].first,y+nc[i].second);
	}
}

void solve(){
	memset(vis,false,sizeof(vis));
	int fc=0;
	for(int i=0;i<n;++i){
		cin>>grid[i];
		for(int j=0;j<m;++j){
			if(grid[i][j] == '.')fc++;
		}
	}
	k=fc-k;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(grid[i][j]=='.' && !vis[i][j])
				dfs(i,j);
		}
	}
	for(int i=0;i<n;++i)cout<<grid[i]<<endl;
}



int main(void){
    cin>>n>>m>>k;
	solve();
	return 0;
}

