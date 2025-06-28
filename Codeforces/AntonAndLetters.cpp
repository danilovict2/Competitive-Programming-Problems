/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

string s;

void solve(){
    sort(s.begin(),s.end());
    int res = 0;
    for(int i=0;i<s.size();++i){
        if(s[i] == ',' || s[i] == '{'|| s[i] == '}' || s[i] == ' ')continue;
        if(s[i] != s[i-1]) ++res;
    }
    cout<<res<<endl;
}

int main(void){
    getline(cin,s);
    solve();
    return 0;
}