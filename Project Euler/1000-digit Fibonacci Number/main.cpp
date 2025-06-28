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


void solve() {
    int n = 2, a[1000] = {0}, b[1000] = {0}, c[1000] = {0}, carry = 0;
    a[0] = b[0] = 1;
    while (true) {
        for (int i=0;i<1000;++i) {
            int temp = carry + a[i] + b[i];

            carry = 0;
            if (temp > 9) {
                c[i] = temp % 10;
                carry = temp / 10;
            } else {
                c[i] = temp;
            }
        }

        for (int i=0;i<1000;++i) {
            a[i] = b[i];
            b[i] = c[i];
        }

        n++;
        if (c[999] != 0)break;
    }

    write(n,'\n');
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