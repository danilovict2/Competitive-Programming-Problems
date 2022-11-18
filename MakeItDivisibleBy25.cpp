#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define N 100010
#define pb push_back
using namespace std;
const vector<pair<int,int>>nb={{-1,-1},{-1,1},{1,1},{1,-1},{-1,0},{1,0},{0,1},{0,-1}};
const vector<pair<int,int>>nc={{-1,0},{1,0},{0,1},{0,-1}};
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ return (a.second < b.second); }


const string subs[] = {"00", "25", "50", "75"};
int t;

int solve(string &s, string &t){
    int sptr = s.length() - 1;

	int ans = 0;
	while (sptr >= 0 && s[sptr] != t[1])
	{
		sptr--;
		ans++;
	}

	if (sptr < 0) return INT_MAX;

	sptr--;

	while (sptr >= 0 && s[sptr] != t[0])
	{
		sptr--;
		ans++;
	}

	return sptr < 0 ? INT_MAX : ans;
}



int main(void){
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int ans = INT_MAX;
        for(auto e:subs)
            ans=min(ans,solve(n,e));
        cout<<ans<<endl;
    }
	return 0;
}

