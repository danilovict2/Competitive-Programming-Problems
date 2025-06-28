#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define mp make_pair
#define forn(i, j, n) for (int i = (j); i < n; ++i)
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


void solve(){	
	int n,u,l,r,d;
	read(n,u,r,d,l);
	for(int i=0;i<16;++i){
		int tu=u,tl=l,tr=r,td=d;
		if (i & 1){
			tl--;
            td--;
		}
        if(i & 2){
            tu--;
            tl--;
		}
        if(i & 4){
            td--;
            tr--;
		}
        if(i & 8){
            tr--;
            tu--;
		}
		if((tu>=0&&tr>=0&&td>=0&&tl>=0) && (tu<=(n-2)&&tr<=(n-2)&&td<=(n-2)&&tl<=(n-2))){
			write("YES\n");
			return;
		}
	}
	write("NO\n");
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
	while (t--)
		solve();
	return 0;
}