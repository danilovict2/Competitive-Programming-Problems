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
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second);}

ll n;
int m;

void solve(){
	vector<pair<int,int>> v;
	int a,b;
	for(int i=0;i<m;++i){
		read(a,b);
		v.pb(mp(a,b));
	}
	sort(v.begin(),v.end(),sortbysec);
	ll ans = 0;
	for(ll i=m-1;i>=0;--i){
        if(v[i].first<=n){
            ans+=(v[i].first)*(v[i].second);
            n-=v[i].first;
        }else{	
            ans+=n*(v[i].second);
            n=0;
        }
        if(n<=0)
            break;
    }
	write(ans,"\n");
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