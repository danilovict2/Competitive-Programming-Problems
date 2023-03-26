/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m;

void solve(){
    char s[n][m];
    bool er = true;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(i%2 == 0)s[i][j] = '#';
            else s[i][j] = '.'; 
        }
        if(i%2 != 0){
            if(er) s[i][m-1] = '#';
            else s[i][0] = '#';
            er = !er;
        }
        for(int j=0;j<m;++j)
            cout<<s[i][j];
        cout<<endl;
    }
    
}

int main(void){
    cin>>n>>m;
    solve();
    return 0;
}