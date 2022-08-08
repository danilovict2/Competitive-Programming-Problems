/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int r,k;


void solve(){
	int tmp;
	for(int i=1;i<=9;++i){
		tmp = k*i;
		if(tmp%10==0 || (tmp-r)%10 == 0){
			cout<<i<<endl;
			return;
		}
	}
}

int main(void){
    cin>>k>>r;
	solve();
	return 0;
}
