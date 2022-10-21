#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 300001
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

int n;

void solve(){
	string s;
	read(n,s);
	int c1=0,c2=0;
	for(int i=0;i<n;++i){
		if(s[i]=='>')c1++;
		else if(s[i]=='<')c2++;
	}
	if(c1==0 || c2==0){write(n,"\n"); return;}
	int cnt = 0;
	s+=s[0];
	for(int i=0;i<s.size()-1;++i){
		if(s[i] == '-' || s[i+1] == '-')cnt++;
	}
	write(cnt,"\n");
}	


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int t;
	read(t);
	while(t--)solve();	
	return 0;
}
