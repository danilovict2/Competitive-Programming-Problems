/*
ID: danilos4
LANG: C++
TASK: combo
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
ofstream fout ("combo.out");
ifstream fin ("combo.in");
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

bool check(int a, int b){
    if(a < b)swap(a,b);
    return min(a-b, n-a+b) <= 2;
}

void solve(){
    read(n);
    int a[3];
    int b[3];
    read(a[0],a[1],a[2],b[0],b[1],b[2]);
    int ans = 0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            for(int k=1;k<=n;++k){
                if((check(i,a[0]) && check(j,a[1]) && check(k,a[2])) || (check(i,b[0]) && check(j,b[1]) && check(k,b[2])))++ans;
            }
        }
    }
    write(ans,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
