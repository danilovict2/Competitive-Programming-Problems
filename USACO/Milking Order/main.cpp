/*
ID: danilos4
LANG: C++
TASK: milkorder
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
ofstream fout ("milkorder.out");
ifstream fin ("milkorder.in");
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
const int maxN = 101;

int n,m,k;


bool check(vector<int> order, vector<int> &hierarchy){
	vector<int> cow_to_pos(n, -1);


	for (int i=0;i<n;++i)
		if (order[i] != -1)cow_to_pos[order[i]] = i;
	
	int h_idx = 0;
	for (int i=0;i<n&&h_idx<m;++i) {
		if(cow_to_pos[hierarchy[h_idx]] != -1){
			if(i > cow_to_pos[hierarchy[h_idx]])return false;
			i = cow_to_pos[hierarchy[h_idx]];
		}else{
			while(i < n && order[i] != -1)i++;
			if(i == n)return false;
			order[i] = hierarchy[h_idx];
			cow_to_pos[hierarchy[h_idx]] = i;
		}
		h_idx++;
	}
	return true;
	

}

void solve(){
	read(n,m,k);
	vector<int> hierarchy(m);
	forn(i,m){
		read(hierarchy[i]);
		hierarchy[i]--;
	}

	vector<int> order(n, -1);

	forn(i,k){
		int c, p;
		read(c,p);
		order[--p] = --c;
		if(c == 0){
			write(p+1,'\n');
			return;
		}
	}

	forn(i,n){
		if(order[i] == -1){
			order[i] = 0;
			if(check(order, hierarchy)){
				write(i+1,'\n');
				return;
			}
			order[i] = -1;
		}
	}
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
