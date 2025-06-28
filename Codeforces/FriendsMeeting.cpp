/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int a,b;

void solve(){
	if(a>b)swap(a,b);
    int p = (a+b) / 2;
	int x1 = p-a,x2 = b-p, res = ((x1*(x1+1))/2) + ((x2*(x2+1))/2);
	cout<<res<<endl;
}

int main(void){
	cin>>a>>b;
	solve();
    return 0;
}