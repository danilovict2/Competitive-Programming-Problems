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
const int maxN = 2*1e5+1;

int n,k;

void solve(){
	int a;
	queue<int> q;
	set<int> s;
	for(int i=0;i<n;++i){
		read(a);
		if(!s.count(a)){
			if(q.size() == k){s.erase(q.front());q.pop();}
			q.push(a);
			s.insert(a);
		}
	}
	vi ans(q.size());
	for(int i=q.size()-1;i>=0;--i){
		ans[i] = q.front();
		q.pop();
	}
	write(ans.size(),"\n");
	for(int i=0;i<ans.size();++i)write(ans[i]," ");
	write("\n");
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

