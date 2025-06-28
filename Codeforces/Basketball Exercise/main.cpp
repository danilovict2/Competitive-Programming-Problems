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
const int maxN = 50;

void solve(){
    int n, m;
    read(n, m);

    int cards[n][m];
    forn(i, n){
        forn(j, m) read(cards[i][j]);
        sort(cards[i], cards[i] + m);
    }

    int perm[100];
    forn(i, n) perm[i] = i;

    bool ok = false;
    do {
        int tmp[100][100];
        forn(i, n)
        forn(j, m)
        tmp[i][j] = cards[i][j];
            
        int top = -1;
        bool valid = true;

        for (int round = 0; round < m && valid; ++round) {
            for (int i = 0; i < n && valid; ++i) {
                int cow = perm[i];
                bool played = false;
                for (int j = 0; j < m; ++j) {
                    if (tmp[cow][j] > top) {
                        top = tmp[cow][j];
                        tmp[cow][j] = -1;
                        played = true;
                        break;
                    }
                }

                if (!played)
                    valid = false;
            }
        }
        if (valid) {
            forn(i, n)write(perm[i]+1, ' ');
            write('\n');
            ok = true;
            break;
        }
    } while (next_permutation(perm, perm + n));

    if (!ok) {
        write(-1, '\n');
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    read(t);
    while (t--)
        solve();
    return 0;
}