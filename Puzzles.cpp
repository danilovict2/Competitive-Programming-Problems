/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m;

void solve(){
    int f[m];
    for(int i=0;i<m;++i)cin>>f[i];
    sort(f,f+m);
    int res=50000000;
    for(int i=0;i<m-n+1;++i){
        res=min(res,f[i+n-1]-f[i]);
    }
    cout<<res<<endl;
}

int main(void){
    cin>>n>>m;
    solve();
    return 0;
}