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

void solve() {
    map<char, vector<pair<int, int>>> pos;
    forn(i, maxN) {
        string s; read(s);
        forn(j, s.size())
            if (s[j] != '.')pos[s[j]].pb({i, j});
    }
    
    set<pair<int, int>> used;
    for(char c='0';c<='z';++c) {
        auto v = pos[c];
        for(int i=0;i<v.size();++i) {
            for(int j=i+1;j<v.size();++j) {
                int distX = v[j].first - v[i].first, distY = v[j].second - v[i].second;
                used.insert({v[j].first + distX, v[j].second + distY});

                distX = v[i].first - v[j].first, distY = v[i].second - v[j].second;
                used.insert({v[i].first + distX, v[i].second + distY});
            }
        }
    }
    
    int ans = 0;
    for(auto x:used) {
        if (x.first < 0 || x.second < 0 || x.first >= maxN || x.second >= maxN)continue;
        ans++;
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