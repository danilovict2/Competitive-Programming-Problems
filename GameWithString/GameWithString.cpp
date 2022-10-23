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

string s;

void solve(){
    int k=0;
	vector<char> v;
    for (int i=0; i<s.size(); ++i){
		if(v.size()==0)v.pb(s[i]);
		else{
			if(s[i]==v.back()){
				++k;
				v.pop_back();
			}else v.pb(s[i]);
		}
	}
    if (k & 1)
        write("Yes");
    else
        write("No");
    write("\n");
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