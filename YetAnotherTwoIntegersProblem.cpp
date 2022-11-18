/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll a,b;

void solve(){
    cin>>a>>b;
    ll d = abs(a-b);
    ll res = d/10;
    if(d%10 > 0)res++;
    cout<<res<<endl;
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}