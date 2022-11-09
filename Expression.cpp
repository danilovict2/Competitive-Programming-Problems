/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int a,b,c;


void solve(){
    int res;
    if(a == 1){
        res = (a+b)*c;
        res = max(res,a+b+c);
    }else if(b==1){
        res = b+(min(a,c));
        res*=max(a,c);
        res = max(res,a+b+c);
    }else if(c == 1){
        res = a*(b+c);
        res = max(res,a+b+c);
    }else{
        res = a*b*c;
        res = max(res,a+b+c);
    }
    cout<<res<<endl;
}

int main(void){
    cin>>a>>b>>c;
    solve();
	return 0;
}
