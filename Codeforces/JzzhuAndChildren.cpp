/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m;

void solve(){
    double t,max=0;
    int l;
    for(int i=1;i<=n;++i){
        cin>>t;
        if(ceil(t/m) >= max){
            l = i;
            max = ceil(t/m);
        }
    }
    cout<<l<<endl;
}


int main(void){
    cin>>n>>m;
    solve();
    return 0;
}