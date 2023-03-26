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
    }
    for(int i=0;i<n-1;++i){
        if(s[i][0] != s[i+1][0]){
            res++;
        }
    }
    cout<<++res<<endl;
}


int main(void){
    cin>>n;
    solve();
	return 0;
}
