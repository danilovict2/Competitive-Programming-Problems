/*
ID: danilos4
LANG: C++
TASK: barn1
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
ofstream fout ("barn1.out");
ifstream fin ("barn1.in");
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



void solve(){
    int m,s,c;
    read(m,s,c);
    int stalls[s+1]={0}, occStalls[c];
    forn(i,c){
        read(occStalls[i]);
        stalls[occStalls[i]] = 1;
    }
    sort(occStalls, occStalls + c);
    vector<int> emptySpace;
    int len = 0;
    int i = occStalls[0];
    while(i<=occStalls[c-1]){
        if(!stalls[i])++len;
        else if(len){
            emptySpace.pb(len);
            len = 0;
        }
        ++i;
    }
    sort(emptySpace.begin(),emptySpace.end(), greater<int>());
    int ans = 0;
    for(int i=0;i<emptySpace.size();++i){
        if(i+1 <= m-1)continue;
        ans += emptySpace[i];
    }
    write(c+ans,"\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
