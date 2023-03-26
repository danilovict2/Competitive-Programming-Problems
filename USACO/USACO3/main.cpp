/*
ID: danilos4
LANG: C++
TASK: friday
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
ofstream fout ("friday.out");
ifstream fin ("friday.in");
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
const int maxN = 2 * 1e5 + 1;

bool isLeap(int year){
    if(year%100 == 0)
        return year%400 == 0;
    return year%4 == 0;
}

void solve(){
	int n;
    read(n);
    int currDay=0;
    int ans[]={0,0,0,0,0,0,0};
    int normDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int leapDays[]={31,29,31,30,31,30,31,31,30,31,30,31};

    for(int year=1900; year<1900+n; ++year){
	    for(int month=0; month<12; ++month){
		    int weekday=(currDay+12)%7;
		    ans[(weekday+2)%7]++;
		    currDay += isLeap(year) ? leapDays[month]:normDays[month];
	    }
    }
    for(int i=0;i<7;++i){
        write(ans[i]);
        if(i == 6)write("\n");
        else write(" ");
    }
}
 

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
