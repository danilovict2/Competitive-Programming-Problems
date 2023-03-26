/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m;

void solve(){
    char a[n][m];
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			
			if(a[i][j]!=a[i][0]){
				cout<<"NO"<<endl;
				return;
			}
		}
		if(a[i][0]==a[i+1][0]){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

int main(void){
    cin>>n>>m;
	solve();
    return 0;
}