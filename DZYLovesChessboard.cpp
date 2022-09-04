#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m;


void solve(){
    string s[n];
    for(int i=0;i<n;++i)cin>>s[i];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(s[i][j]=='.'){
                if((i+j) & 1)s[i][j]='W';
                else s[i][j]='B';
            }
        }
        
        cout<<s[i]<<endl;
    }
}

int main(void){
    cin>>n>>m;
    solve();
    return 0;
}