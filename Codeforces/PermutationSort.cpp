/*sortbysec*/

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;

void solve(){
    vector <int> a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans = 2;
    if (is_sorted(a.begin(), a.end()))
      ans = 0;
    else if (a[0] == 1 || a[n - 1] == n)
      ans = 1;
    else if (a[0] == n && a[n - 1] == 1)
      ans = 3;
    cout<<ans<<endl;
}

int main(void){
    cin>>t;
    while(t--){
        cin>>n;
        solve();
    }
    return 0;
}