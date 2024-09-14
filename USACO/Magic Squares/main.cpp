/*
ID: danilos4
LANG: C++
TASK: msquare
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
ofstream fout("msquare.out");
ifstream fin("msquare.in");
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
const int maxN = 1e8;


vector<int> doA(vector<int> &seq) {
	vector<int> ret;
	for (int i=7;i>=4;--i)
		ret.pb(seq[i]);
	for (int i=3;i>=0;--i)
		ret.pb(seq[i]);
	return ret;
}

vector<int> doB(vector<int> &seq) {
	vector<int> ret(1, seq[3]);
	for (int i=0;i<3;++i)
		ret.pb(seq[i]);
	for(int i=5;i<8;++i)
		ret.pb(seq[i]);
	ret.pb(seq[4]);
	return ret;
}

vector<int> doC(vector<int> &seq) {
	vector<int> ret(1, seq[0]);
	ret.pb(seq[6]);
	ret.pb(seq[1]);
	ret.pb(seq[3]);
	ret.pb(seq[4]);
	ret.pb(seq[2]);
	ret.pb(seq[5]);
	ret.pb(seq[7]);
	return ret;
}

int target[8];

bool reachedTarget(vector<int> &seq) {
	for (int i=0;i<8;++i)
		if (seq[i] != target[i])
			return false;
	return true;
}

string bfs() {
	vector<int> original = {1, 2, 3, 4, 5, 6, 7, 8};
    if (reachedTarget(original))
        return "";

    string options = "ABC", ret = "";
    queue<pair<string, vector<int>>> q;
    set<vector<int>> vis;

    q.push({"A", original});
    q.push({"B", original});
    q.push({"C", original});

    vis.insert(doA(original));
    vis.insert(doB(original));
    vis.insert(doC(original));

    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        vector<int> nw;
        if (p.first.back() == 'A')
            nw = doA(p.second);
        if (p.first.back() == 'B')
            nw = doB(p.second);
        if (p.first.back() == 'C')
            nw = doC(p.second);

        if (reachedTarget(nw)) {
            ret = p.first;
            break;
        }

        for (auto x : options) {
            if (x == 'A' && p.first.back() == 'A') continue;
            vector<int> next;
            if (x == 'A') next = doA(nw);
            if (x == 'B') next = doB(nw);
            if (x == 'C') next = doC(nw);

            if (!vis.count(next)) {
                vis.insert(next);
                q.push({p.first + x, nw});
            }
        }
    }

    return ret;
}

void solve(){
	for(int i=0;i<8;++i)
		read(target[i]);
	string ans = bfs();
	write(ans.size(), '\n');
	for(int i=1;i<=ans.size();++i) {
		write(ans[i-1]);
		if (i == ans.size()) continue;
		if (i%60 == 0) write('\n');
	}

	write('\n');
}

int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}