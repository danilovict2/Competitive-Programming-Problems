/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int p,n;
void solve(){
	bool h[p]={false};
    ll x;
    for(int i=0;i<n;++i){
        cin>>x;
        if(h[x%p]){
            cout<<i+1<<endl;
            return;
        }else{
            h[x%p] = true;
        }
    }
    cout<<-1<<endl;
}

int main(void){
    cin>>p>>n;
    solve();
	return 0;
}