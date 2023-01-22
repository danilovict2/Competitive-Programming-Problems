#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
#define forn(j, n) for (int i = (j); i < n; ++i)
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
const int maxN = 101;


int n,s;

int diff(int l, int r, vi &p){
	return p[r]-(l?p[l-1]:0);
}

void solve(){
	read(n,s);
	vi a(n),p(n);
	forn(0,n){
		read(a[i]);
		p[i]=a[i];
		if(i)p[i]+=p[i-1];
	}
	int ans = INF;
	forn(0,n){
		int l = i,r=n-1,pos=-1;
		while(l<=r){
			int mid = (l+r)/2;
			if(diff(i,mid,p) <= s){
				pos = mid;
				l = mid+1;
			}else r = mid-1;
		}
		if(pos==-1 || diff(i,pos,p)!=s)continue;
		ans = min(ans,n-(pos-i+1));
	}
	if(ans == INF)write("-1\n");
	else write(ans,"\n");
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	read(t);
	while(t--)solve();
	return 0;
}