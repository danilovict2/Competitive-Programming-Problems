/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int n;


void solve(){
    int tmp;
    vector <pair<int,int>> ev;
    vector <pair<int,int>> odd;
    for(int i=0;i<n;++i){
        cin>>tmp;
        if(tmp%2==0){
            ev.push_back(make_pair(i,tmp));
        }else odd.push_back(make_pair(i,tmp));
    }
    int res = (ev.size() > odd.size())? odd[0].first+1:ev[0].first+1;
    cout<<res<<endl;
}

int main(void){
    cin>>n;
    solve();
	return 0;
}
