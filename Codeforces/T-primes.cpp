/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


bool prime[1000001];
ll n,x;

void sieve ()
{
    prime[0] = prime[1] = true;

    for (ll i=4; i<1000001; i+=2)
        prime[i] = true;

    for (ll i=3; i*i<=1000001; i+=2)
        if (!prime[i])
            for (ll j=i*i; j<1000001; j+=2*i)
                prime[j] = true;
}


void solve(){
    cin>>x;
    ll r = sqrt(x);
    if(!prime[r] && r*r == x){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}

int main(void){
    sieve();
    cin>>n;
    while(n--)solve();    
    return 0;
}