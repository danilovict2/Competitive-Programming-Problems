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
const int maxN = 10000000;

bool isPan(ll a, ll b, ll c) {
    map<int, int> cnt;
    while (a > 0)cnt[a%10]++, a/=10;
    while (b > 0)cnt[b%10]++, b/=10;
    while (c > 0)cnt[c%10]++, c/=10;
    if (cnt[0]) return false;
    for (int i=1;i<=9;++i) {
        if (cnt[i] != 1)return false;
    }

    return true;
}

void solve() {
    ll sum = 0;
    map<ll, bool> found;
    for (ll a=1000;a<=9999;++a) {
        for (ll b=1;b<=9;++b) {
            if (!found[a*b] && isPan(a, b, a*b)) {
                sum += a*b;
                found[a*b] = true;
            }
        }
    }

    for (ll a=100;a<=999;++a) {
        for (ll b=10;b<=99;++b) {
            if (!found[a*b] && isPan(a, b, a*b)) {
                sum += a*b;
                found[a*b] = true;
            }
        }
    }

    write(sum, '\n');
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