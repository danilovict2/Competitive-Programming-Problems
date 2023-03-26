#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100000
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int t;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto &it:a)cin>>it;
    if (*max_element(a.begin() + 1, a.end() - 1) == 1 || (n == 3 && a[1] % 2 == 1)) {
        cout << "-1"<<endl;
        return;
    }
    ll res=0;
    for(int i=1;i<a.size()-1;++i)
        res+=(a[i]+1)/2;
    cout<<res<<endl;
}


int main(void){
    cin>>t;
    while(t--)solve();
	return 0;
}

