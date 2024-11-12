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
    int n;
    string x;
    read(n, x);
    string a, b;
    for(auto c:x) {
        if (c == '0') a += "0", b += "0";
        if (c == '1') {
            string s1 = max(a + "0", b + "1"), s2 = max(a + "1", b + "0"), s3 = max(a + "2", b + "2");
            if (s1 <= s2 && s1 <= s3)
                a += "0", b += "1";
            else if(s2 <= s1 && s2 <= s3)
                a += "1", b += "0";
            else a += "2", b += "2";
        }
        if (c == '2') {
            string s1 = max(a + "1", b + "1"), s2 = max(a + "0", b + "2"), s3 = max(a + "2", b + "0");
            if (s1 < s2 && s1 < s3)
                a += "1", b += "1";
            else if(s2 < s1 && s2 < s3)
                a += "0", b += "2";
            else a += "2", b += "0";
        }
    }

    write(a, '\n', b, '\n');
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