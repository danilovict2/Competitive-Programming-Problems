/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m,a,b;

void solve(){
    if (m * a <= b)
        cout << n * a << "\n";
    else 
        cout << (n/m) * b + min((n%m) * a, b) << "\n";
}

int main(void){
    cin>>n>>m>>a>>b;
    solve();
    return 0;
}