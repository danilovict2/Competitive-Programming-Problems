#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,k;

void solve(){
    int a;
    int res = 0;
    for(int i=0;i<n;++i){
        cin>>a;
        if(a+k<=5)res++;
    }
    cout<<res/3<<endl;
}

int main(void){
    cin>>n>>k;
    solve();
    return 0;
}