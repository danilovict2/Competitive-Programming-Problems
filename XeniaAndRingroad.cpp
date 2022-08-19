/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n,m;

void solve(){
    int a[m];
    for(int i=0;i<m;++i){
        cin>>a[i];
    }
    int res = a[0] - 1;
    for(int i=1;i<m;++i){
        if(a[i-1]<=a[i])res += a[i] - a[i-1];
        else res += (n-a[i-1]) + a[i];
    }
    cout<<res<<endl;
}

int main(void){
    cin>>n>>m;
    solve();
    return 0;
}