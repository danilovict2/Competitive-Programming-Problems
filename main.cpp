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
#define INF 1e9
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 101;

int N, M;

bool isValid(int i, int j) {
	return i >= 0 && i < N && j >= 0 && j < M;
}

void solve(){
	cin >> N >> M;
	string s[N];
	int cnt = 0, ans = 0;
	forn(i,N){
		cin >> s[i];
		forn(j, M) {
			if (s[i][j] == '.')cnt++;
		}
	}
	
	while (cnt > 0) {
		set<pair<int, int>> st;
		forn(i, N) {
			forn(j, M) {
				if (s[i][j] == 'X') {
					for(auto dir:dirs2) {
						int x = i + dir.first, y = j + dir.second;
						if (isValid(x, y) && s[x][y] == '.') {
							st.insert({x, y});
						}
					}
				}
			}
		}

		cnt -= st.size();
		for(auto x:st)
			s[x.first][x.second] = 'X';
		st.clear();

		forn(i, N) {
			forn(j, M) {
				if (s[i][j] == 'S') {
					for(auto dir:dirs2) {
						int x = i + dir.first, y = j + dir.second;
						if (isValid(x, y) && s[x][y] == '.') {
							st.insert({x, y});
						}
					}
				}
			}
		}

		cnt -= st.size();
		for(auto x:st)
			s[x.first][x.second] = 'S';
	}

	forn(i,N)
	forn(j,M)
	if (s[i][j] == 'S')ans++;
	cout << ans << "\n";
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}