#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }


int t,n,m;


void solve(){
	cin>>n>>m;
	int a[n],p[m];
	for(int i=0;i<n;++i)cin>>a[i];
	for(int i=0;i<m;++i)cin>>p[i];
	for(int i=0;i<n-1;++i){
		bool canChange=false;
		if(a[i]>a[i+1]){
			for(int j=0;j<m;++j)
				if(p[j]==i+1){canChange = true; break;}
		}else canChange = true;
		if(!canChange){cout<<"NO"<<endl; return;}
	}
	cout<<"YES"<<endl;
}



int main(void){
	cin>>t;
	while(t--)solve();
	return 0;
}

