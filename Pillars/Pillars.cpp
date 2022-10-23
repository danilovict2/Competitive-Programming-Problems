#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 300001
#define FOR(i,n) for(int i=0;i<n;++i)
template <typename... T>
void read(T&... args){
	((cin>>args), ...);
}
template <typename... T>
void write(T... args){
	((cout<<args), ...);
}
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

ll n;


void solve(){
	read(n);
	ll a[n],mx=0,k=0;
	for(int i=0;i<n;++i){
		read(a[i]);
		if(a[i]>mx){
			mx = a[i];
			k = i;
		}
	}
	for(int i=0;i<k;++i){
		if(a[i]>a[i+1]){
			cout<<"NO"<<endl;
			return;
		}
	}
	for(int i=k;i<n-1;++i){
		if(a[i+1]>a[i]){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	solve();
	return 0;
}