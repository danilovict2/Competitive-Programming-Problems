/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll n;

void solve(){
    cin>>n;
    if(n%2 == 0){
        cout<<n/2-1<<endl;
    }else{
        cout<<n/2<<endl;
    }
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}