/*
ID: danilos4
LANG: C++
TASK: whatbase
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
ofstream fout ("whatbase.out");
ifstream fin ("whatbase.in");
template <typename... T>
void read(T &...args){
	((fin >> args), ...);
}
template <typename... T>
void write(T... args){
	((fout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 32;

ll calc(int n, int b){
	ll sum = 0, i = 0;
	while(n){
		int dig = n%10;
		sum += dig * (pow(b,i));
		n/=10;
		++i;
	}
	return sum;
}

void solve(){
	int x,y;
	read(x,y);
	int b1 = 15, b2 = 15;
	while(b1 <= 15000 && b2 <= 15000){
		ll ans1 = calc(x,b1);
		ll ans2 = calc(y, b2);
		if(ans1 == ans2){
			write(b1," ",b2,'\n');
			return;
		}else if(ans1 > ans2)++b2;
		else ++b1;
	}
	
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	int t;
	read(t);
	while(t--)solve();
	return 0;
}
