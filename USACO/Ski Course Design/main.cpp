/*
ID: danilos4
LANG: C++
TASK: skidesign
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
ofstream fout ("skidesign.out");
ifstream fin ("skidesign.in");
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

void solve(){
    read(n);
    int a[n];
    forn(i,n)read(a[i]);
    ll ans = (int)INF;
    for(int s = 0; s<=83;++s){
        int e = s+17;
        ll sum = 0;
        forn(i,n){
            if(a[i] < s)sum+=(s-a[i])*(s-a[i]);
            if(a[i] > e)sum+=(a[i]-e)*(a[i]-e);
        }
        ans = min(ans,sum);
    }
    write(ans,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
