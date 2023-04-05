/*
ID: danilos4
LANG: C++
TASK: wormhole
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
ofstream fout ("wormhole.out");
ifstream fin ("wormhole.in");
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
const int maxN = 20;

int n, X[maxN], Y[maxN];
int partner[maxN];
int next_on_right[maxN];

bool cycle_exists(void){
  for (int start=1; start<=n; start++) {
    int pos = start;
    for (int count=0; count<n; count++)
      pos = next_on_right[partner[pos]];
    if (pos != 0) return true;
  }
  return false;
}

int solve(){
   
  int i, total=0;
  for (i=1; i<=n; i++) 
    if (partner[i] == 0) break;

  
  if (i > n) {
    if (cycle_exists()) return 1;
    else return 0;
  }

  
  for (int j=i+1; j<=n; j++)
    if (partner[j] == 0) {
      
      partner[i] = j;
      partner[j] = i;
      total += solve();
      partner[i] = partner[j] = 0;
    }
  return total;
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	read(n);
    for (int i=1; i<=n; i++) read(X[i],Y[i]);
  
  for (int i=1; i<=n; i++)
    for (int j=1; j<=n; j++)
      if (X[j] > X[i] && Y[i] == Y[j])
	if (next_on_right[i] == 0 ||
	    X[j]-X[i] < X[next_on_right[i]]-X[i])
	  next_on_right[i] = j;

    write(solve(),"\n");
	return 0;
}
