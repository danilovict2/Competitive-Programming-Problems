/*sortbysec*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
int a,b,n;

void solve(){
    cin>>n>>a>>b;
    vector <int> p;
    for(int i=1;i<=n;++i){
        if(i==a||i==b)continue;
        p.push_back(i);
    }
    sort(p.begin(),p.end(),greater<int>());
    p.push_back(b);
    p.insert(p.begin(),a);
    for(int i=0;i<n/2;++i){
        if(p[i]<p[0]){
            cout<<"-1"<<endl;
            return;
        }
    }
    for(int i=n/2;i<n;++i){
        if(p[i]>p[n-1]){
            cout<<"-1"<<endl;
            return;
        }
    }
    for(int i=0;i<p.size();++i)cout<<p[i]<<" ";
    cout<<endl;
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}