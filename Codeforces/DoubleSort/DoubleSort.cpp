#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
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
const int maxN = 101;


int n;

void solve(){
	read(n);
	vi a(n),b(n);
	forn(i,n)read(a[i]);
	forn(i,n)read(b[i]);
	vii ans;
	for(int i=0;i<n;++i){
		for(int j=0;j<n-1;++j){
			if(a[j] > a[j+1]||b[j]>b[j+1]){
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
				ans.pb(mp(j+1,j+2));
			}
		}
	}
	bool ok = true;
	for(int i=0;i<n-1;++i)
		if(a[i]>a[i+1] || b[i]>b[i+1]){ok=false;break;} 		
	if(!ok)write("-1\n");
	else{
		write(ans.size(),"\n");
		for(auto i:ans)write(i.first," ",i.second,"\n");
	}
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