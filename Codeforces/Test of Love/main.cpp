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
    int n, m, k;
    read(n, m, k);
    string s;
    read(s);
    s = "L" + s + "L";
    for(int pos=0;pos<n+1;) {
        int l = -1, w = -1;
        for(int i=1;i<=m;++i) {
            if (s[pos + i] == 'L')l = pos + i;
            if (s[pos + i] == 'W')w = pos + i;
        }

        if (l != -1)pos = l;
        else if(w != -1) {
            pos = w;
            while (s[pos] == 'W' && pos <= n+1)pos++, k--;
            if (s[pos] == 'C') {
                write("NO\n");
                return;
            }
        } else {
            write("NO\n");
            return;
        }
    }

    if (k < 0)write("NO\n");
    else write("YES\n");
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
    while(t--)solve();
    return 0;
}