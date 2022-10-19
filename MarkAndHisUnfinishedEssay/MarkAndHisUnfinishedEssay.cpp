#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 10
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


int n,c,q;
ll k;
string s;

void solve(){
	read(n,c,q); 
	read(s);

    vector<ll> left(c+1), right(c+1), diff(c+1);
    left[0] = 0;
    right[0] = n;

    for(int i=1; i<=c; ++i){
    	ll l, r; cin >> l >> r;
    	l--; r--;
    	left[i] = right[i-1];
    	right[i] = left[i] + (r-l+1);
    	diff[i] = left[i] - l;
    }

    while(q--){
    	ll k; read(k);
    	k--;
    	for(int i=c; i>=1; --i){
    		if(k < left[i]) continue;
    		else k -= diff[i];
    	}
    	cout << s[k] << "\n";
    }
}


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int t;
	read(t);
	while(t--)solve();
	return 0;
}
