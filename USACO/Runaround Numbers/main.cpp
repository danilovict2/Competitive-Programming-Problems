/*
ID: danilos4
LANG: C++
TASK: runround
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
ofstream fout ("runround.out");
ifstream fin ("runround.in");
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


ll m;
bool check(ll n){
    vi d;
    while(n){
        d.pb(n%10);
        n/=10;
    }
    reverse(d.begin(),d.end());
    for(int i=0;i<d.size();++i)
        if(d[i] == 0)return false;
    vi cnt(10);
    for(int i=0;i<d.size(); ++i){
        if(cnt[d[i]])return false;
        cnt[d[i]]++;
    }
    int cur = 0, ncur;
    vi cnt2(10);
    for(int i=0;i<d.size();++i){
        ncur =(cur + d[cur]) % (d.size());
        cnt2[d[cur]]++;
        if(cnt2[d[ncur]] && ncur != 0)return false;
        cur = ncur;
    }
    return true;
}


void solve(){
    read(m);
    ++m;
    while(!check(m))m++;
    write(m,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
