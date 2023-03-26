/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll n;


void solve(){
	cin>>n;
	for(int i = 2;i<=29;++i){
		if(n % ((1 << i) - 1) == 0){
			cout<<n/((1 << i) - 1)<<endl;
			break;
		}
	}
}

int main(void){
	cin>>t;
	while(t--)solve();
    return 0;
}