#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


void solve(){
    int n,t,z(0),f(0);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>t;
        (t==5)?f++:z++;
    }
    if(z==0)cout<<-1<<endl;
    else if(f<9)cout<<0<<endl;
    else{
        f-=f%5;
        for(int i=0;i<f;++i)cout<<5;
        for(int i=0;i<z;++i)cout<<0;
        cout<<endl;
    }
}

int main(void){
    solve();
    return 0;
}