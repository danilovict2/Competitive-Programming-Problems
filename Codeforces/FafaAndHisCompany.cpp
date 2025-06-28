/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n;

void solve(){
    int count = 0;
    for(int i=1;i<=n;++i){
        int tmp = n-i;
        if(tmp%i==0)count++;
    }
    cout<<--count<<endl;
}

int main(void){
    cin>>n;
    solve();
	return 0;
}
