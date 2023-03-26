/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll a,b;

void solve(){
	
}


int main(void){
    cin>>a>>b;
	ll ans = 1;
	for(int j=1;j<=min(a,b);++j)ans*=j;
	cout<<ans<<endl;
    return 0;
}

