#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100000
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int t;
ll n,k;

void solve(){
    cin>>n>>k;
    ll i=1,res=0;
    while(i<k){i*=2;++res;}
    if (i < n) res += (n - i + k - 1) / k;
    cout<<res<<endl;
}


int main(void){
    cin>>t;
    while(t--)solve();
	return 0;
}

