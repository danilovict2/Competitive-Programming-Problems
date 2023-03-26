/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
string s;

void solve(){
    cin>>s;
    string a; 
    for(int i=0;i<s.size();++i){
        if(i>1){
            if(i%2==0)continue;
        }
        a+=s[i];
    }
    cout<<a<<endl;
}


int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}