/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int t;
int n,m;



void solve(){
    cin>>n>>m;
    string a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int res = 0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j] == 'R' && j+1 == m)res++;
            if(a[i][j] == 'D' && i+1 == n)res++;
        }
    }
    cout<<res<<endl;
}   

int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

