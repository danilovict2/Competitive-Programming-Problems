/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n,x,y;

void solve(){
    
}


int main(void){
    cin>>n>>x>>y;
    
    string s = (max(x-1,y-1) <= max(n-x,n-y))? "White":"Black";
    cout<<s<<endl;
	return 0;
}