#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 100001
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

int t,n;

void solve(){
	string s;
	read(n,s);
	int a[n];
	for(int i=0;i<n;++i)a[i] = s[i]-'0';
	if(a[0]==1 || a[n-1]==1){write(n*2,"\n"); return;}
	int l,r,one=0;
	for(int i=0;i<n;++i)
		if(a[i]){
			one = 1;
			l = i;
			break;
		}
	if(!one){write(n,"\n"); return;}
	int j = -1;
	for(int i=n-1;i>=0;--i){
		++j;
		if(a[i]){
			r = j;
			break;
		}
	}
	write(2*(n-min(l,r)),"\n");
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(t);
	while(t--)solve();
	return 0;
}