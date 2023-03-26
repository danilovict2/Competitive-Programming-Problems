/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,v;

void solve(){
    if (n-1 <= v) {
        cout << n-1 << endl;
        return;
    }
    int result = v - 1;
    for(int i = 1; i <= n - v; ++i) {
        result += i;
    }
    cout << result << endl;
}

int main(void){
    cin>>n>>v;
    solve();
    return 0;
}