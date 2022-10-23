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

int n,m;


void solve(){
	vector<int> a(m);
	for(int i=0;i<m;++i)read(a[i]);
	sort(a.begin(),a.end());
	int mn(0),num=a[0],k(0);
	for (int i = 0; i < n; ++i){
        mn += num;
        num --;
        if (num == 0)num = a[++k];
    }
	int mx(0);
	sort(a.begin(),a.end());
	while(n--){
		mx+=a[m-1];
		a[m-1]--;
		sort(a.begin(),a.end());
	}
	write(mx," ",mn,"\n");
}

int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	read(n,m);
	solve();	
	return 0;
}