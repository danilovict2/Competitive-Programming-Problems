/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int n;

bool islucky(int n){
    int div;
    while(n>0){
        div = n%10;
        if(div!=4 && div!=7){
            return false;
        }
        n/=10;
    }
    return true;
}

void solve(){
    
    for(int i = 4;i<=n;++i){
        if(islucky(i)){
            if(n%i == 0){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(void){
    cin>>n;
    solve();
	return 0;
}
