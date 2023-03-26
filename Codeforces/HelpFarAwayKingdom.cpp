/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

string s;

void solve()
{
	int i=0;
	while(s[i]!='.')++i;
	if(s[i-1]=='9'){
		cout<<"GOTO Vasilisa."<<endl;
	}else if(s[i+1]<'5'){
		cout<<s.substr(0,i)<<endl;
	}else{
		s[i-1]++;
		cout<<s.substr(0,i)<<endl;
	}
}

int main(void)
{
	cin>>s;
	solve();
	return 0;
}
