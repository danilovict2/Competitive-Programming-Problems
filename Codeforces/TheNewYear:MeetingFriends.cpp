/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int x1,x2,x3;

void solve(){
    
}

int main(void){
    cin>>x1>>x2>>x3;
    int res = max(x1,x2);
    res = max(res,x3);
    int m = min(x3,x1);
    m = min(m,x2);
    res-=m;
    cout<<res<<endl;
    return 0;
}