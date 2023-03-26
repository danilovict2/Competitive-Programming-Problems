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

ll n,q;

void solve(){
	ll ans = 0;
    read(n,q);
    ll a[n+1];
    for(ll i = 1; i <= n; ++i){
        read(a[i]); 
		ans+=a[i];
    }
 
    ll x, y, z;
    map< ll , ll > m;
 
    ll current = -1;
    while(q--){
        read(x);
        if(x == 2){
            read(z);
            ans = n*z;
            m.clear();
            current = z;
        }else{
            read(y,z);
            if(current == -1){
                ans-=a[y]; ans+=z; a[y] = z;
            }else{
                if(m[y] == 0)ans-=current;
                else ans-=m[y];
				ans+=z;
                m[y] = z;
            }
        }
		write(ans,"\n");
    }
}

int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	solve();	
	return 0;
}