#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 10000
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

int n,m;


void solve(){
    read(n,m);
	int a,ans[n]={0};
	for(int i=0;i<m;++i){
		int max = -1,ind;
		for(int j=0;j<n;++j){
			read(a);
			if(a > max){
				max=a;
				ind = j;
			}
		}
		ans[ind]++;
	}
	int mx = -1,ind;
	FOR(i,n){
		if(ans[i]>mx){
			mx = ans[i];
			ind = i;
		}
	}
	write(ind+1,"\n");
}



int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	solve();
	return 0;
}