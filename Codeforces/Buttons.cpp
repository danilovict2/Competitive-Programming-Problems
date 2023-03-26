/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    ll res = 1;
    for(int i=1;i<=n;++i)res+=(n-i)*i;
    cout<<res+n-1<<endl;
}   


int main(void){
	cin>>n;
    solve();
    return 0;
}

