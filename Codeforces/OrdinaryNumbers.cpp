/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll n;

void solve(){
    cin >> n;
    int res = 0;
    for (ll pw = 1; pw <= n; pw = pw * 10 + 1)
    {
        for (int d = 1; d <= 9; d++)
        {
            if (pw * d <= n)
            {
                res++;
            }
        }
    }
    cout << res << endl;
}

int main(void){
    cin >> t;
    while (t--)
        solve();
    return 0;
}