/*
ID: danilos4
LANG: C++
TASK: concom
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
ofstream fout ("concom.out");
ifstream fin ("concom.in");
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
const int maxN = 101;

bool owned[maxN];
int own[maxN];
vii owns[maxN];

void dfs(int i){
    if(owned[i])return;
    owned[i] = 1;
    for(auto x:owns[i]){
        own[x.first] += x.second;
        if(own[x.first] > 50){
            dfs(x.first);
        }
    }
}

void solve(){
    int n;
    read(n);
    int x,y,w;
    forn(i,n){
        read(x,y,w);
        owns[x].pb({y,w});
    }

    for(int i=1;i<=100;++i){
        memset(owned,false,sizeof(owned));
        memset(own,0,sizeof(own));
        dfs(i);
        for(int j=1;j<=100;++j){
            if(i!=j && owned[j])
                write(i," ",j,"\n");
        }
    }
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
