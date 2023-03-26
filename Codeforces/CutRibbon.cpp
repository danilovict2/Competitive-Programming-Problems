/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int n,a,b,c;


void solve(){
    int ans=0;
    int rem,k;
    for(int i=0;i*a<=n;++i){
           for(int j=0;i*a+j*b<=n;++j){
                rem=n-i*a-j*b;
                if(rem%c==0)
                {
                    k=rem/c;
                    ans=max(ans,i+j+k);
                }
           }
       }
       cout<<ans<<endl;
}


int main(void){
    cin>>n>>a>>b>>c;
    solve();
	return 0;
}
