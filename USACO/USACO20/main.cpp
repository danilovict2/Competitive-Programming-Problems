/*
ID: danilos4
LANG: C++
TASK: sprime
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
ofstream fout ("sprime.out");
ifstream fin ("sprime.in");
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

vi ans;
int N;

bool isPrime(ll n){
    if((n%2 == 0 && n > 2) || n==1)return false;
    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i == 0)return false;
    }
    return true;
}

void calc(int n,int num){
    if(n == 0){
        if(isPrime(num))
            write(num,"\n");
        return;
    }
    int i = 1;
	if (n == N) {
		calc(n-1,num+2);
		i = 3;
	}
	if (num == 0 || isPrime(num)) {
		num *= 10;
		for (i;i<=9;i+=2){
			calc(n - 1, num + i);
		}
	}
}

void solve(){
    read(N);
    calc(N,0);
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
