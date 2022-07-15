/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n, m;
string s[1005];
ll a[1005];
ll ans;
ll b[1005][5];
ll ma;

void solve(){
    for (ll i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    for (ll i=0; i<m; i++)
    {
        cin>>a[i];
    }
    for (ll i=0; i<m; i++)
    {
        ma=0;
        for (ll j=1; j<=n; j++)
        {
            b[i][s[j][i]-'A']++;
        }
        for (ll j=0; j<5; j++)
        {
            ma=max(ma, b[i][j]);
        }
        ans+=ma*a[i];
    }
    cout<<ans<<endl;
    
}

int main(void){
    cin>>n>>m;
    solve();
    return 0;
}