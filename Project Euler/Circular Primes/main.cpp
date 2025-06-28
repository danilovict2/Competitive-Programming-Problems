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

bool primes[maxN + 1];

void sieve() {
    memset(primes, true, sizeof(primes));

    for (int p = 2; p * p <= maxN; ++p)
        if (primes[p])
            for (int i = p * p; i <= maxN; i += p)
                primes[i] = false;
}

int shift(int n) {
    string s = to_string(n);
    rotate(s.begin(), s.begin() + 1, s.end());
    int ret = stoi(s);
    if (to_string(ret).size() < s.size())
        return 4;
    return ret;
}

void solve() {
    sieve();
    int ans = 0;
    for (int i=2;i<=maxN;++i) {
        int j = i, ok = 1;
        do {
            if (!primes[j]) {
                ok = 0;
                break;
            }
            j = shift(j);
        } while (j != i);

        ans += ok; 
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