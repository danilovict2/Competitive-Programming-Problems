/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n,m;
ll x;


void solve(){
	cin>>x>>n>>m;
	while (x>0&&n&&x/2+10<x){n--;x=x/2+10;}
	if (x<=m*10)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main(void){
	cin>>t;
	while(t--)solve();
    return 0;
}