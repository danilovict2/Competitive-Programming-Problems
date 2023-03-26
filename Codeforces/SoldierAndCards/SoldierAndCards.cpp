#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define mp make_pair
#define forn(i, j, n) for (int i = (j); i < n; ++i)
#define INF 0x3f3f3f3f
template <typename... T>
void read(T &...args)
{
	((cin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((cout << args), ...);
}
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 2 * 1e5;

int n;

void solve(){
	int k,k2;
	read(k);
	queue<int> first;
	queue<int> second;
	while(k--){
		int x;read(x);
		first.push(x);
	}
	read(k2);
	while(k2--){
		int x;read(x);
		second.push(x);
	}
	int cnt = 0;
	while(1){
		int frst=first.front();
        first.pop();
        int scnd=second.front();
        second.pop();
        cnt++;
        if(frst>scnd){
            first.push(scnd);
            first.push(frst);
        }
        else{
            second.push(frst);
            second.push(scnd);
        }
        if(first.empty()){
            write(cnt," 2","\n");
            break;
        }
        if(second.empty()){
            write(cnt," 1","\n");
			break;
        }
        if(cnt>100000){
			write("-1\n");
            return;
        }
    }
	
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(n);
	solve();
	return 0;
}