/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

void solve(){
	string r1,r2,r3;
    cin>>r1>>r2>>r3;
    string res = (r1[0]==r3[2] && r1[1]==r3[1] && r1[2]==r3[0]&&r2[0]==r2[2])? "YES":"NO";
    cout<<res<<endl;
}


int main(void){
    solve();
	return 0;
}