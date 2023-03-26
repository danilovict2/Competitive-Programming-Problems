/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,x,y;

void solve(){
    cin>>x>>y;
    int res = sqrt(pow(x,2)+pow(y,2))/1;
    if(x == 0&&y==0)cout<<0<<endl;
    else if(res<=0||res>=0 && res*1 == sqrt(pow(x,2)+pow(y,2))/1)cout<<1<<endl;
    else cout<<2<<endl;
}   

int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

