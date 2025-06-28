/*
ID: your_id_here
LANG: C++
TASK: gift1
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
ofstream fout ("gift1.out");
ifstream fin ("gift1.in");
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
    unordered_map<string,int> m;
    string s[n];
    forn(i,n){
        read(s[i]);
        m[s[i]] = 0;
    }
    for(int i=0;i<n;++i){
        int k,sum;
        string t;
        read(t,sum,k);
        m[t] = m[t] + ((sum)?sum%k:0) - sum;
        for(int j=0;j<k;++j){
            read(t);
            m[t] += sum/k;
        }
    }
    forn(i,n){
        write(s[i]," ",m[s[i]],"\n");
    }
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
