/*
ID: danilos4
LANG: C++
TASK: milk
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
ofstream fout ("milk.out");
ifstream fin ("milk.in");
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
const int maxN = 10;

int n,m;

void solve(){
    read(n,m);
    vii farmers;
    int p,a;
    forn(i,m){
        read(p,a);
        farmers.pb({p,a});
    }
    sort(farmers.begin(),farmers.end());
    int ans = 0;
    forn(i,m){
        if(n < farmers[i].second){
            ans+=n*farmers[i].first;
            break;
        }
        ans += farmers[i].second * farmers[i].first;
        n-=farmers[i].second;
    }
    write(ans,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
