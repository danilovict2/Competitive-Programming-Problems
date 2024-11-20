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

map<int, int> fact(int n) {
    map<int, int> ret;
    while(n % 2 == 0)n /= 2, ret[2]++;
    for(int i=3;i*i<=n;i+=2) {
        while(n % i == 0)n /= i, ret[i]++;
    }

    if (n > 1)ret[n]++;
    return ret;
}

void solve() {
    int N = 10000000, ans = -1;
    long double mn = LONG_MAX;
    for (int n=2;n<N;++n) {
        map<int,int> m = fact(n);
        ll phi = 1;
        for(auto x:m)
            phi *= pow(x.first, x.second - 1) * (x.first - 1);
        if (((long double)n / (long double)phi) > mn)continue;
        string s1 = to_string(n);
        string s2 = to_string(phi);

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2) {
            mn = ((long double)n / (long double)phi);
            ans = n;
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