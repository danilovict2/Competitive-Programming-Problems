#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int t,n;
vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
void solve(){
	cin>>n;
	bool en=false;
	string s[4];
	cin>>s[0]>>s[1];
	int s1=0,s2=0;
	queue<int> cq,rq;
	bool vis[2][n]={{false},{false}};
	memset(vis[0],false,sizeof(vis[0]));
	memset(vis[1],false,sizeof(vis[1]));
	cq.push(0);rq.push(0);
	while(!cq.empty() || !rq.empty()){
		s1=rq.front();
		s2=cq.front();
		rq.pop();cq.pop();
		vis[s1][s2]=true;
		if(s1==1 && s2==n-1 || vis[1][n-1]){
			en=true;break;
		}
		for(int i=0;i<8;++i){
			int rr = s1+nb[i].first;
			int cc = s2+nb[i].second;
			if(rr<0 || cc<0 || rr>=2 || cc>=n || vis[rr][cc] || s[rr][cc]=='1')continue;
			rq.push(rr);
			cq.push(cc);
			vis[rr][cc]=true;
		}
	}
	if(en)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main(void){
	cin>>t;
	while(t--)solve();
  	return 0;
}