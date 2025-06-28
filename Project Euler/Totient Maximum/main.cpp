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

vector<int> fact(int n) {
    vector<int> ret;
    if (n % 2 == 0)ret.pb(2);
    while(n % 2 == 0)n /= 2;
    for(int i=3;i*i<=n;i+=2) {
        if (n % i == 0) {
            ret.pb(i);
            while(n % i == 0)n /= i;
        }
    }

    if (n > 1)ret.pb(n);
    return ret;
}

void solve() {
    int N = 1000000;
    int ans = -1;
    long double mx = -1;
    for(int i=2;i<=N;++i) {
        vector<int> v = fact(i);
        long double cur = 1;
        for(auto x:v)
            cur *= ((double)x / ((double)x - 1));
        if (cur > mx) {
            ans = i;
            mx = cur;
        }
    }

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