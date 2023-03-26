/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll a,b,c,d;
ll t;

void solve(){
    cin>>a>>b>>c>>d;
    if(a<=b){
        cout<<b<<endl;
        return;
    }else if(c-d<=0){
        cout<<-1<<endl;
        return;
    }
    a -= b; 
    ll ans = b + ((a + c - d - 1) / (c - d) * c);
	cout<<ans<<endl;
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}