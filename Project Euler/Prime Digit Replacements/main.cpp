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
const int maxN = 1e6;

bool prime[maxN + 1];
void sieve() {
    memset(prime, true, sizeof(prime));
    for(int p=2;p*p<=maxN;++p)
        if (prime[p])
            for(int i=p*p;i<=maxN;i+=p)
                prime[i] = false;
}

void solve() {
    sieve();
    vector<pair<int, int>> repeating;
    for(int i=2;i<=maxN;++i) {
        if (!prime[i])continue;
        int p = i;
        map<int,int> m;
        while (p > 0) m[p%10]++, p/=10;
        int mx = -1, dig;
        for(auto x:m)
            if (x.second > mx) {
                mx = x.second;
                dig = x.first;
            }
        if (mx < 2 || mx > 4)continue;
        repeating.pb({i, dig});
    }

    for(auto x:repeating) {
        int fam = 0;
        for(char c='0';c<='9';++c) {
            string s = to_string(x.first);
            for(int i=0;i<s.size();++i) {
                if (s[i] == (char)(x.second + '0'))
                    s[i] = c;
            }

            if (s[0] == '0')
                continue;
            fam += prime[stoi(s)];
        }

        if (fam >= 8) {
            write(x.first, '\n');
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