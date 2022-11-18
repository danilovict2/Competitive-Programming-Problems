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
const int maxN = 3000;

int n,k;

void solve(){
	vector<pair<int,int>> ans(n);
	vector<int> a(n);
	for(int i=0;i<n;++i){
		read(ans[i].first);
		a[i] = ans[i].first;
		ans[i].second = i+1;
	}
	sort(ans.begin(), ans.end());
	reverse(ans.begin(), ans.end());
	sort(ans.begin(),ans.begin()+k,sortbysec);
	int sum = 0, sp = 0;
	for(int i=0;i<k-1;++i){
		sum+=*max_element(a.begin()+sp, a.begin()+ans[i].second);
		sp = ans[i].second;
	}
	sum+=*max_element(a.begin()+sp,a.end());
	write(sum,"\n");
	sp = 0;
	for(int i=0;i<k-1;++i){
		write(ans[i].second-sp, " ");
		sp = ans[i].second;
	}
	write(n-sp,"\n");
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