/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
int n;

void solve(){
    cin>>n;
    int i=0;
    int r = 0;
    while(n>0){
        r=n%10;
        n/=10;
        ++i;
    }
    if(i == 1)i = 9;
    else if(i == 2)i = 7;
    else if(i == 3)i = 4;
    else i = 0;
    cout<<r*10 - i<<endl;
}

int main(void){
    cin>>t;
    while(t--)solve();
    return 0;
}