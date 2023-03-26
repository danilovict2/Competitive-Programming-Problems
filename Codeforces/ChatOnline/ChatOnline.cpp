#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
#define sz(a) a.size() 
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 0x3f3f3f3f
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
const int maxN = 5001;



void solve(){
	int p,q,l,r;
	read(p,q,l,r);
	int x,y,t[2010]={0};
	for(int i=0;i<p;++i){
		read(x,y);
		for(int j=x;j<=y;++j)t[j]=1;
	}
	int c[2010],d[2010];
	int ans = 0;
	for(int i=0;i<q;++i)read(c[i],d[i]);
	for(int i=l;i<=r;++i){
		bool ok = false;
		for(int j=0;j<q;++j){
			for(int k=c[j]+i;k<=d[j]+i;++k){
				if(t[k]){ok=true;break;}
			}
		}
		if(ok)++ans;
	}
	write(ans,"\n");
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	solve();
	return 0;
}

