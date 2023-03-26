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
	int n,m;
	read(n,m);
	ll a[n][m];
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			read(a[i][j]);
	int lr=0, rr=n-1;
	ll ans = 0;
	int left_row = 0, right_row = n - 1;
    while(left_row <= right_row) {
        int left_column = 0, right_column = m - 1;
        while(left_column <= right_column) {
            vector <ll> cur_numbers = {a[left_row][left_column]};
            if (left_row != right_row) cur_numbers.pb(a[right_row][left_column]);
            if (right_column != left_column) cur_numbers.pb(a[left_row][right_column]);
            if (left_column != right_column && left_row != right_row) cur_numbers.pb(a[right_row][right_column]);
            sort(cur_numbers.begin(),cur_numbers.end());
            for(int i=0;i<cur_numbers.size();++i)ans+=abs(cur_numbers[i]-cur_numbers[cur_numbers.size()/2]);
 
            left_column++, right_column--;
        }
 
        left_row++, right_row--;
    }
	write(ans,'\n');
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