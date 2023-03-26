#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

string t;
int n;

void solve(){
    int index = 0;
    int gap = 1;
    while (index < n)
        cout << t[index], index += gap, gap++;
    cout<<endl;
    
}

    

int main(void){
    cin>>n>>t;
    solve();    
    return 0;
}