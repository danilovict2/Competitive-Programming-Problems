/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
	char tmp;
	int zeroes = 0;
	for(int i=0;i<n;++i){
		cin>>tmp;
		if(tmp == '0')zeroes++;
	}
	if(n == 1 && zeroes>0){
		cout<<0<<endl;
		return;
	}
	cout<<1;
	for(int i=0;i<zeroes;++i){
		cout<<0;
	}
}

int main(void){
	cin>>n;    
	solve();
	return 0;
}