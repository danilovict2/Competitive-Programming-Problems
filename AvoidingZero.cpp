/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,t;

void solve(){
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;++i){cin>>a[i]; sum+=a[i];}
    if(sum==0){
        cout<<"NO"<<endl;
        return;
    }else if(sum>0){
        sort(a, a + n, greater<int>());
    }else{
        sort(a,a+n);
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;++i)cout<<a[i]<<" ";
    cout<<endl;
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}