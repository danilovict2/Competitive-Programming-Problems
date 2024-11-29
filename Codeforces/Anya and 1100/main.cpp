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

string s;
bool check_1100(int i) {
	if (i < 0) return false;
	if (i >= s.size() - 3) return false;
	if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') return true;
	return false;
}

void solve() {
    read(s);
    int q; read(q);
    int cnt = 0;
    for(int i=0;i<s.size();++i) {
        if (check_1100(i))cnt++;
    }
    while(q--) {
        int i;
        char v;
        read(i, v);
        i--;
        int before = 0;
        for(int j=max(0, i-3);j<min(i+4, (int)s.size());++j) {
            if (check_1100(j))before++;
        }
        s[i] = v;
        int after = 0;
        for(int j=max(0, i-3);j<min(i+4, (int)s.size());++j) {
            if (check_1100(j))after++;
        }

        cnt += (after - before);
        if (cnt > 0)write("YES\n");
        else write("NO\n");
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
    int t;
    read(t);
    while(t--)solve();
    return 0;
}