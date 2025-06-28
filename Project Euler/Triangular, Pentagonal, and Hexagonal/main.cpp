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
const int maxN = 1e9;

vector<ll> getDivisors(ll n) {
    vector<ll> ret;
    for (ll i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            ret.pb(i);

            if (n / i != i)
                ret.pb(n/i);
        }
    }

    return ret;
}

void solve() {
    ll x;
    for (ll n=144;;++n) {
        x = n*(2*n - 1);
        vector<ll> v = getDivisors(2*x);
        bool ok1 = false, ok2 = false;
        for (auto d:v) {
            if (d * (d+1) == 2*x)ok1 = true;
            if(d * (d*3 - 1) == 2*x)ok2 = true;
            
            if (ok1 && ok2)
                break;        
        }

        if (ok1 && ok2)
            break;
    }

    write(x, '\n');
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