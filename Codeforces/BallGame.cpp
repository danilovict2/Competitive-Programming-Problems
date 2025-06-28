/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    vector <int> v;
    int nk = 1;
    for(int i=1;i<=n-1;++i){
        nk+=i;
        if(nk>n){
            nk-=n;
        }
        v.push_back(nk);
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}


int main(void){
    cin>>n;
    solve();
	return 0;
}