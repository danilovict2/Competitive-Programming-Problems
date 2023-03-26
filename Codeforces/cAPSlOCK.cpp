/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

string s;


void solve(){
    int n=s.size();
    for(int i=1;i<n;++i){
        if(!isupper(s[i])){
            cout<<s<<endl;
            return;
        }
    }
    
    for(int i=0;i<n;++i){
        s[i] = isupper(s[i])? tolower(s[i]):toupper(s[i]);
    }
    cout<<s<<endl;
}

int main(void){
    cin>>s;
    solve();
	return 0;
}
