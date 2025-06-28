#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100010
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

ll n,m;
vector<int> g[N];
bool vis[N];
int a[N];
ll res=0;

void dfs(int v,int sum){
    if(vis[v])return;
    vis[v]=true;
    if(a[v])sum++;
    else sum=0;
    if(sum>m)return;

    if(v!=1 && g[v].size()==1)res++;

    for(auto i:g[v])
        dfs(i,sum);
}

void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;++i)cin>>a[i];
    int x,y;
    for(int i=0;i<n-1;++i){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    memset(vis,false,sizeof(vis));
    dfs(1,0);
    cout<<res<<endl;
}


int main(void){
    
    solve();
	return 0;
}

