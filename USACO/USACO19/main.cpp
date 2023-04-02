/*
ID: danilos4
LANG: C++
TASK: pprime
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
ofstream fout ("pprime.out");
ifstream fin ("pprime.in");
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
const int maxN = 1001;

vector<int> pal;

bool isPrime(ll n){
    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i == 0)return false;
    }
    return true;
}

void generatePals(){
    for(int d1=5;d1<=9;d1+=2)pal.pb(d1);
    for(int d1=1;d1<=9;d1+=2)pal.pb(d1*10 + d1);
    ll x;
    for(int d1=1;d1<=9;d1+=2){
        for(int d2=0;d2<=9;++d2){
            x = d1*100 + d2*10 + d1;
            pal.pb(x);  
        }
    }
    for(int d1=1;d1<=9;d1+=2){
        for(int d2=0;d2<=9;++d2){
            x = d1*1000 + d2*100 + d2*10 + d1;
            pal.pb(x);  
        }
    }
    for(int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            for (int d3=0; d3<=9;d3++) {
	            x = 10000*d1 + 1000*d2 + 100*d3 + 10*d2 + d1;
                pal.pb(x);
	        }
        }
    }
    for(int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            for (int d3=0; d3<=9;d3++) {
	            x = 100000*d1 + 10000*d2 + 1000*d3 + 100*d3 + 10*d2 + d1;
                pal.pb(x);
	        }
        }
    }
    for(int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            for (int d3=0; d3<=9;d3++) {
	            for(int d4=0;d4<=9;++d4){
                    x = 1000000*d1 + 100000*d2 + 10000*d3 + 1000*d4 + 100*d3 + 10*d2 + d1;
                    pal.pb(x);
                }
	        }
        }
    }
    for(int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            for (int d3=0; d3<=9;d3++) {
	            for(int d4=0;d4<=9;++d4){
                    x = 10000000*d1 + 1000000*d2 + 100000*d3 + 10000*d4 + 1000*d4 + 100*d3 + 10*d2 + d1;
                    pal.pb(x);
                }
	        }
        }
    }
}

void solve(){
    ll a,b;
    read(a,b);
    generatePals();
    for(auto x:pal){
        if(x > b)break;
        if(x >= a){
            if(isPrime(x))write(x,"\n");
        }
    }
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
