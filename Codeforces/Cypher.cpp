#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;

void solve(){
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int b;
    for(int i=0;i<n;++i){
        cin>>b;
        char s;
        for(int j=0;j<b;++j){
            cin>>s;
            if(s=='U'){
                if(a[i]==0){a[i]=9; continue;}
                a[i]--;
            }else{
                if(a[i]==9){a[i]=0;continue;}
                a[i]++;
            }
        }
    }
    for(int i=0;i<n;++i)cout<<a[i]<<" ";
    cout<<endl;
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}