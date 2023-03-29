/*
ID: danilos4
LANG: C++
TASK: crypt1
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
ofstream fout ("crypt1.out");
ifstream fin ("crypt1.in");
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
const int maxN = 1000;

int n;
int a[maxN];

bool check(int x){
    while(x > 0){
        int d = x%10;
        bool ok = false;
        forn(i,n)if(a[i] == d){ok = 1; break;}
        if(!ok)return ok;
        x/=10;
    }
    return true;
}

void solve(){
    read(n);
    forn(i,n)read(a[i]);
    int ans = 0;
    forn(ai,n)
    forn(bi,n)
    forn(ci,n)
    forn(di,n)
    forn(ei,n){
        int av = a[ai],bv = a[bi],cv = a[ci], dv = a[di], ev = a[ei];
        int f = (100*av + 10*bv + cv)*ev;
        int g = (100*av + 10*bv + cv)*dv;
        int h = f + 10*g;
        if(check(h) && h < 1e4 && check(f) && f < 1e3 && check(g) && g<1e3)++ans;
    }
    write(ans,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
