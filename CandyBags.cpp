/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    int N = pow(n,2);
    int inc = 1;
    for(int i=0;i<n;++i){
        for(int j=1;j<=n/2;++j){
            cout<<inc<<" "<<N<<" ";
            N--;
            inc++;
        }
        cout<<endl;
    }
    
}

int main(void){
	cin>>n;
    solve();
	return 0;
}
