#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll a,b;
ll getr(ll a){
    while(a%2==0)a/=2;
    return a;
}

void solve(){
    cin>>a>>b;
    if(a>b)swap(a,b);
    ll r = getr(a);
    if(getr(b)!=r){
        cout<<"-1"<<endl;
        return;
    }
    int ans = 0;
    b/=a;
    while(b>=8){b/=8;++ans;}
    if(b>1)++ans;
    cout<<ans<<endl;
}

    

int main(void){
    cin>>t;
    while(t--)solve();   
    return 0;
}