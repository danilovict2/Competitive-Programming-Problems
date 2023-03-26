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
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int res=0;
    for(int i=0;i<n;++i){
        int tmp=0;
        for(int j=i;j<n-1;++j){
            if(a[j]>=a[j+1])tmp++;
            else break;
        }
        for(int j=i;j>0;--j){
            if(a[j]>=a[j-1])tmp++;
            else break;
        }
        res=max(res,tmp);
    }
    cout<<res+1<<endl;
}


int main(void){
    solve();
	return 0;
}

