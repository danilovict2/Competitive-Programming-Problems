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
const int maxN = 10000;

vector<ll> coins;

void sieve() {
    bool prime[maxN + 1];
    memset(prime, true, sizeof(prime));

    for(ll p=2;p*p<=maxN;++p)
        if (prime[p])
            for(ll i=p*p;i<=maxN;i+=p)
                prime[i] = false;
    for (ll i=2;i<=maxN;++i)
        if (prime[i])
            coins.pb(i);
}

void solve() {
    sieve();
    ll x = 10000;
    ll dp[x+1] = {0};
    dp[0] = 1;

    for(auto c:coins) {
        for(ll i=1;i<=x;++i) {
            if (i - c >= 0)
                dp[i] += dp[i-c];
        }
    }

    for(int i=1;i<=x;++i) {
        if (dp[i] > 5000) {
            write(i, '\n');
            break;
        }
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
    solve();
    return 0;
}