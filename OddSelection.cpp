#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int t,x,n;



void solve(){
    cin>>n>>x;
    int a[n],ev=0,odd=0;
    for(int i=0;i<n;++i){cin>>a[i]; if(a[i]%2==0)ev++; else odd++;}
    bool fg=false;
    for(int i=1; i<=odd && i<=x; i+=2){
        if((x-i)<=ev){fg=true; break;}
    }
    if(fg)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}


int main(void){
    cin>>t;
    while(t--)solve();
	return 0;
}

