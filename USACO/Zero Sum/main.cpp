/*
ID: danilos4
LANG: C++
TASK: zerosum
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define MOD 9901
#define mp make_pair
#define sz(a) a.size()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
ofstream fout ("zerosum.out");
ifstream fin ("zerosum.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 52;

int n;
set<string> ans;

int calc(string s){
    int sum = 0, sign = 1, cur = 0;
    for(auto x:s){
        if(x == '+'){
            sum += cur * sign;
            cur = 0, sign = 1;
        }else if(x == '-'){
            sum += cur * sign;
            cur = 0, sign = -1;
        }else if(x == ' '){
            cur = cur*10;
        }else cur+=(x-'0');
    }
    sum += cur * sign;
    return sum;
}

void dfs(int cur, string s){
    if(cur == n+1){
        if(calc(s) == 0)ans.insert(s);
        return;    
    }
    dfs(cur+1, s + '+' + to_string(cur));
    dfs(cur+1, s + '-' + to_string(cur));
    dfs(cur+1, s + ' ' + to_string(cur));
}

void solve(){
    read(n);    
    string s = "1";  
    dfs(2,s);
    for(auto x:ans){
        write(x,'\n');
    }
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
