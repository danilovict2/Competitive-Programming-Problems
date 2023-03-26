#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int t;
ll n;


void solve(){
    cin>>n;
    cout<<n<<endl;
}


int main(void){
    cin>>t;
    while(t--)solve();
	return 0;
}

