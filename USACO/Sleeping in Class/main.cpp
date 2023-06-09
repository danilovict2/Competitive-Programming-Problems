/*
ID: danilos4
LANG: C++
TASK: balancing
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
//ofstream fout ("balancing.out");
//ifstream fin ("balancing.in");
template <typename... T>
void read(T &...args){
	((cin >> args), ...);
}
template <typename... T>
void write(T... args){
	((cout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 1001;


void solve(){
	int n;
	read(n);
	int sum = 0, a[n];
	forn(i,n){
		read(a[i]);
		sum += a[i];
	}
	
	for(int r=sum;r>=1;--r){
		if(sum%r == 0){
			int targetSum = sum / r;
			int curSum = 0;
			bool ok = true;
			for(int i=0;i<n;++i){
				curSum += a[i];
				if(curSum > targetSum){
					ok = false;
					break;
				}

				if(curSum == targetSum){
					curSum = 0;
				}
			}
			if(ok){
				write(n-r,'\n');
				return;
			}
		}
	}
	write(0,'\n');
}


int main(void){
	ios::sync_with_stdio(0);
	//fin.tie(0);
	//fout.tie(0);
	int t;
	read(t);
	while(t--)solve();
	return 0;
}
