/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


void solve(){
    
    int n, d, f[100+2] = {0}, s, t;
    cin >> n;
    for (int i = 2; i < n + 2; ++i)
    {
        cin >> d;
        f[i] = f[i-1] + d;
    }
    cin >> s >> t;
    if (s > t)
    {
        swap(s, t);
    }
    int distance = f[t] - f[s];
    cout << min(distance, (f[n+1] - distance)) << endl;
}

int main(void){
    solve();
    return 0;
}