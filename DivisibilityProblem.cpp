/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll a,b;

void solve(){
    cin>>a>>b;
    if(a%b == 0){
        cout<<0<<endl;
    }else{
        cout<< b-a%b<<endl;
    }
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}