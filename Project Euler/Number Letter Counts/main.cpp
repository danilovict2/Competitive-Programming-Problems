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
void read(T &...args){
	((cin >> args), ...);
}
template <typename... T>
void write(T... args){
	((cout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 1e6 + 1;

map<int, string> m;

void init() {
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[5] = "five";
    m[6] = "six";
    m[7] = "seven";
    m[8] = "eight";
    m[9] = "nine";
    m[10] = "ten";
    m[11] = "eleven";
    m[12] = "twelve";
    m[13] = "thirteen";
    m[14] = "fourteen";
    m[15] = "fifteen";
    m[16] = "sixteen";
    m[17] = "seventeen";
    m[18] = "eighteen";
    m[19] = "nineteen";
    m[20] = "twenty";
    m[30] = "thirty";
    m[40] = "forty";
    m[50] = "fifty";
    m[60] = "sixty";
    m[70] = "seventy";
    m[80] = "eighty";
    m[90] = "ninety";
}

void solve(){
    init();
    string ans;
    for(int i=1;i<=10;++i) {
        ans += m[i];
    }

    for(int i=11;i<100;++i) {
        if (!m.count(i)){
            int t = i / 10;
            t *= 10;
            m[i] = m[t] + m[i%10]; 
        }
        
        ans += m[i];
    }

    for(int i=100;i<1000;++i) {
        if (!m.count(i)) {
            m[i] = m[i/100] + "hundred" + m[i%100]; 
            if (i%100 != 0) m[i] += "and";
        }

        ans += m[i];
    }

    write(ans.size() + 11,'\n');

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