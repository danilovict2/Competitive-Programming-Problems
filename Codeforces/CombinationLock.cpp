/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    string a,comb;
    cin>>a>>comb;
    ll res=0;
    for(int i=0;i<n;++i)
        res+=min(10 - abs(a[i]-comb[i]),abs(a[i]-comb[i]));
    cout<<res<<endl;
}   


int main(void){
	cin>>n;
    solve();
    return 0;
}

