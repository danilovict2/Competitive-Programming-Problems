/*
ID: danilos4
LANG: C++
TASK: ariprog
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
ofstream fout ("ariprog.out");
ifstream fin ("ariprog.in");
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
const int maxN = 251;

int n,m;
bool bsq[2*maxN*maxN]={false};

bool check(int s, int d){
    for(int i=0;i<n;++i){
        if(!bsq[s+i*d])return false;
    }
    return true;
}

void solve(){
    read(n,m);
    for(int i=0;i<=m;++i){
        for(int j=0;j<=m;++j){
            bsq[i*i + j*j] = 1;
        }
    }
    m = 2*m*m;
    vii ans;
    for(int i=0;i<=m;++i){
        for(int j=1;j<=(m-i)/(n-1);++j){
            if(check(i,j))ans.pb({i,j});
        }
    }
    sort(ans.begin(),ans.end(),sortbysec);
    if(ans.empty())write("NONE\n");
    for(auto x:ans)write(x.first," ",x.second,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
