/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    int sum = 10;
    int res = 0;
    for(int i=1;i<12;++i){
        if(sum+i==n){
            if(i==10){
                res+=15;
            }else res+=4;
        }
    }
    cout<<res<<endl;
}

int main(void){
	cin>>n;
    solve();
	return 0;
}
