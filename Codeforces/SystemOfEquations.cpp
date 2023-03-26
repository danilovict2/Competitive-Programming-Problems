#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n,m;

void solve(){
    int res=0;
    for(int a=0;a<=n;++a){
        for(int b=0;b<=m;++b){
            if((a*a+b==n) && (a+b*b==m))res++;
        }
    }
    cout<<res<<endl;
}


int main(void){
    cin>>n>>m;
    solve();
	return 0;
}

