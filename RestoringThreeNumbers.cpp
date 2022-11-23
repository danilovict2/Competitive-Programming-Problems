/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int x[4];

void solve(){
    
}

int main(void){
    for(int i=0;i<4;++i){
        cin>>x[i];
    }
    sort(x,x+4);
    cout<<x[3] - x[0]<<" "<<x[3] - x[1]<<" "<<x[3] - x[2]<<endl;
    return 0;
}