/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int n;
ll l;

void solve(){
    
}


int main(void){
    cin >> n >> l;
    int p[n];

    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p, p + n);
    int tmp = l-p[n-1];
    int r = max(p[0], tmp) * 2;

    for (int i = 0; i < n - 1; i++)
        r = max(r, p[i + 1] - p[i]);

    cout.precision(20);
    cout << fixed << r / 2.0 << endl;
    return 0;
}
