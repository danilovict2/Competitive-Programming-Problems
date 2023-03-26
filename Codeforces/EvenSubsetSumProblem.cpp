/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;

void solve(){
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        if(a[i]%2 == 0){
            cout<<"1"<<endl<<i+1<<endl;
            return;
        }
        if(a[i]%2 != 0 && a[i+1]%2!=0 && i+1 < n){
            cout<<"2"<<endl<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(void){
    cin>>t;
    while(t--){
        cin>>n;
        solve();
    }
    return 0;
}