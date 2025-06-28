/*
ID: danilos4
LANG: C++
TASK: contact
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define MOD 9901
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
ofstream fout ("contact.out");
ifstream fin ("contact.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 10010;


void solve(){
	int a,b,n;
	read(a,b,n);
	string s,p;
	while(fin>>p){
		s+=p;
	}
	unordered_map<string,int> cnt;
	for(int i=a;i<=b && i<=s.size();++i){
		for(int j=0;j<s.size();j++){
			if(j+i <= s.size()){
				string substr;	
				for(int k=j;k<j+i;++k){
					substr+=s[k];
				}
				cnt[substr]++;
			}
		}
	}

	map<int,vector<string>, greater<int>> ans;
	for(auto x:cnt){
		ans[x.second].pb(x.first);
	}
	int cur = 0;
	for(auto x:ans){
		if(cur >= n)return;
		write(x.first,"\n");
		sort(x.second.begin(), x.second.end(), [](string &a, string &b){
			if(a.size() != b.size())return a.size() < b.size();
			return a < b;
		});
		for(int i=0;i<x.second.size();++i){
			write(x.second[i]);
			if (i%6==5 && i+1 != x.second.size()) {
                write('\n');
                continue;
            }
            if (i < x.second.size()-1)write(' ');
            
			
		}
		write('\n');
		++cur;
	}
}
 

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
