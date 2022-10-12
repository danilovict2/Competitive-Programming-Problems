#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 200010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int t;
ll n;
string s;

void solve(){
	cin>>n>>s;
	int cnt = 0,ans = 0, L = -1;
	for (int i = 0; i < n; i += 2)if (s[i] != s[i + 1]) cnt++;
            
        
	cout<<cnt<<endl;
}



int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	cin>>t;
	while(t--)solve();	
	return 0;
}

