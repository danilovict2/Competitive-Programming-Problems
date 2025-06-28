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

string puzzle[9];
int ans = 0;

bool isValidCol(int c, char d) {
    for(int i=0;i<9;++i)
        if (puzzle[i][c] == d)
            return false;
    return true;
}

bool isValidRow(int r, char d) {
    for(int i=0;i<9;++i)
        if (puzzle[r][i] == d)
            return false;
    return true;
}

bool isValidBox(int r, int c, char d) {
    int lR = r - r%3, lC = c - c%3;
    for(int i=lR;i<lR+3;++i)
        for(int j=lC;j<lC+3;++j)
            if (puzzle[i][j] == d)
                return false;
    return true;
}

bool isValid(int r, int c, char d) {
    return isValidCol(c, d) && isValidRow(r, d) && isValidBox(r, c, d);
}

bool bf() {
    for(int i=0;i<9;++i) {
        for(int j=0;j<9;++j) {
            if (puzzle[i][j] == '0') {
                for (char d='1';d<='9';++d) {
                    if (!isValid(i, j, d))continue;
                    
                    puzzle[i][j] = d;
                    if (bf()) {
                        return true;
                    } else {
                        puzzle[i][j] = '0';
                    }
                }
                return false;
            }
        }
    }

    return true;
}

void solve() {
    for(int i=0;i<9;++i)
        getline(cin, puzzle[i]);
    bf();
    string num = puzzle[0].substr(0, 3);
    ans += stoi(num);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    for(int i=0;i<50;++i) {
        string grid;
        getline(cin, grid);
        solve();
    }

    write(ans, '\n');
    return 0;
}