/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    string s[n];
    int res = 0;
    for(int i=0;i<n;++i){
        cin>>s[i];
        if(s[i] == "Icosahedron")res+=20;
        else if(s[i] == "Cube")res+=6;
        else if(s[i] == "Tetrahedron")res+=4;
        else if(s[i] == "Dodecahedron")res+=12;
        else res+=8;
    }
    cout<<res<<endl;
}

int main(void){
    cin>>n;
    solve();
    return 0;
}