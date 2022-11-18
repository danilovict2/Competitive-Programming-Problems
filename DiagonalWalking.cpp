/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
//RRURRUUUURURRRURRRRURRRRRRURRUURRRUUURUURURRURUURUURRUURUURRURURUUUUURUUUUUURRUUURRRURRURRRUURRUUUUR
int n;
string s;


void solve(){
    for(int i=0;i<s.size();++i){
        if(s[i]=='R'&&s[i+1]=='U'){--n; ++i;continue;}
        if(s[i]=='U'&&s[i+1]=='R'){--n; ++i;}
    }
    cout<<n<<endl;
}

int main(void){
    cin>>n>>s;
    solve();    
    return 0;
}