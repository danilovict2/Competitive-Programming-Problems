/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
int n;

void solve(){
    cin>>n;
    ll res = (n%2==0)?n/2:n/2+1;
    cout<<res<<endl;
}


int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

