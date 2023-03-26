#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m;
vector <int> g[20001];

void solve(){
    if(n>=m){cout<<n-m<<endl; return;}
    int mx=(m-1)*2;
    for(int i=1;i<=mx;++i){
        if(i-1>0)g[i].push_back(i-1);
        if(i*2<=mx)g[i].push_back(2*i);
    }
    int p[2*m]={0};
    bool vis[2*m]={false};
    queue<int> q;
    q.push(n);
    vis[n]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(auto i:g[v]){
            if(!vis[i]){
                vis[i]=true;
                q.push(i);
                p[i]=p[v]+1;
            }
        }
    }
    cout<<p[m]<<endl;
}

int main(void){
    cin>>n>>m;
    solve();
    return 0;
}