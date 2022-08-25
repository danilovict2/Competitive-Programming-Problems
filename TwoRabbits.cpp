/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll x,y,a,b;

void solve(){
    cin>>x>>y>>a>>b;
    if((y-x)%(a+b)!=0)cout<<-1<<endl;
    else cout<<(y-x)/(a+b)<<endl;
    
}   


int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

