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
const int maxN = 1e7;

bool prime[maxN + 1];

void sieve() {
    memset(prime, true, sizeof(prime));

    for (int p = 2; p*p <= maxN; ++p)
        if (prime[p])
            for (int i=p*p;i<=maxN;i += p)
                prime[i] = false;
}

bool checkRTL(ll n) {
    while (n > 0) {
        if (!prime[n])
            return false;    
    
        n /= 10;
    }

    return true;
}

bool checkLTR(ll n) {
    while (n > 0) {
        if (!prime[n])
            return false;    
    
        n %= static_cast<int>(pow(10, static_cast<size_t>(log10(n))));
    }

    return true;
}

void solve() {
    sieve();
    int n = 0;
    ll sum = 0;
    prime[1] = false;
    for (ll i=11;n < 11;++i) {
        if (!prime[i])continue;
        bool ok = checkRTL(i) && checkLTR(i);
        if (ok)
            sum += i, n++;
        
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