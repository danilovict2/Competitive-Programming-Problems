#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;
ll c;

void solve(){
    ll t[n];
    for(int i=0;i<n;++i)cin>>t[i];
    ll res=1;
    for(int i=0;i<n-1;++i){
        if(t[i+1]-t[i]>c)res=0;
        res++;
    }
    cout<<res<<endl;
}

int main(void){
    cin>>n>>c;
    solve();
    return 0;
}