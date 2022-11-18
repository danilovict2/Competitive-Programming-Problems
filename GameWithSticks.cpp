/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m;

void solve()
{
	if(min(n,m)%2==0)cout<<"Malvika"<<endl;
	else cout<<"Akshat"<<endl;
}

int main(void)
{
	cin>>n>>m;
	solve();
	return 0;
}
