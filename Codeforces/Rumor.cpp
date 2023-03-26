#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

ll n,m;
vector<int> g[N];
bool vis[N]={false};
ll a[N];

ll dfs(ll v){
    ll md = a[v];
    vis[v]=true;
    for(auto i:g[v])
        if(!vis[i])
            md=min(md,dfs(i));
    
    return md;
}

void solve(){
    ll x,y;
    cin>>n>>m;
    for(ll i=1;i<=n;++i)cin>>a[i];
    for(ll i=0;i<m;++i){
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    ll ans=0;
    for(ll i=1;i<=n;++i)
        if(!vis[i])
            ans+=dfs(i);
    cout<<ans<<endl;
}


int main(void){
    solve();
	return 0;
}

