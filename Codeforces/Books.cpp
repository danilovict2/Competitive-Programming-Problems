/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n,t;

void solve(){
    vector<int> a(n);
    for (int& k : a)
        cin >> k;

    int r = 0;
    int sm = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        while (r < n && sm + a[r] <= t) {
            sm += a[r];
            ++r;
        }
        ans = max(ans, r - i);
        sm -= a[i];
    }

    cout << ans << '\n';
}

int main(void){
    cin >> n >> t;
    solve();
    return 0;
}