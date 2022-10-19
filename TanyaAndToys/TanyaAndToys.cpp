#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 100000000
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

ll n,m;

void solve(){
	map<ll,bool> us;
	vector<ll> s;
	int a;
	FOR(i,n){
		read(a);
		us[a]=true;
	}
	for(int i=1;;i++){
        if(m-i<0)
            break;
    	if(!us[i]){
            m-=i;
			s.pb(i);
        }
    }
	write(s.size(),"\n");
	for(auto i:s)write(i," ");
	cout<<endl;
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
