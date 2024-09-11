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
    for(int x=1;;++x) {
        string s1 = to_string(x), s2 = to_string(2*x), s3 = to_string(3*x), s4 = to_string(4*x), s5 = to_string(5*x), s6 = to_string(6*x);
        sort(s1.begin(), s1.end()); 
        sort(s2.begin(), s2.end()); 
        sort(s3.begin(), s3.end()); 
        sort(s4.begin(), s4.end()); 
        sort(s5.begin(), s5.end()); 
        sort(s6.begin(), s6.end()); 
        if (s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5 && s5 == s6) {
            write(x, '\n');
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