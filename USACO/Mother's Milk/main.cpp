/*
ID: danilos4
LANG: C++
TASK: milk3
*/
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
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
ofstream fout ("milk3.out");
ifstream fin ("milk3.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 20;

vector<int> ans;
bool vis[21][21][21]={false};
int A,B,C;

void dfs(int a, int b, int c){
    if(vis[a][b][c])return;
    vis[a][b][c] = 1;
    if(a == 0)ans.pb(c);
    int x;
    x = min(a,B-b); dfs(a-x, b+x, c);
    x = min(a, C-c); dfs(a-x, b, c+x);
    x = min(A-a,b); dfs(a+x, b-x, c);
    x = min(b, C-c); dfs(a, b-x, c+x);
    x = min(c,A-a); dfs(a+x, b, c-x);
    x = min(c, B-b); dfs(a, b+x, c-x);
}

void solve(){
    read(A,B,C);
    dfs(0,0,C);
    sort(ans.begin(), ans.end());
    for(int i=0;i<ans.size();++i){
        write(ans[i]);
        if(i+1 != ans.size())write(" ");
    }
    write('\n');
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
