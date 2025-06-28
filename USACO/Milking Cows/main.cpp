/*
ID: danilos4
LANG: C++
TASK: milk2
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
ofstream fout ("milk2.out");
ifstream fin ("milk2.in");
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
const int maxN = 2 * 1e5 + 1;



void solve(){
	int n;
    read(n);
    vii v;
    forn(i,n){
        int s,e;read(s,e);
        v.pb({s,-1});
        v.pb({e,1});
    }
    sort(v.begin(),v.end());
    int f=0,curm=0,curi=0,ansm=0,ansi=0;
    for(int i=0;i<v.size();++i){
        if(i){
            if(f){
                curm += v[i].first - v[i-1].first;
                ansi = max(ansi,curi);
                curi = 0;
            }else{
                curi += v[i].first - v[i-1].first;
                ansm = max(ansm,curm);
                curm = 0;
            }
        }
        f+=v[i].second;
    }
    ansi = max(ansi,curi);
    ansm = max(ansm,curm);
    write(ansm, " ",ansi,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
