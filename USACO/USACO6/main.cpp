/*
ID: danilos4
LANG: C++
TASK: transform
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
ofstream fout ("transform.out");
ifstream fin ("transform.in");
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

int n;

string *rotate(string s[], int rotations){
    string *ret = new string[n];
    for(int i=0;i<n;++i){
        ret[i] = s[i];
    }
    for(int k=0;k<rotations;++k){
        for (int i = 0; i < n / 2; ++i) {
            for (int j = i; j < n - i - 1; ++j) {
                char temp = ret[i][j];
                ret[i][j] = ret[n - 1 - j][i];
                ret[n - 1 - j][i] = ret[n - 1 - i][n - 1 - j];
                ret[n - 1 - i][n - 1 - j] = ret[j][n - 1 - i];
                ret[j][n - 1 - i] = temp;
            }
        }
    }
    return ret;
}

string *reflect(string s[]){
    string *ret = new string[n];
    for(int i=0;i<n;++i){
        ret[i] = s[i];
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            ret[i][n - 1 - j] = s[i][j];
        }
    }
    return ret;
    
}

void solve(){
    read(n);
    string s[n],t[n];
    forn(i,n)read(s[i]);
    forn(i,n)read(t[i]);
    bool ok1 = true, ok2 = true, ok3 = true, ok4=true, ok51=true, ok52=true, ok53 = true, ok6 = true;
    string *ret1 = rotate(s,1);
    string *ret2 = rotate(s,2);
    string *ret3 = rotate(s,3);
    string *ret4 = reflect(s);
    string *ret51 = rotate(ret4,1);
    string *ret52 = rotate(ret4,2);
    string *ret53 = rotate(ret4,3); 
    forn(i,n){
        if(ret1[i] != t[i])ok1 = false;
        if(ret2[i] != t[i])ok2 = false;
        if(ret3[i] != t[i])ok3 = false;
        if(s[i] != t[i])ok6 = false;
        if(ret4[i] != t[i])ok4 = false;
        if(ret51[i] != t[i])ok51 = false;
        if(ret52[i] != t[i])ok52 = false;
        if(ret53[i] != t[i])ok53 = false;
    }
    if(ok1){write("1\n"); return;}
    else if(ok2){write("2\n"); return;}
    else if(ok3){write("3\n"); return;}
    else if(ok4){write("4\n");return;}
    else if(ok51 || ok52 || ok53){write("5\n");return;}
    else if(ok6){write("6\n"); return;}
    else write("7\n");
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
