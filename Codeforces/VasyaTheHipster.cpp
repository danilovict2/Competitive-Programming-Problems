/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int a,b;

void solve(){
    cout<<min(a,b)<<" ";
    int res = max(a,b) - min(a,b);
    cout<<res/2<<endl;
}

int main(void){
    cin>>a>>b;
    solve();
    return 0;
}