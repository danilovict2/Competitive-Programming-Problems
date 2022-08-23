/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll d1,d2,d3;

void solve(){
	cin>>d1>>d2>>d3;
	ll res = min(d1,d2);
	res+=min(d3,d1+d2);
	res+=min(max(d1,d2),min(d1,d2) + d3);
	cout<<res<<endl;
}


int main(void){
    solve();
    return 0;
}

/*
res = 33
res+= 34 = 67
*/ 