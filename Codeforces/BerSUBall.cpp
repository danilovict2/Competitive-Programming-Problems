#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n, m;
int a[101], b[101];
void solve(){
    sort(a, a + n);
    sort(b, b + m);
    ll res = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(a[i] - b[j]) <= 1){
                b[j] = 1000;
                res++;
                break;
            }
    cout << res << endl;
}

int main(void){
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; ++i)
        cin >> b[i];
    solve();
    return 0;
}