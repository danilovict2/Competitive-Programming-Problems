/*
ID: danilos4
LANG: C++
TASK: fracdec
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define MOD 9901
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
ofstream fout("fracdec.out");
ifstream fin("fracdec.in");
template <typename... T>
void read(T &...args)
{
	((fin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 150;

int num_dig(int n) {
	int d = 0;
	while (n > 0) {
		d++;
		n/=10;
	}
	
	return d == 0 ? 1 : d;
}

void solve(){
	int N, D;
	read(N, D);
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

	if (ans.back() == '.')ans += '0';
	else if (m[N] + 2 < ans.size()) {
		ans.insert(ans.begin() + m[N] + 2, '(');
		ans += ')';
	}

	for (int i=1;i<=ans.size();++i) {
		write(ans[i-1]);
		if (i % 76 == 0 || i == ans.size()) write('\n');
	}
}

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}