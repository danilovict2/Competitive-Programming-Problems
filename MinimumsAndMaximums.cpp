/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,l1,l2,r1,r2;

void solve(){
    cin>>l1>>r1>>l2>>r2;
    if(max(l1,l2)<=min(r1,r2))cout<<max(l1,l2)<<endl;
    else cout<<l1+l2<<endl;
}   

int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

