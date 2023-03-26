#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;


void solve(){
    string s[10000];
    int a[10000];
    map<string,ll>mp;
    for(int i=0;i<n;i++){
        cin>>s[i]>>a[i];
        mp[s[i]]+=a[i];
    }
    ll mx=0;
    for(int i=0;i<n;i++){
        mx=max(mp[s[i]],mx);
    }
    map<string,long int>mp2;
    string ans;
    for(int i=0;i<n;i++){
        mp2[s[i]]+=a[i];
        if(mp2[s[i]]>=mx&&mp[s[i]]==mx){
            ans=s[i];
            break;
        }
    }
    cout<<ans<<endl;
}

int main(void){
    cin>>n;
    solve();
    return 0;
}