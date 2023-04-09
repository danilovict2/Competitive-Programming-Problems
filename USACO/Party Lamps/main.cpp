/*
ID: danilos4
LANG: C++
TASK: lamps
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
ofstream fout ("lamps.out");
ifstream fin ("lamps.in");
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

int n,presses;
vi on, off;
set<vi> ans;

bool check(vi lamps){
    for(auto x:on)if(lamps[x] == 0)return false;
    for(auto x:off)if(lamps[x] == 1)return false;
    return true;
}

vi A(vi lamps){
    for(int i=1;i<=n;++i)lamps[i] = 1-lamps[i];
    return lamps;
}

vi B(vi lamps){
    for(int i=1;i<=n;i+=2)lamps[i] = 1-lamps[i];
    return lamps;
}

vi C(vi lamps){
    for(int i=2;i<=n;i+=2)lamps[i] = 1-lamps[i];
    return lamps;
}

vi D(vi lamps){
    for(int i=1;i<=n;i+=3)lamps[i] = 1-lamps[i];
    return lamps;
}

void dfs(vi lamps, int cnt, bool a, bool b, bool c, bool d){
    if(cnt > presses)return;
    if((presses - cnt)%2 == 0){
        if(check(lamps))ans.insert(lamps);
    }
    if(!a)dfs(A(lamps),cnt+1,1,b,c,d);
    if(!b)dfs(B(lamps),cnt+1,a,1,c,d);
    if(!c)dfs(C(lamps),cnt+1,a,b,1,d);
    if(!d)dfs(D(lamps),cnt+1,a,b,c,1);
}


void solve(){
    read(n,presses);
    int t;
    read(t);
    while(t!=-1){
        on.pb(t);
        read(t);
    }
    read(t);
    while(t!=-1){
        off.pb(t);
        read(t);
    }
    vi lamps(n+1,1);
    dfs(lamps,0,0,0,0,0);
    if(ans.size() == 0){
        write("IMPOSSIBLE\n");
    }else{
        for(auto x:ans){
            for(int i=1;i<=n;++i)write(x[i]);
            write('\n');
        }
    }
    
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
