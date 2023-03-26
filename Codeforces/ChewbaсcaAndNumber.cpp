/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ull n;

void solve(){
    vector<int> res;
    ll tmp;
    while(n>0){
        res.push_back(min(n%10,9-n%10));
        tmp = n;
        n/=10;
        
    }
    for(int i=res.size()-1;i>=0;--i){
        if(res[i]==0)
            if(i==res.size()-1)
                res[i]=tmp;
            
        cout<<res[i];
    }
    cout<<endl;
}   


int main(void){
	cin>>n;
    if(n<10){
        cout<<n<<endl;
        return 0;
    }
    solve();
    return 0;
}

