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
const int maxN = 101;

int parent[maxN];
int siz[maxN]={0};
int n,m;

int find(int x){
	if(x!=parent[x])
        parent[x]=find(parent[x]);

	return parent[x];
}

 void unite(int x,int y){
    int a=find(x);
    int b=find(y);

    if(a==b) return;

    if(siz[a]<siz[b])parent[a]=b;
    else{
        parent[b]=a;
        if(siz[a]==siz[b])
        	siz[b]++;
    }
 }


void solve(){
	for(int i=0;i<=n;++i)
		parent[i] = i;
	int freq[maxN]={0}, cnt=0,no_lang=0;
	int k,v,u;
	for(int i=0;i<n;++i){
		read(k);
		if(k == 0){
			++no_lang;
			continue;
		}
		read(u);
		freq[u]++;
		for(int j=1;j<k;++j){
			read(v);
			freq[v]++;
			unite(u,v);
		}
	}
	int ans = 0;
	for(int i=1;i<=m;++i){
		if(freq[i] == 0)++cnt;
		else if(parent[i] == i)++ans;
	}
	ans = max(ans-1,0);
	if(cnt == m)write(n,"\n");
	else write(ans+no_lang,"\n");
}


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(n,m);
	solve();
	return 0;
}