/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll t;
int a[4];

void solve(){
    for(int i=0;i<4;++i)cin>>a[i];
    sort(a,a+4);
    cout<<a[0]*a[2]<<endl;
}


int main(void){
    cin>>t;
    while(t--)solve();
	return 0;
}