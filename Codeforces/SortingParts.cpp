/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;

void solve(){
    cin>>n;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    if(is_sorted(v.begin(),v.end()))cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}   

int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

