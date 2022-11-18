#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 200010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n,k;
vector<int> g[N];
int d[N]={0},s[N]={0},res[N]={0};


int dfs(int v,int f){
	d[v]=d[f]+1;
	s[v]=1;
	for(auto i:g[v]){
		if(i==f)continue;
		s[v]+=dfs(i,v);
	}
	res[v]=s[v]-d[v];
	return s[v];
}
int cmp(int a,int b){return a>b;}
void solve(){
	int x,y;
	for(int i=1;i<n;++i){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(1,0);
	nth_element(res+1,res+n-k,res+n+1,cmp);
	ll ans=0;
	for (int i=1;i<=n-k;++i)ans+=res[i];std::cout<<ans<<endl;
}



int main(void){
	cin>>n>>k;
	solve();
	return 0;
}

