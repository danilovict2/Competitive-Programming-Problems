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
const int maxN = 1000000;

pii nextDir(pii p) {
    if (p == dirs2[3])
        return dirs2[1];
    if (p == dirs2[1]) 
        return dirs2[2];
    if (p == dirs2[2])
        return dirs2[0];
    if (p == dirs2[0])
        return dirs2[3];
    return {0, 0};
}

void solve() {
    int n = 5;
    ll spiral[n][n];
    ll ans = 0;
    memset(spiral, 0, sizeof(spiral));
    ll i = 0, j = n-1, val = n*n;
    pii dir = {0, -1};
    while (i != n/2 || j != n/2) {
        spiral[i][j] = val;
        val--;
        int x = dir.first, y = dir.second;
        if (i + x == n || i + x < 0 || j + y == n || j + y < 0 || spiral[i + x][j + y]) {
            dir = nextDir(dir);
        }
        
        i += dir.first, j += dir.second;
    }

    for (int i=0;i<n;++i)
        ans += spiral[i][i] + spiral[i][n - i - 1];
    write(ans, '\n');
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	solve();
    return 0;
}