#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;


void solve(){
    cin>>n;
    string s[n];
    vector <pair<int,int>> v;
    for(int i=0;i<n;++i){
        cin>>s[i];
        for(int j=0;j<n;++j)
            if(s[i][j]=='*')v.push_back(make_pair(i,j));
    }    
    if(v[0].first == v[1].first){
        if(v[0].first+1 == n){
            s[v[0].first-1][v[0].second] = '*'; 
            s[v[1].first-1][v[1].second] = '*';
        }else{
            s[v[0].first+1][v[0].second] = '*'; 
            s[v[1].first+1][v[1].second] = '*';
        }
    }else if(v[0].second == v[1].second){
        if(v[0].second+1 == n){
            s[v[0].first][v[0].second-1] = '*'; 
            s[v[1].first][v[1].second-1] = '*';
        }else{
            s[v[0].first][v[0].second+1] = '*'; 
            s[v[1].first][v[1].second+1] = '*';
        }
        
    }else{
        s[v[0].first][v[1].second] = '*'; 
        s[v[1].first][v[0].second] = '*';
    }
    for(int i=0;i<n;++i)cout<<s[i]<<endl;
}

    

int main(void){
    cin>>t;
    while(t--)solve();   
    return 0;
}