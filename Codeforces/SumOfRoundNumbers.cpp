/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll t,n;

void solve(){
    cin>>n;
    int i = 1;
    vector <int> res;
    while(n > 0){
        if(n%10 != 0){
            res.push_back(((n%10) * i));
        }
        i*=10;
        n/=10;
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();++i){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}