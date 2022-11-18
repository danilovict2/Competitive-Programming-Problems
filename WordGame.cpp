#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,t;


void solve(){
    cin>>n;
    string s[3][n];
    map<string,int>m;
    for(int i=0;i<3;++i){
        for(int j=0;j<n;++j){
            cin>>s[i][j];
            m[s[i][j]]++;
        }
    }
    for(int i=0;i<3;++i){
        int r=0;
        for(int j=0;j<n;++j){
            if(m[s[i][j]]==1)r+=3;
            else if(m[s[i][j]]==2)r++;
        }
        cout<<r<<" ";
    }
    cout<<endl;
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}