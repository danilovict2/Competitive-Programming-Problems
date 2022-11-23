/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll n;

void solve(){
    cin>>n;
    if(n%4 !=0){cout<<"NO"<<endl; return;}
    vector<int> v;
    for(int i=2;i<=n;i+=2)
        v.push_back(i);
    for(int i=1;i<=n;i+=2)
        v.push_back(i);
        
    v[n-1]+=n/2;
    cout<<"YES"<<endl;
    for(int i=0;i<v.size();++i)cout<<v[i]<<" ";
    cout<<endl;
}


int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

