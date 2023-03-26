/*sortbysec*/

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;

void solve(){
    int l, r, x;
    cin >> l >> r >> x;
    int ans = r / x + r % x;
    int m = r / x * x - 1;
    if(m >= l)ans = max(ans, m / x + m % x);
    cout <<ans<<endl;
}

int main(void){
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}