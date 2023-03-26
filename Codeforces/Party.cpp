#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int n;



void solve(){
    int ans=0,c,a[n+9];
    for(int i=1; i<=n; ++i)cin>>a[i];
    for(int i=1; i<=n; ++i){
        c=0;
        int x=a[i];
        while(x != -1)
        {
            x=a[x];
            c++;
        }
        ans=max(ans, c);
    }
    cout<<ans+1<<endl;
}


int main(void){
	cin>>n;
    solve();
	return 0;
}

