#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n,m,k;


void solve(){
    int x[m+1];
    for(int i=0;i<=m;++i)cin>>x[i];
    int res=0;
    for(int i=0;i<m;++i){
        int tmp=0;
        for(int j=0;j<n;++j){
            if(((x[i] >> j)&1)!=((x[m]>>j)&1))tmp++;
        }
        if(tmp<=k)res++;
    }
    cout<<res<<endl;
}


int main(void){
    cin>>n>>m>>k;
    solve();
	return 0;
}

