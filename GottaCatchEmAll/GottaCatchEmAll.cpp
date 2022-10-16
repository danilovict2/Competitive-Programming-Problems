#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define N 10001
#define FOR(i,n) for(int i=0;i<n;++i)
template <typename... T>
void read(T&... args){
	((cin>>args), ...);
}
template <typename... T>
void write(T... args){
	((cout<<args), ...);
}
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }
bool vis[N]={false};

string s;


void solve(){
	vector<int> let(7,0);
	for(int i=0;i<s.size();++i){
		if(s[i]=='B')let[0]++;
		else if(s[i]=='u')let[1]++;
		else if(s[i]=='l')let[2]++;
		else if(s[i]=='b')let[3]++;
		else if(s[i]=='a')let[4]++;
		else if(s[i]=='s')let[5]++;
		else if(s[i]=='r')let[6]++;
	}
	let[4]/=2;
	let[1]/=2;
	sort(let.begin(),let.end());
	cout<<let[0]<<endl;
}


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	read(s);
	solve();
	return 0;
}
