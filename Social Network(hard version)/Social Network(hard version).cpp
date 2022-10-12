#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 200010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

ll n,k;

void solve(){
	ll id;
	queue<ll> q;
	set<ll> val;
	for(ll i=1;i<=n;++i){
		cin>>id;
		if (!val.count(id)) {
			if (int(q.size()) >= k) {
				int cur = q.front();
				q.pop();
				val.erase(cur);
			}
			val.insert(id);
			q.push(id);
		}
	}
	cout<<q.size()<<endl;
	vector<int> res;
	while (!q.empty()) {
		res.push_back(q.front());
		q.pop();
	}
	reverse(res.begin(),res.end());
	for(auto i:res)cout<<i<<" ";
	cout<<endl;
}



int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	cin>>n>>k;
	solve();	
	return 0;
}

