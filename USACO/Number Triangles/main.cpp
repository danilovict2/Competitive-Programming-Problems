/*
ID: danilos4
LANG: C++
TASK: numtri
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
ofstream fout ("numtri.out");
ifstream fin ("numtri.in");
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
const int maxN = 1001;

int r;
int ans[maxN][maxN];
int triangle[maxN][maxN];

int calc(int i,int j){
    if(ans[i][j] != -1)return ans[i][j];
    if(i < r && j < r){
        ans[i][j] = triangle[i][j] + max(calc(i+1,j), calc(i+1,j+1));
        return ans[i][j];
    }else return 0;
}

void solve(){
    read(r);
    forn(i,r){
        for(int j=0;j<=i;++j){
            read(triangle[i][j]);
            ans[i][j] = -1;
        }
    }
    write(calc(0,0),"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
