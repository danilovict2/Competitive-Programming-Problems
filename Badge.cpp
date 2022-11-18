#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


/*
a=1
p[a]
*/

int n;
bool vis[1100]={false};
vector<int>g[1100];
bool done;

void dfs(int s)
{
    if(done)return;

    vis[s]=true;

    for(int e : g[s])
    {
        if(!vis[e])
            dfs(e);
        else{
            cout<<e<<" ";
            done=true;
            return;
        }
    }
}

void solve(){
    int p;
    for(int i=1;i<=n;++i){
        cin>>p;
        g[i].push_back(p);
    }
    for(int i=1;i<=n;++i){
        done = false;
        memset(vis,false,sizeof(vis));
        dfs(i);
    }
    cout<<endl;
}

int main(void){
    cin>>n;
    solve();
    return 0;
}