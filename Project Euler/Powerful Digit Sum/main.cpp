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

int mult(int n, int *arr, int x) {
    int carry = 0;
    for(int i=0;i<n;++i) {
        int prod = arr[i] * x + carry;
        arr[i] = prod % 10;
        carry = prod / 10;
    }

    while(carry) {
        arr[n] = carry % 10;
        carry /= 10;
        n++;
    }

    return n;
}

int convert(int a, int *arr) {
    vector<int> v;
    while (a > 0) {
        v.pb(a%10);
        a /= 10;
    }

    for(int i=0;i<v.size();++i)
        arr[i] = v[i];
    return v.size();
}

void solve() {
    int arr[250] = {0};
    int ans = 0;
    for(int a=2;a<100;++a) {
        int n = convert(a, arr);
        for(int b=1;b<100;++b) {
            n = mult(n, arr, a);
            int sum = 0;
            for(int i=n-1;i>=0;--i)
                sum += arr[i];
            ans = max(ans, sum);
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