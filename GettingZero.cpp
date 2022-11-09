#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n;


void solve(){
	int a[n];
	for(int i=0;i<n;++i)cin>>a[i];
	
	for(int i=0;i<n;++i){
		int ans = 20;
		for(int j=0;j<=15;++j){
			for(int k=0;k<=15;++k){
				if(((a[i]+j) << k) % 32768 == 0){
					ans=min(ans,j+k);
				}
			}
		}
		cout<<ans<<" ";
	}
	cout<<endl;
}



int main(void){
	cin>>n;
	solve();
	return 0;
}

