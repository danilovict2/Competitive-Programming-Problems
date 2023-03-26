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

int n;

void solve(){
	read(n);
	int c[n];
	forn(i,n)read(c[i]);
	int i=0,j=n-1;
	int a=0,b=0,ans=0;
	int suml = 0,sumr = 0;
	while(i<=j){
		if(ans%2==0){
			int nsuml = 0;
			while(i<=j && nsuml<=sumr)nsuml+=c[i++];
			a+=nsuml;
			suml = nsuml;
		}else{
			int nsumr = 0;
			while(i<=j && nsumr<=suml)nsumr+=c[j--];
			sumr = nsumr;
			b+=nsumr;
		}
		++ans;
	}
	write(ans," ",a,' ',b,'\n');
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