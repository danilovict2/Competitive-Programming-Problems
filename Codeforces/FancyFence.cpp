/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,a;


void solve(){
    cin>>a;
    if(360 % (180 - a) == 0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
    
}

int main(void){
    cin >> t;
    while (t--)
        solve();
    return 0;
}