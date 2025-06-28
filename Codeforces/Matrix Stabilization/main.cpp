#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define mp make_pair
#define sz(a) a.size()
#define MOD 1000000007
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
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
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 1e5 + 1;

void solve() {
    int n,m;
    read(n, m);
    int a[n][m];
    forn(i,n)
    forn(j,m)
    read(a[i][j]);

    for(int i=0;i<n;++i) {
        for(int j=0;j<m;++j) {
            int mx = -1;
            if (i + 1 < n)mx = max(mx, a[i+1][j]);
            if (j + 1 < m)mx = max(mx, a[i][j+1]);
            if (i - 1 >= 0)mx = max(mx, a[i-1][j]);
            if (j - 1 >= 0)mx = max(mx, a[i][j-1]);
            a[i][j] = min(mx, a[i][j]);
        }
    }

    forn(i,n) {
        forn(j,m) {
            write(a[i][j], ' ');
        }
        write('\n');
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    read(t);
    while(t--)
        solve();
    return 0;
}