/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    ull a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    ull res = 0;
    for(int i=0;i<n;++i){
        res+=a[n-1]-a[i];
    }
    cout<<res<<endl;
}

int main(void){
    cin>>n;
    solve();
    return 0;
}