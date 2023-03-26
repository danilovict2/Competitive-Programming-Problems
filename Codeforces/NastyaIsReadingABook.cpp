#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100000
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n;

void solve(){
    cin>>n;
    vector<pair<int,int>> lr;
    int l,r,k;
    for(int i=0;i<n;++i){cin>>l>>r; lr.push_back(make_pair(l,r));}
    cin>>k;
    int i=0;
    while(k>lr[i].second)++i;
    cout<<n-i<<endl;
}


int main(void){
    solve();
	return 0;
}

