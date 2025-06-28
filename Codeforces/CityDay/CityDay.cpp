#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define FOR(i, n) for (int i = 0; i < n; ++i)
template <typename... T>
void read(T &...args)
{
	((cin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((cout << args), ...);
}
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 100000;

int n,x,y; 

void solve(){
	vector<int> a(n);
	for(auto &i:a)read(i);
	for(int i=0;i<n;++i){
		bool b = true;
		int t = a[i];
		for(int j =i-1 ; j > i-x-1; j--){
			if(j>=0)
			if(t >= a[j])
				b = 0;
		}
		for(int j = i+1 ; j < i+y+1 ; j++){
			if(j<n)
			if(t >= a[j])b = false;
		}
		if(b){write(i+1,"\n"); return;}
	}
	
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(n,x,y);
	solve();
	return 0;
}