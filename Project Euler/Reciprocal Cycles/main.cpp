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
const int maxN = 6000;
int ttl = -1;
int answ;

int num_dig(int n) {
	int d = 0;
	while (n > 0) {
		d++;
		n/=10;
	}

	return d == 0 ? 1 : d;
}

void solve(int N, int D){
    int cpy = D;
	map<int, int> m;
	int d = num_dig(N/D) - 1;
	int original = num_dig(N/D);
	string ans;
	while (N != 0) {
		ans += to_string(N/D);

		N -= (N/D) * D;
		N *= 10;

		if (m.count(N))break;
		m[N] = d;
		d++;
	}

	ans.insert(ans.begin() + original, '.');

	if (m[N] + 2 < ans.size()) {
        int tmp = (ans.size() - 1) - (m[N] + 3);
        if (tmp > ttl) {
            ttl = (ans.size() - 1) - (m[N] + 3);
            answ = cpy;
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
    for(int i=2;i<1000;++i)
        solve(1, i);
    write(answ,'\n');
    return 0;
}