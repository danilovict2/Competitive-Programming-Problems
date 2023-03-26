/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    if(n%2!=0){
        cout<<-1<<endl;
        return;
    }
    int p[n];
    for(int i=0;i<n;++i){
        p[i] = i+1;
    }
    for(int i=0;i<n;++i){
        swap(p[i],p[i+1]);
        ++i;
    }
    for(int i=0;i<n;++i){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main(void){
	cin>>n;
    solve();
	return 0;
}
