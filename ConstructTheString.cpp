/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


/*abcdefg*/

int n,a,b,t;

void solve()
{
	cin>>n>>a>>b;
	string s;
	char lt = 'a';
	int count = 1;
	for(int i=0;i<n;++i){
		s.push_back(lt);
		if(count == b){
			lt = 'a';
			count = 1;
		}else{
			count++;lt++;
		}
		
	}
	cout<<s<<endl;
	
}

int main(void)
{
	cin>>t;
	while(t--)solve();
	return 0;
}
