/*
ID: danilos4
LANG: C++
TASK: dualpal
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
ofstream fout ("dualpal.out");
ifstream fin ("dualpal.in");
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

int n,s;

bool check(int n, int base){
    string s;
    while(n > 0){
        s.pb((n%base)+48);
        n/=base;
    }
    string t = s;
    reverse(s.begin(),s.end());
    return s == t;
}

void solve(){
    read(n,s);
    int cnt = 0;
    for(int i=s+1;cnt<n;++i){
        int cur = 0;
        for(int base = 2; base<=10; ++base)
            if(check(i,base))++cur;
        if(cur >= 2){
            write(i,"\n");
            ++cnt;
        }        
    }
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
