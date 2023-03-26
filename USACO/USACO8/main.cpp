/*
ID: danilos4
LANG: C++
TASK: palsquare
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
ofstream fout ("palsquare.out");
ifstream fin ("palsquare.in");
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

int b;

void check(int n){
    string norm, sqrd;
    int sq = n*n;
    while(sq > 0){
        char c = (sq%b > 9) ? (sq%b)+55 : (sq%b) + 48;
        sqrd.pb(c);
        sq /= b;
    }
    while(n > 0){
        char c = (n%b > 9) ? (n%b)+55 : (n%b) + 48;
        norm.pb(c);
        n /= b;
    }
    string tmp = sqrd;
    reverse(sqrd.begin(),sqrd.end());
    reverse(norm.begin(),norm.end());
    if(tmp == sqrd)write(norm," ",sqrd,"\n");
}

void solve(){
    read(b);
    for(int i=1;i<=300;++i){
        check(i);
    }
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
