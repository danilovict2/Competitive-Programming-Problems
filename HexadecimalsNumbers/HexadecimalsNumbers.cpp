#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 10001
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
bool vis[N]={false};

string n;
vector<int> v;
void solve(int x,int pos){
	if(pos==10){
        v.pb(x);
        return;
    }

	solve(x*10,pos+1);
    solve(x*10+1,pos+1);
}


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	solve(0,1);
    v.pb(1e9);

    int n;
    read(n);

    int load= upper_bound(v.begin(),v.end(),n)- v.begin()- 1;
	write(load,"\n");
	return 0;
}
