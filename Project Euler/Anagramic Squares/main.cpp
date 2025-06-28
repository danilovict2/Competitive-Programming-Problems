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
const int maxN = 80;

ll calc(string s) {
    ll num = 0;
    for(auto x:s)
        num = num * 10 + (x - '0');
    ll sq = sqrt(num);
    if (sq * sq == num)
        return num;
    return -1;
}

ll getMax(string s1, string s2, ll num, int i) {
    if (i == -1) {
        ll v1 = calc(s1), v2 = calc(s2);
        if (v1 == -1 || v2 == -1 || v1 == v2)
            return -1;
        return max(v1, v2);
    }

    int pos;
    for(int j=0;j<s2.size();++j)
        if (s1[i] == s2[j])
            pos = j; 
            
    
    if (pos == 0 && (num % 10 == 0))
        return -1;

    s1[i] = s2[pos] = (num % 10) + '0';
    return getMax(s1, s2, num / 10, i - 1);
}

int getNumSize(ll n) {
    int ret = 0;
    while (n > 0)
        ret++, n/=10;
    return ret;
}

int isUnique(ll n) {
    map<int, bool> m;
    while (n > 0) {
        if (m[n%10])
            return false;
        m[n%10] = true;
        n /= 10;
    }

    return true;
}

void solve() {
    map<string, vector<string>> anagrams;
    string s;
    read(s);
    for(int i=0;i<s.size();++i) {
        string word;
        while(s[i] != ',' && i < s.size()) {
            if (s[i] != '"')
                word.pb(s[i]);
            i++;
        }
        
        string sorted = word;
        sort(sorted.begin(), sorted.end());
        anagrams[sorted].pb(word);
    }

    ll ans = 0;
    for(ll num=96;num<=31622;++num) {
        if (!isUnique(num * num)) continue;
        int sz = getNumSize(num * num);
        for(auto x:anagrams) {
            if (sz != x.second[0].size()) continue;
            for(int i=0;i<x.second.size();++i) {
                for(int j=i+1;j<x.second.size();++j) {
                    ans = max(ans, getMax(x.second[i], x.second[j], num * num, x.second[i].size() - 1));
                    ans = max(ans, getMax(x.second[j], x.second[i], num * num, x.second[i].size() - 1));
                }
            }
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