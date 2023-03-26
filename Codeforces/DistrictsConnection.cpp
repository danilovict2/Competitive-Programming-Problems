#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }

int t,n;


void solve(){
	cin >> n;
	vector<int> a(n);
	for (auto &it : a) cin >> it;
	vector<pair<int, int>> res;
	int idx = -1;
	for (int i = 1; i < n; ++i) {
		if (a[i] != a[0]) {
			idx = i;
			res.push_back({1, i + 1});
		}
	}
	if (idx == -1) {
		cout << "NO" << endl;
		return;
	}
	for (int i = 1; i < n; ++i) {
		if (a[i] == a[0]) {
			res.push_back({idx + 1, i + 1});
		}
	}
	cout << "YES" << endl;
	for (auto [x, y] : res) cout << x << " " << y << endl;
	
}



int main(void){
    cin>>t;
	while(t--)solve();
	return 0;
}

