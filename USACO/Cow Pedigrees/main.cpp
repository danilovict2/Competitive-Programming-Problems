/*
ID: danilos4
LANG: C++
TASK: nocows
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
ofstream fout ("nocows.out");
ifstream fin ("nocows.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 52;

int N,K;
int dp[101][201], subtrees[101][201];
int c;

void solve(){
    read(N,K);
    dp[1][1] = 1;
    for(int i=2;i<=K;++i){
        for(int j=1;j<=N;j+=2){
            for(int k=1;k<=j-1-k;k+=2){
                if (k!=j-1-k)c = 2; else c = 1;
                dp[i][j]+=c*(
                    subtrees[i-2][k]*dp[i-1][j-1-k]  
                    +dp[i-1][k]*subtrees[i-2][j-1-k]
                    +dp[i-1][k]*dp[i-1][j-1-k]);
                dp[i][j] %= MOD;
            }
        }
        for(int k=0;k<=N;++k){
            subtrees[i-1][k] += dp[i-1][k] + subtrees[i-2][k];
            subtrees[i-1][k] %= MOD;
        }
    }
    write(dp[K][N],"\n");   
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
