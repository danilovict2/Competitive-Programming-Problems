#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define N 1000000001
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

int t,sx,sy,ex,ey;

void solve(){
	string s;
	int cnt = 0;
	read(s);
	for(int i=0;i<s.size();++i){
		if(sx==ex && sy==ey)break;
		if(s[i]=='E'){
			if(sx<ex)sx++;
		}else if(s[i]=='N'){
			if(sy<ey)sy++; 
		}else if(s[i]=='W'){
			if(sx>ex)sx--;
		}else{
			if(sy>ey)sy--;
		}
		cnt++;
	}
	if(sx!=ex || sy!=ey)cout<<"-1"<<endl;
	else cout<<cnt<<endl;
}


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	read(t,sx,sy,ex,ey);
	solve();
	return 0;
}

