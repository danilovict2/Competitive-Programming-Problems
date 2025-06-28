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

string multiply(string num1, string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";

    vector<int> result(len1 + len2, 0);
    int i_n1 = 0; 
    int i_n2 = 0; 
    
    for (int i=len1-1; i>=0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0; 
          
        for (int j=len2-1; j>=0; j--) {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }

    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;

    if (i == -1)
    return "0";
    string s = "";
    
    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}


void solve() {
    map<string, int> found;
    map<string, string> unsorted;
    for(int i=1;i<=10000;++i) {
        string res = "1";
        for(int j=0;j<3;++j)
            res = multiply(res, to_string(i));

        string cpy = res;
        sort(res.begin(), res.end());
        found[res]++;

        if (!unsorted.count(res)) 
            unsorted[res] = cpy;
    }

    for(auto x:found) {
        if (x.second == 5) {
            write(unsorted[x.first], '\n');
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