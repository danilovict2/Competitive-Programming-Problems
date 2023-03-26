/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
int n;

void solve(){
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int res = 0;
    int minprice = INT_MAX;
    for(int i=n-1;i>=0;--i){
        if(a[i] > minprice)res++;
        minprice = min(minprice,a[i]);
    }
    cout<<res<<endl;
}


int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}