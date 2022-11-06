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

int n;
ll k;

void solve(){
	deque<int> q;
	int a;
	FOR(i,n){
		read(a);
		q.pb(a);
	}
	if(k>=n){write(n,"\n"); return;}

	int cnt = 0;
	while(true){
		auto it = q.begin();
		++it;
		int x = q.front();
		while(it!=q.end()){
			if(x>*it)++cnt,++it;
			else break;
		}
		if(cnt>=k){
			write(x,"\n");
			break;
		}
		cnt = 1;
		q.pop_front();
		q.pb(x);
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(n,k);
	solve();
	return 0;
}