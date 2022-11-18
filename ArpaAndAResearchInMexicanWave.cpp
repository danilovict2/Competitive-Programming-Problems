/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n,t,k;
void solve(){
	
    
}

int main(void){
    cin>>n>>k>>t;
    int res = min(k,t);
    int tmp = n+k-t;
    res = min(res,tmp); 
    cout<<res<<endl;
	return 0;
}