/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;


void solve(){
	cin>>n;
	if(n%7==0){cout<<n<<endl; return;}
	n-= (n%10);
	while(n%7 != 0){
		n++;
	}
	cout<<n<<endl;
}


int main(void){
    cin>>t;
	while(t--)solve();
    return 0;
}
