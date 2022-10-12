#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 200010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n;

void solve(){
	int d[n+10];
	int a,b;
	int cnt = 0;
	for(int i=1;i<=n-1;++i)cin>>d[i];
	cin>>a>>b;
	while(a<b){
		cnt+=d[a];
		a++;
	}
	cout<<cnt<<endl;
}



int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	cin>>n;
	solve();	
	return 0;
}

