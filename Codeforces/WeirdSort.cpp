#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }


int t,n,m;


void solve(){
		cin >> n >> m;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		vector<int> p(n);
		for (int i = 0; i < m; ++i) {
			int pos;
			cin >> pos;
			p[pos - 1] = 1;
		}
		while (true) {
			bool ok = false;
			for (int i = 0; i < n; ++i) {
				if (p[i] && a[i] > a[i + 1]) {
					ok = true;
					swap(a[i], a[i + 1]);
				}
			}
			if (!ok) break;
		}
		bool ok = true;
		for (int i = 0; i < n - 1; ++i) {
			ok &= a[i] <= a[i + 1];
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
}



int main(void){
	cin>>t;
	while(t--)solve();
	return 0;
}

