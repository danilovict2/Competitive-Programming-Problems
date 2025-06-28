/*
ID: danilos4
LANG: C++
TASK: beads
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
ofstream fout ("beads.out");
ifstream fin ("beads.in");
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
    string s;
    read(s);
    int cnt[n]={0};
    forn(i,n){
        char c = s[i];
        int idx = i;
        int count = 0;
        char acc = '_';
        bool ok = 1;
        while((s[idx] == c || s[idx] == 'w' || ok || s[idx] == acc) && count < n){
            if(s[idx] != 'w'){
                acc = s[idx];
                ok = 0;
            }
            ++idx;
            idx%=n;
            ++count;
        }
        cnt[i] = count;
    }
    int ans = -1;
    for(int i=0;i<n;++i){
        ans = max(ans,cnt[i] + cnt[(i+cnt[i])%n]);
    }
    ans = min(ans,n);
    write(ans,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
