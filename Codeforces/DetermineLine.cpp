/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;



void solve(){
    ll n; 
	cin>>n;
	vector<int> lines(101,0);
	for(int i=0; i< n; i++){
		ll t,temp;
		cin>>t;
		while(t--){
		cin>>temp;
		lines[temp]++;
	 }
	}
	for(int i=0; i< 101; i++){
		if(lines[i]==n)
            cout<<i<<" ";
	}
	cout<<endl;
    return;
    
}
 
 
int main(void){
    solve();
	return 0;
}
