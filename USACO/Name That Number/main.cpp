/*
ID: danilos4
LANG: C++
TASK: namenum
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
ofstream fout ("namenum.out");
ifstream fin ("namenum.in");
ifstream dict("dict.txt");
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

map<char, vector<char>> m;

void init(){
    m['2'] = {'A','B','C'};
    m['3'] = {'D','E','F'};
    m['4'] = {'G','H','I'};
    m['5'] = {'J','K','L'};
    m['6'] = {'M','N','O'};
    m['7'] = {'P','R','S'};
    m['8'] = {'T','U','V'};
    m['9'] = {'W','X','Y'};
}

void solve(){
    string n;
    read(n);
    string s;
    vector<string> ans;
    while(dict >> s){
        if(s.size() != n.size())continue;
        bool ok = true;
        for(int i=0;i<s.size();++i){
            if(s[i] != m[n[i]][0] && s[i] != m[n[i]][1] && s[i] != m[n[i]][2])
                ok = false;
        }
        if(ok)ans.pb(s);
    }
    if(ans.empty())write("NONE\n");
    else for(auto x:ans)write(x,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
    init();
	solve();
	return 0;
}
