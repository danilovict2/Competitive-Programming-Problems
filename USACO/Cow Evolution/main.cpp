/*
ID: danilos4
LANG: C++
TASK: evolution
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
ofstream fout ("evolution.out");
ifstream fin ("evolution.in");
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

vector<string> characteristics[25];
vector<string> all_characteristics;
int n;

bool check(int i, int j){
	int a=0,b=0,ab=0;
	forn(k,n){
		vector<string> &v = characteristics[k];
		bool has_a=false, has_b=false;
		for(auto x:v){
			if(x == all_characteristics[i])has_a = true;
			if(x == all_characteristics[j])has_b = true;
		}
		if(has_a && has_b)ab++;
		else if(has_a)a++;
		else if(has_b)b++;
	}
	return ab > 0 && a > 0 && b > 0;
}

void solve(){
	read(n);
	string s;
	forn(i,n){
		int k;
		read(k);
		forn(j,k){
			read(s);
			characteristics[i].pb(s);
			bool found = false;
			for(auto x:all_characteristics)
				if(x == s)found = true;
			if(!found)all_characteristics.pb(s);
		}
	}
	bool ok = true;
	forn(i, all_characteristics.size())
		for(int j=i+1;j<all_characteristics.size();++j)
			if(check(i, j))ok = false;
	if(ok)write("yes\n");
	else write("no\n");
}


int main(void){
	ios::sync_with_stdio(0);
	fin.tie(0);
	fout.tie(0);
	solve();
	return 0;
}
