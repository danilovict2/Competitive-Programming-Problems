#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;
string s;

void solve(){
    cin>>n>>s;
    int a=0,b=0;
    for(int i=0;i<s.size()-1;++i){
        if(s[i]!=s[i+1]){
            cout<<i+1<<" "<<i+2<<endl;return;
        }
    }
    cout<<-1<<" "<<-1<<endl;

}

    

int main(void){
    cin>>t;
    while(t--)solve();   
    return 0;
}